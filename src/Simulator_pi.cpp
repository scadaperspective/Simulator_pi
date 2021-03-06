/***************************************************************************
 *
 * Project:  OpenCPN
 * Purpose:  Simulator Plugin
 * Author:   Ron Southworth Mike Rossiter, and many others especially
 *
 ***************************************************************************
 *   Copyright (C) 1985-2019 by Ron Southworth  Mike Rossiter & many Others*
 *   $EMAIL$                                                               *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************
 */

#include "wx/wxprec.h"

#ifndef  WX_PRECOMP
  #include "wx/wx.h"
#endif //precompiled headers

#include <cmath>
#include <wx/stdpaths.h>
#include <wx/treectrl.h>
#include <wx/fileconf.h>

// #include "Utilities.h"
// #include "Boat.h"
#include "Simulator_pi.h"
#include "Simulatorgui_impl.h"
#include "Simulatorgui.h"
#include "ocpn_plugin.h" 
#include "folder.xpm"

#include "wx/jsonreader.h"
#include "wx/jsonwriter.h"
#ifdef __WXMSW__
#include "GL/gl.h"            // Windows
#include <GL/glu.h>
#else
#ifndef __OCPN__ANDROID__
//#include <GL/gl.h>
//#include <GL/glu.h>
#else
#include "qopengl.h"                  // this gives us the qt runtime gles2.h
#include "GL/gl_private.h"
#endif
#endif




// Define minimum and maximum versions of the grib plugin supported
#define GRIB_MAX_MAJOR 4
#define GRIB_MAX_MINOR 1
#define GRIB_MIN_MAJOR 4
#define GRIB_MIN_MINOR 1

class Simulator_pi;
class Dlg;

// the class factories, used to create and destroy instances of the PlugIn

extern "C" DECL_EXP opencpn_plugin* create_pi(void *ppimgr)
{
    return new Simulator_pi(ppimgr);
}

extern "C" DECL_EXP void destroy_pi(opencpn_plugin* p)
{
    delete p;
}

//---------------------------------------------------------------------------------------------------------
//
//    Simulator PlugIn Implementation
//
//---------------------------------------------------------------------------------------------------------

#include "icons.h"

//---------------------------------------------------------------------------------------------------------
//
//          PlugIn initialization and de-init
//
//---------------------------------------------------------------------------------------------------------




Simulator_pi::Simulator_pi(void *ppimgr)
      :opencpn_plugin_16 (ppimgr)
{
      // Create the PlugIn icons
      initialize_images();
	  m_bShowSimulator = false;
}

Simulator_pi::~Simulator_pi(void)
{
     // delete _img_Simulator_pi;
     delete _img_SimulatorIcon;

	 if (m_pDialog){

		 wxFileConfig *pConf = GetOCPNConfigObject();;

		 if (pConf) {

			 pConf->SetPath(wxT("/Settings/Simulator_pi")); // Might have been a bug in settings here

			 pConf->Write(wxT("simulatorUseAis"), m_bCopyUseAis);
			 pConf->Write(wxT("simulatorUseGSV"), m_bCopyUseGSV);
			 pConf->Write(wxT("simulatorUseGGA"), m_bCopyUseGGA);
			 pConf->Write(wxT("simulatorUseGLL"), m_bCopyUseGLL);
			 pConf->Write(wxT("simulatorUseHDT"), m_bCopyUseHDT);
			 pConf->Write(wxT("simulatorUseHDM"), m_bCopyUseHDM);
			 pConf->Write(wxT("simulatorUseVTG"), m_bCopyUseVTG);
			 pConf->Write(wxT("simulatorUseRMC"), m_bCopyUseRMC);
			 pConf->Write(wxT("simulatorUseVHW"), m_bCopyUseVHW);
			 pConf->Write(wxT("simulatorUseRSA"), m_bCopyUseRSA);
			 pConf->Write(wxT("simulatorUseMWVA"), m_bCopyUseMWVA);
			 pConf->Write(wxT("simulatorUseMWVT"), m_bCopyUseMWVT);
			 pConf->Write(wxT("simulatorUseDBT"), m_bCopyUseDBT);
			 pConf->Write(wxT("simulatorUseVDR"), m_bCopyUseVDR);
			 pConf->Write(wxT("simulatorUseXDRPR"), m_bCopyUseXDRPR);
			 pConf->Write(wxT("simulatorUseXDRAW"), m_bCopyUseXDRAW);
			 pConf->Write(wxT("simulatorUseXDRMB"), m_bCopyUseXDRMB);

			 pConf->Write(wxT("simulatorUseFile"), m_bCopyUseFile);
			 pConf->Write(wxT("simulatorMMSI"), m_tCopyMMSI);
//			 pConf->Write(wxT("simulatorUseGSV"), m_bCopyUseGSV);
		 }
	 }
     
}

int Simulator_pi::Init(void)
{
      AddLocaleCatalog( wxT("opencpn-Simulator_pi") );

      // Set some default private member parameters
      m_hr_dialog_x = 40;
      m_hr_dialog_y = 80;
	  m_hr_dialog_sx = 400;
	  m_hr_dialog_sy = 300;
      ::wxDisplaySize(&m_display_width, &m_display_height);

      //    Get a pointer to the opencpn display canvas, to use as a parent for the POI Manager dialog
      m_parent_window = GetOCPNCanvasWindow();

      //    Get a pointer to the opencpn configuration object
      m_pconfig = GetOCPNConfigObject();

      //    And load the configuration items
      LoadConfig();

      //    This PlugIn needs a toolbar icon, so request its insertion
	if(m_bSimulatorShowIcon) {
#ifdef SIMULATOR_USE_SVG
        m_leftclick_tool_id = InsertPlugInToolSVG(wxT( "Simulator" ), _svg_simulator, _svg_simulator_rollover, _svg_simulator_toggled,
            wxITEM_CHECK, _("Simulator"), wxT( "" ), NULL, Simulator_TOOL_POSITION, 0, this);
#else
		m_leftclick_tool_id = InsertPlugInTool(wxT(""), _img_SimulatorIcon, _img_SimulatorIcon, wxITEM_CHECK,
            _("Simulator"), wxT(""), NULL,
             Simulator_TOOL_POSITION, 0, this);
#endif
    }
	wxMenu dummy_menu;
	m_position_menu_id = AddCanvasContextMenuItem
		(new wxMenuItem(&dummy_menu, -1, _("Move Sim Here")), this);
	SetCanvasContextMenuItemViz(m_position_menu_id, true);



      m_pDialog = NULL;

      return (
			  WANTS_OVERLAY_CALLBACK |
			  WANTS_OPENGL_OVERLAY_CALLBACK |
                          WANTS_TOOLBAR_CALLBACK    |
                          INSTALLS_TOOLBAR_TOOL     |   
			  WANTS_CURSOR_LATLON |
			  WANTS_NMEA_SENTENCES|
			  WANTS_AIS_SENTENCES|
			  WANTS_PREFERENCES|
			  WANTS_PLUGIN_MESSAGING|
              WANTS_CONFIG           
           );
}

bool Simulator_pi::DeInit(void)
{
      //    Record the dialog position
      if (NULL != m_pDialog)
      {
            //Capture dialog position
            wxPoint p = m_pDialog->GetPosition();
			wxRect r = m_pDialog->GetRect();
            SetSimulatorDialogX(p.x);
            SetSimulatorDialogY(p.y);
			SetSimulatorDialogSizeX(r.GetWidth());
			SetSimulatorDialogSizeY(r.GetHeight());

			if ((m_pDialog->m_Timer != NULL) && (m_pDialog->m_Timer->IsRunning())){ // need to stop the timer or crash on exit
				m_pDialog->m_Timer->Stop();
			}
            m_pDialog->Close();
            delete m_pDialog;
            m_pDialog = NULL;

			m_bShowSimulator = false;
			SetToolbarItemState( m_leftclick_tool_id, m_bShowSimulator );
      }	
    
    SaveConfig();

    RequestRefresh(m_parent_window); // refresh main window

    return true;
}

int Simulator_pi::GetAPIVersionMajor()
{
      return MY_API_VERSION_MAJOR;
}

int Simulator_pi::GetAPIVersionMinor()
{
      return MY_API_VERSION_MINOR;
}

int Simulator_pi::GetPlugInVersionMajor()
{
      return PLUGIN_VERSION_MAJOR;
}

int Simulator_pi::GetPlugInVersionMinor()
{
      return PLUGIN_VERSION_MINOR;
}

wxBitmap *Simulator_pi::GetPlugInBitmap()
{
      return _img_SimulatorIcon;
}

wxString Simulator_pi::GetCommonName()
{
      return _("Simulator");
}


wxString Simulator_pi::GetShortDescription()
{
      return _("Test Suite Simulator");
}

wxString Simulator_pi::GetLongDescription()
{
      return _("Test Suite Vessel NMEA Data Simulator");
}

int Simulator_pi::GetToolbarToolCount(void)
{
      return 1;
}

void Simulator_pi::SetColorScheme(PI_ColorScheme cs)
{
      if (NULL == m_pDialog)
            return;

      DimeWindow(m_pDialog);
}

void Simulator_pi::ShowPreferencesDialog(wxWindow* parent)
{
	SimulatorPreferences *Pref = new SimulatorPreferences(parent);

	Pref->m_cbTransmitAis->SetValue(m_bCopyUseAis);
	Pref->m_bUseGSV->SetValue(m_bCopyUseGSV);
	Pref->m_bUseGGA->SetValue(m_bCopyUseGGA);
	Pref->m_bUseGLL->SetValue(m_bCopyUseGLL);
	Pref->m_bUseHDT->SetValue(m_bCopyUseHDT);
	Pref->m_bUseHDM->SetValue(m_bCopyUseHDM);
	Pref->m_bUseVTG->SetValue(m_bCopyUseVTG);
	Pref->m_bUseRMC->SetValue(m_bCopyUseRMC);
	Pref->m_bUseVHW->SetValue(m_bCopyUseVHW);
	Pref->m_bUseRSA->SetValue(m_bCopyUseRSA);
	Pref->m_bUseMWVA->SetValue(m_bCopyUseMWVA);
	Pref->m_bUseMWVT->SetValue(m_bCopyUseMWVT);
	Pref->m_bUseDBT->SetValue(m_bCopyUseDBT);
	Pref->m_bUseVDR->SetValue(m_bCopyUseVDR);
	Pref->m_bUseXDRPR->SetValue(m_bCopyUseXDRPR);
	Pref->m_bUseXDRAW->SetValue(m_bCopyUseXDRAW);
	Pref->m_bUseXDRMB->SetValue(m_bCopyUseXDRMB);

	Pref->m_cbAisToFile->SetValue(m_bCopyUseFile);
	Pref->m_textCtrlMMSI->SetValue(m_tCopyMMSI);


	if (Pref->ShowModal() == wxID_OK) {
		
		bool copyAis = Pref->m_cbTransmitAis->GetValue();
		bool copyUseGSV = Pref->m_bUseGSV->GetValue();
		bool copyUseGGA = Pref->m_bUseGGA->GetValue();
		bool copyUseGLL = Pref->m_bUseGLL->GetValue();
		bool copyUseHDT = Pref->m_bUseHDT->GetValue();
		bool copyUseHDM = Pref->m_bUseHDM->GetValue();
		bool copyUseVTG = Pref->m_bUseVTG->GetValue();
		bool copyUseRMC = Pref->m_bUseRMC->GetValue();
		bool copyUseVHW = Pref->m_bUseVHW->GetValue();
		bool copyUseRSA = Pref->m_bUseRSA->GetValue();
		bool copyUseMWVA = Pref->m_bUseMWVA->GetValue();
		bool copyUseMWVT = Pref->m_bUseMWVT->GetValue();
		bool copyUseDBT = Pref->m_bUseDBT->GetValue();
		bool copyUseVDR = Pref->m_bUseVDR->GetValue();
		bool copyUseXDRPR = Pref->m_bUseXDRPR->GetValue();
		bool copyUseXDRAW = Pref->m_bUseXDRAW->GetValue();
		bool copyUseXDRMB = Pref->m_bUseXDRMB->GetValue();

		bool copyFile = Pref->m_cbAisToFile->GetValue();

		wxString copyMMSI = Pref->m_textCtrlMMSI->GetValue();

		if (m_bCopyUseAis != copyAis || m_bCopyUseFile != copyFile || m_tCopyMMSI != copyMMSI
				 || m_bCopyUseGSV != copyUseGSV || m_bCopyUseGGA != copyUseGGA || m_bCopyUseGLL != copyUseGLL
				 || m_bCopyUseHDT != copyUseHDT || m_bCopyUseHDM != copyUseHDM || m_bCopyUseVTG != copyUseVTG || m_bCopyUseRMC != copyUseRMC || m_bCopyUseVHW != copyUseVHW
				 || m_bCopyUseRSA != copyUseRSA || m_bCopyUseMWVA != copyUseMWVA || m_bCopyUseMWVT != copyUseMWVT || m_bCopyUseDBT != copyUseDBT
				 || m_bCopyUseVDR != copyUseVDR || m_bCopyUseXDRPR != copyUseXDRPR || m_bCopyUseXDRAW != copyUseXDRAW || m_bCopyUseXDRMB != copyUseXDRMB) {

			m_bCopyUseAis = copyAis;
			m_bCopyUseGSV = copyUseGSV;
			m_bCopyUseGGA = copyUseGGA;
			m_bCopyUseGLL = copyUseGLL;
			m_bCopyUseHDT = copyUseHDT;
			m_bCopyUseHDM = copyUseHDM;
			m_bCopyUseVTG = copyUseVTG;
			m_bCopyUseRMC = copyUseRMC;
			m_bCopyUseVHW = copyUseVHW;
			m_bCopyUseRSA = copyUseRSA;
			m_bCopyUseMWVA = copyUseMWVA;
			m_bCopyUseMWVT = copyUseMWVT;
			m_bCopyUseDBT = copyUseDBT;
			m_bCopyUseVDR = copyUseVDR;
			m_bCopyUseXDRPR = copyUseXDRPR;
			m_bCopyUseXDRAW = copyUseXDRAW;
			m_bCopyUseXDRMB = copyUseXDRMB;

			m_bCopyUseFile = copyFile;
			m_tCopyMMSI = copyMMSI;
		}

		if (m_pDialog)
		{		
			m_pDialog->m_bUseAis = m_bCopyUseAis;
			m_pDialog->m_bUseGSV = m_bCopyUseGSV;
			m_pDialog->m_bUseGGA = m_bCopyUseGGA;
			m_pDialog->m_bUseGLL = m_bCopyUseGLL;
			m_pDialog->m_bUseHDT = m_bCopyUseHDT;
			m_pDialog->m_bUseHDM = m_bCopyUseHDM;
			m_pDialog->m_bUseVTG = m_bCopyUseVTG;
			m_pDialog->m_bUseRMC = m_bCopyUseRMC;
			m_pDialog->m_bUseVHW = m_bCopyUseVHW;
			m_pDialog->m_bUseRSA = m_bCopyUseRSA;
			m_pDialog->m_bUseMWVA = m_bCopyUseMWVA;
			m_pDialog->m_bUseMWVT = m_bCopyUseMWVT;
			m_pDialog->m_bUseDBT = m_bCopyUseDBT;
			m_pDialog->m_bUseVDR = m_bCopyUseVDR;
			m_pDialog->m_bUseXDRPR = m_bCopyUseXDRPR;
			m_pDialog->m_bUseXDRAW = m_bCopyUseXDRAW;
			m_pDialog->m_bUseXDRMB = m_bCopyUseXDRMB;

			m_pDialog->m_bUseFile = m_bCopyUseFile;
			m_pDialog->m_tMMSI = m_tCopyMMSI;
		}
		
		SaveConfig();

		RequestRefresh(m_parent_window); // refresh main window
	}

}


void Simulator_pi::OnToolbarToolCallback(int id)
{
	bool starting = false;

	double scale_factor = GetOCPNGUIToolScaleFactor_PlugIn();
	if (scale_factor != m_GUIScaleFactor) starting = true;
    
	if(NULL == m_pDialog)
      {
            m_pDialog = new Dlg(m_parent_window);
            m_pDialog->plugin = this;
			m_pDialog->m_Timer = new wxTimer(m_pDialog);			
            m_pDialog->Move(wxPoint(m_hr_dialog_x, m_hr_dialog_y));	
			m_pDialog->SetSize(m_hr_dialog_sx, m_hr_dialog_sy);			
      }

	 // m_pDialog->Fit();
	  //Toggle 
	  m_bShowSimulator = !m_bShowSimulator;	  

      //    Toggle dialog? 
      if(m_bShowSimulator) {
		  m_pDialog->Move(wxPoint(m_hr_dialog_x, m_hr_dialog_y));
		  m_pDialog->SetSize(m_hr_dialog_sx, m_hr_dialog_sy);
          m_pDialog->Show();         
	  }
	  else {
		  m_pDialog->Hide();
	  }
     
      // Toggle is handled by the toolbar but we must keep plugin manager b_toggle updated
      // to actual status to ensure correct status upon toolbar rebuild
      SetToolbarItemState( m_leftclick_tool_id, m_bShowSimulator);

	  //Capture dialog position
	  wxPoint p = m_pDialog->GetPosition();
	  wxRect r = m_pDialog->GetRect();
	  SetSimulatorDialogX(p.x);
	  SetSimulatorDialogY(p.y);
	  SetSimulatorDialogSizeX(r.GetWidth());
	  SetSimulatorDialogSizeY(r.GetHeight());


      RequestRefresh(m_parent_window); // refresh main window
}

bool Simulator_pi::LoadConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath (wxT("/Settings/Simulator_pi"));
			pConf->Read (wxT("ShowSimulatorIcon"), &m_bSimulatorShowIcon, 1);
			pConf->Read(wxT("SimulatorUseAis"), &m_bCopyUseAis, 0);
			pConf->Read(wxT("SimulatorUseGSV"), &m_bCopyUseGSV, 0);
			pConf->Read(wxT("SimulatorUseGGA"), &m_bCopyUseGGA, 0);
			pConf->Read(wxT("SimulatorUseGLL"), &m_bCopyUseGLL, 0);
			pConf->Read(wxT("SimulatorUseHDT"), &m_bCopyUseHDT, 0);
			pConf->Read(wxT("SimulatorUseHDM"), &m_bCopyUseHDM, 0);
			pConf->Read(wxT("SimulatorUseVTG"), &m_bCopyUseVTG, 0);
			pConf->Read(wxT("SimulatorUseRMC"), &m_bCopyUseRMC, 0);
			pConf->Read(wxT("SimulatorUseVHW"), &m_bCopyUseVHW, 0);
			pConf->Read(wxT("SimulatorUseRSA"), &m_bCopyUseRSA, 0);
    		pConf->Read(wxT("SimulatorUseMWVA"), &m_bCopyUseMWVA, 0);
    		pConf->Read(wxT("SimulatorUseMWVT"), &m_bCopyUseMWVT, 0);
    		pConf->Read(wxT("SimulatorUseDBT"), &m_bCopyUseDBT, 0);
    		pConf->Read(wxT("SimulatorUseVDR"), &m_bCopyUseVDR, 0);
    		pConf->Read(wxT("SimulatorUseXDRPR"), &m_bCopyUseXDRPR, 0);
    		pConf->Read(wxT("SimulatorUseXDRAW"), &m_bCopyUseXDRAW, 0);
    		pConf->Read(wxT("SimulatorUseXDRMB"), &m_bCopyUseXDRMB, 0);

			pConf->Read(wxT("SimulatorUseFile"), &m_bCopyUseFile, 0);
			m_tCopyMMSI = pConf->Read(wxT("SimulatorMMSI"), wxT("12345"));

            m_hr_dialog_x =  pConf->Read (wxT("DialogPosX"), 40L );
            m_hr_dialog_y =  pConf->Read (wxT("DialogPosY"), 140L);
			m_hr_dialog_sx = pConf->Read (wxT("DialogSizeX"), 330L);
#ifdef __WXOSX__
			m_hr_dialog_sy = pConf->Read (wxT("DialogSizeY"), 250L);
#else
            m_hr_dialog_sy = pConf->Read (wxT("DialogSizeY"), 300L);
#endif
            if((m_hr_dialog_x < 0) || (m_hr_dialog_x > m_display_width))
                  m_hr_dialog_x = 40;
            if((m_hr_dialog_y < 0) || (m_hr_dialog_y > m_display_height))
                  m_hr_dialog_y = 140;

            return true;
      }
      else
            return false;
}

bool Simulator_pi::SaveConfig(void)
{
      wxFileConfig *pConf = (wxFileConfig *)m_pconfig;

      if(pConf)
      {
            pConf->SetPath(wxT("/Settings/Simulator_pi"));
			pConf->Write(wxT("ShowSimulatorIcon"), m_bSimulatorShowIcon);
			pConf->Write(wxT("SimulatorUseAis"), m_bCopyUseAis);
			pConf->Write(wxT("SimulatorUseGSV"), m_bCopyUseGSV);
			pConf->Write(wxT("SimulatorUseGGA"), m_bCopyUseGGA);
			pConf->Write(wxT("SimulatorUseGLL"), m_bCopyUseGLL);
			pConf->Write(wxT("SimulatorUseHDT"), m_bCopyUseHDT);
			pConf->Write(wxT("SimulatorUseHDM"), m_bCopyUseHDM);
			pConf->Write(wxT("SimulatorUseVTG"), m_bCopyUseVTG);
			pConf->Write(wxT("SimulatorUseRMC"), m_bCopyUseRMC);
			pConf->Write(wxT("SimulatorUseVHW"), m_bCopyUseVHW);
			pConf->Write(wxT("SimulatorUseRSA"), m_bCopyUseRSA);
			pConf->Write(wxT("SimulatorUseMWVA"), m_bCopyUseMWVA);
			pConf->Write(wxT("SimulatorUseMWVT"), m_bCopyUseMWVT);
			pConf->Write(wxT("SimulatorUseDBT"), m_bCopyUseDBT);
			pConf->Write(wxT("SimulatorUseVDR"), m_bCopyUseVDR);
			pConf->Write(wxT("SimulatorUseXDRPR"), m_bCopyUseXDRPR);
			pConf->Write(wxT("SimulatorUseXDRAW"), m_bCopyUseXDRAW);
			pConf->Write(wxT("SimulatorUseXDRMB"), m_bCopyUseXDRMB);

			pConf->Write(wxT("SimulatorUseFile"), m_bCopyUseFile);
			pConf->Write(wxT("SimulatorMMSI"), m_tCopyMMSI);

            pConf->Write(wxT("DialogPosX"), m_hr_dialog_x);
            pConf->Write(wxT("DialogPosY"), m_hr_dialog_y);
			pConf->Write(wxT("DialogSizeX"), m_hr_dialog_sx);
			pConf->Write(wxT("DialogSizeY"), m_hr_dialog_sy);
            
            return true;
      }
      else
            return false;
}

void Simulator_pi::OnSimulatorDialogClose()
{
    m_bShowSimulator = false;
    SetToolbarItemState( m_leftclick_tool_id, m_bShowSimulator);
    m_pDialog->Hide();
    SaveConfig();

    RequestRefresh(m_parent_window); // refresh main window
}

void Simulator_pi::OnContextMenuItemCallback(int id)
{

	if (!m_pDialog)
		return;

	if (id == m_position_menu_id){

		m_cursor_lat = GetCursorLat();
		m_cursor_lon = GetCursorLon();

		m_pDialog->OnContextMenu(m_cursor_lat, m_cursor_lon);
	}
}

void Simulator_pi::SetCursorLatLon(double lat, double lon)
{
	m_cursor_lat = lat;
	m_cursor_lon = lon;
}

void Simulator_pi::SetPluginMessage(wxString &message_id, wxString &message_body)
{
	if (message_id == wxT("GRIB_TIMELINE"))
	{
		wxJSONReader r;
		wxJSONValue v;
		r.Parse(message_body, &v);

		wxDateTime time;
		time.Set
			(v[wxT("Day")].AsInt(), (wxDateTime::Month)v[wxT("Month")].AsInt(), v[wxT("Year")].AsInt(),
			v[wxT("Hour")].AsInt(), v[wxT("Minute")].AsInt(), v[wxT("Second")].AsInt());

		wxString dt;
		dt = time.Format(wxT("%Y-%m-%d  %H:%M "));

		if (m_pDialog){
			m_pDialog->m_GribTimelineTime = time.ToUTC();
			//m_pDialog->m_textCtrl1->SetValue(dt);
		}
	}
	if (message_id == wxT("GRIB_TIMELINE_RECORD"))
	{
		wxJSONReader r;
		wxJSONValue v;
		r.Parse(message_body, &v);

		static bool shown_warnings;
		if (!shown_warnings) {
			shown_warnings = true;

			int grib_version_major = v[wxT("GribVersionMajor")].AsInt();
			int grib_version_minor = v[wxT("GribVersionMinor")].AsInt();

			int grib_version = 1000 * grib_version_major + grib_version_minor;
			int grib_min = 1000 * GRIB_MIN_MAJOR + GRIB_MIN_MINOR;
			int grib_max = 1000 * GRIB_MAX_MAJOR + GRIB_MAX_MINOR;

			if (grib_version < grib_min || grib_version > grib_max) {
				wxMessageDialog mdlg(m_parent_window,
					_("Grib plugin version not supported.")
					+ wxT("\n\n") +
					wxString::Format(_("Use versions %d.%d to %d.%d"), GRIB_MIN_MAJOR, GRIB_MIN_MINOR, GRIB_MAX_MAJOR, GRIB_MAX_MINOR),
					_("Weather Routing"), wxOK | wxICON_WARNING);
				mdlg.ShowModal();
			}
		}

		wxString sptr = v[wxT("TimelineSetPtr")].AsString();

		wxCharBuffer bptr = sptr.To8BitData();
		const char* ptr = bptr.data();

		GribRecordSet *gptr;
		sscanf(ptr, "%p", &gptr);

		double dir, spd;

		m_bGribValid = GribCurrent(gptr, m_grib_lat, m_grib_lon, dir, spd);

		m_tr_spd = spd;
		m_tr_dir = dir;

		//wxMessageBox(wxString::Format(wxT("%5.2f"), spd));
	}
}


bool Simulator_pi::GribWind(GribRecordSet *grib, double lat, double lon,
	double &WG, double &VWG)
{
	if (!grib)
		return false;

	if (!GribRecord::getInterpolatedValues(VWG, WG,
		grib->m_GribRecordPtrArray[Idx_WIND_VX],
		grib->m_GribRecordPtrArray[Idx_WIND_VY], lon, lat))
		return false;

	VWG *= 3.6 / 1.852; // knots

#if 0
// test
	VWG = 0.;
	WG = 0.;
#endif

	return true;
}






