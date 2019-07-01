/**************************************************************************
*
* Project:  OpenCPN
* Purpose:  Simulator Plugin
* Author:   Ron Southworth April 2019 Mike Rossiter and many others
*
***************************************************************************
*   Copyright (C) 1985-2019 Ron Southworth Mike Rossiter and many others  *
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


#include "Simulatorgui_impl.h"
#include <wx/progdlg.h>
#include <wx/wx.h>
#include "Simulator_pi.h"

#include <stdio.h>
#include <wx/timer.h>
#include "wx/textfile.h"

class GribRecordSet;

void assign(char *dest, char *arrTest2)
{
	strcpy(dest, arrTest2);
}

#define BUFSIZE 0x10000

Dlg::Dlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : SimulatorBase(parent, id, title, pos, size, style)
{
	this->Fit();
	dbg = false; //for debug output set to true
	initLat = 0;
	initLon = 0;
	m_interval = 500;
	m_bUseSetTime = false;
	m_bUseStop = true;
	m_bUsePause = false;
	m_sNmeaTime = wxEmptyString;

	m_bUsingWind = false;
	m_bInvalidPolarsFile = false;
	m_bInvalidGribFile = false;
	m_bSimulatorHasStarted = false;

	wxFileConfig *pConf = GetOCPNConfigObject(); // Reading Configuration Settings

	if (pConf) {
		pConf->SetPath(_T("/Settings/Simulator_pi"));

		pConf->Read(_T("simulatorUseAis"), &m_bUseAis, 0);
		pConf->Read(_T("simulatorUseGSV"), &m_bUseGSV, 0);
		pConf->Read(_T("SimulatorUseGGA"), &m_bUseGGA, 0);
		pConf->Read(_T("SimulatorUseGLL"), &m_bUseGLL, 0);
		pConf->Read(_T("SimulatorUseHDT"), &m_bUseHDT, 0);
		pConf->Read(_T("SimulatorUseHDM"), &m_bUseHDM, 0);
		pConf->Read(_T("SimulatorUseVTG"), &m_bUseVTG, 0);
		pConf->Read(_T("SimulatorUseRMC"), &m_bUseRMC, 0);
		pConf->Read(_T("SimulatorUseVHW"), &m_bUseVHW, 0);
		pConf->Read(_T("SimulatorUseRSA"), &m_bUseRSA, 0);
		pConf->Read(_T("SimulatorUseMWVA"), &m_bUseMWVA, 0);
		pConf->Read(_T("SimulatorUseMWVT"), &m_bUseMWVT, 0);
		pConf->Read(_T("SimulatorUseDBT"), &m_bUseDBT, 0);
		pConf->Read(_T("SimulatorUseVDR"), &m_bUseVDR, 0);
		pConf->Read(_T("SimulatorUseXDRPR"), &m_bUseXDRPR, 0);
		pConf->Read(_T("SimulatorUseXDRAW"), &m_bUseXDRAW, 0);
		pConf->Read(_T("SimulatorUseXDRMB"), &m_bUseXDRMB, 0);

		pConf->Read(_T("simulatorUseFile"), &m_bUseFile, 0);
		pConf->Read(_T("simulatorMMSI"), &m_tMMSI, "000012345");

	}
}


void Dlg::OnTimer(wxTimerEvent& event){
	Notify();
}

void Dlg::SetNextStep(double inLat, double inLon, double inDir, double inSpd, double &outLat, double &outLon){
	PositionBearingDistanceMercator_Plugin(inLat, inLon, inDir, inSpd, &stepLat, &stepLon);
}

void Dlg::OnStart(wxCommandEvent& event) {

	if (initLat == 0.0){
		wxMessageBox(_("Please right-click and choose vessel start position"));
		return;
	}

	m_bSimulatorHasStarted = true;

        m_bpPlay->SetBackgroundColour(wxColour(15, 86, 31));

        m_bpStop->SetBackgroundColour(wxColour(83, 0, 24));
        
        m_buttonAuto->SetBackgroundColour(wxColour(35, 35, 35));	
        m_buttonWind->SetBackgroundColour(wxColour(35, 35, 35));        
       
        Refresh(); // So Button Colour changes perform as expected on macOS
       
        m_bUsingWind = false;


//        m_bAuto = false; // Debug 


	if (!m_tMMSI.ToLong(&m_iMMSI)) {
		wxMessageBox(_("MMSI must be a number, please change in Preferences"));
		return;
	}

	if (m_bUseFile){

		wxString caption = wxT("Choose a file");
		wxString wildcard = wxT("Text files (*.txt)|*.txt|All files (*.*)|*.*");

		wxString s = _T("/");
		wxString defaultDir = *GetpSharedDataLocation() + _T("plugins")
			+ s + _T("Simulator_pi") + s + _T("data") + s;

		wxString defaultFilename = wxEmptyString;
		wxFileDialog filedlg(this->m_parent, caption, defaultDir, defaultFilename, wildcard, wxFD_SAVE | wxFD_OVERWRITE_PROMPT);


		if (filedlg.ShowModal() != wxID_OK)
		{
			wxMessageBox(_("Simulator has been stopped"));
			return;
		}
		else{
			nmeafile = new wxTextFile(filedlg.GetPath());
			nmeafile->Open();
			nmeafile->Clear();
		}
	}

	m_textCtrlRudderStbd->SetValue(_T(""));
	m_textCtrlRudderPort->SetValue(_T(""));

        m_textCtrlAISROT->SetValue(_T("0"));
	
        initSpd = 0; // 5 knots
	wxString myHeading = m_stHeading->GetLabel();
	myHeading.ToDouble(&initDir);
	myDir = initDir;



	dt = dt.Now();
	GLL = createGLLSentence(dt, initLat, initLon, initSpd / 7200, initDir);
	VTG = createVTGSentence(dt, initSpd, myDir, myDirMag, initSpdKmhr); // Track made good and ground speed
	

	m_interval = 500;
	m_Timer->Start(m_interval, wxTIMER_CONTINUOUS); // start timer
        m_bpStop->SetBackgroundColour(wxColour(83, 0, 24));
	m_bAuto = false;

	myAIS = new AisMaker();

}

void Dlg::OnStop(wxCommandEvent& event) {

	if (m_Timer->IsRunning()) m_Timer->Stop();
      
        m_bpStop->SetBackgroundColour(wxColour(35, 35, 35)); //m_bpStop Grey
	
        m_SliderSpeed->SetValue(0);
	m_SliderRudder->SetValue(0); // Rudder Center Position
	m_textCtrlRudderStbd->SetValue(_T(""));
	m_textCtrlRudderPort->SetValue(_T(""));

        m_textCtrlAISROT->SetValue(_T("0"));

	m_interval = m_Timer->GetInterval();
	m_bUseSetTime = false;
	m_bUseStop = true;
	m_bAuto = false;
        m_bUsingWind = false;

	m_buttonAuto->SetBackgroundColour(wxColour(35, 35, 35)); // m_buttonAuto Grey
        m_buttonStandby->SetBackgroundColour(wxColour(35, 35, 35)); // m_buttonStandby Grey 
        
	m_buttonWind->SetBackgroundColour(wxColour(35, 35, 35)); //  m_buttonWind Grey
        m_bpPlay->SetBackgroundColour(wxColour(35, 35, 35)); // m_bpPlay Grey 

	if (m_bUseFile){
		nmeafile->Write();
		nmeafile->Close();
	}
	initSpd = 0.0;
	m_stSpeed->SetLabel(wxString::Format(_T("%3.1f"), initSpd));
        m_bSimulatorHasStarted = false;

        Refresh(); // Debug
}

void Dlg::OnMidships(wxCommandEvent& event){
	m_SliderRudder->SetValue(0); // Debug Rudder  Set To Centre Position
}

void Dlg::OnMinus10(wxCommandEvent& event){
	if (m_bAuto){
		myDir -= 10;
		wxString mystring = wxString::Format(wxT("%03.2f"), myDir);
		m_stHeading->SetLabel(mystring); // To Do change to Autopilot bearing adjust
	}
}

void Dlg::OnPlus10(wxCommandEvent& event){
	if (m_bAuto){
		myDir += 10;
		wxString mystring = wxString::Format(wxT("%03.2f"), myDir);
		m_stHeading->SetLabel(mystring);
	}
}

void Dlg::OnMinus1(wxCommandEvent& event){
	if (m_bAuto){
		myDir -= 1;
		wxString mystring = wxString::Format(wxT("%03.2f"), myDir);
		m_stHeading->SetLabel(mystring);
	}
}

void Dlg::OnPlus1(wxCommandEvent& event){
	if (m_bAuto){
		myDir += 1;
		wxString mystring = wxString::Format(wxT("%03.2f"), myDir);
		m_stHeading->SetLabel(mystring);
        
	}
}

void Dlg::OnAuto(wxCommandEvent& event){

        if (m_bSimulatorHasStarted){ //  Auto only when Simulator has started
                m_bAuto = true;
	m_buttonStandby->SetBackgroundColour(wxColour(83, 0, 24));
        m_buttonAuto->SetBackgroundColour(wxColour(15, 86, 31));
        


	Refresh(); // Debug

        } 
            if(!m_bSimulatorHasStarted){ 
                 m_bAuto = false;
                 wxMessageBox(_("Please press the Start button to activate the AutoPilot"));
                 return;
	}
}

void Dlg::OnStandby(wxCommandEvent& event){

	m_bAuto = false;

	m_buttonStandby->SetBackgroundColour(wxColour(15, 86, 31));
	m_buttonAuto->SetBackgroundColour(wxColour(35 , 35, 35));
	
        Refresh();
}

void Dlg::OnClose(wxCloseEvent& event)
{
//	if (m_Timer->IsRunning()) m_Timer->Stop();
	plugin->OnSimulatorDialogClose();


}


void Dlg::Notify(){

	initSpd = m_SliderSpeed->GetValue();
	initRudder = m_SliderRudder->GetValue();

	double myRudder = (initRudder) ; // Get Rudder / Trim Value 
                
             if (myRudder < 0){
// Rudder Turning Vessel to Port		
                initRudder -= 0; // Debug 
		myDir += initRudder;
                double myPortRudder = (myRudder); //  Grab #  for Port Angle 
//		m_gaugeRudderPort->SetValue(myPortRudder);
		m_textCtrlRudderPort->SetValue(wxString::Format(_T("%.2f"), myRudder) + _T(" P")); // Port Angle Display 
// AIS ROT Display		
                m_textCtrlAISROT->SetValue(wxString::Format(_T("%.2f"), myRudder) + _T(" P")); // AIS ROT/min Display
                
//                m_gaugeRudderStbd->SetValue(0);
		m_textCtrlRudderStbd->SetValue(_T(""));
	}
	else if (myRudder >= 0){
// Rudder Turning Vessel to Stbd  if not no turn  Midships
		initRudder -= 0; // Debug  
		myDir += initRudder;
	        double myStbdRudder = (myRudder); // Grab # for Stbd Angle	
//                m_gaugeRudderStbd->SetValue(myStbdRudder);  // removed rudder indicator until widget is developed
		
              if (myRudder == 0){
// Catch Rudder Midship	      
 
        	m_textCtrlRudderStbd->SetValue(_T(""));

// AIS ROT Display
                m_textCtrlAISROT->SetValue(_T("0"));
		}
		else {
		m_textCtrlRudderStbd->SetValue(wxString::Format(_T("%.2f"), myRudder) + _T(" S")); // Starboard Angle Display
		
                m_textCtrlAISROT->SetValue(wxString::Format(_T("%.2f"), myRudder) + _T(" S")); // AIS ROT/min Display
                }
//		m_gaugeRudderPort->SetValue(0); // removed rudder indicator until widget is developed
		m_textCtrlRudderPort->SetValue(_T(""));

	}

	if (myDir < 0){
		myDir += 360;
	}
	else if (myDir > 360){
		myDir -= 360;
	}

	initmagVar = m_spS_HDG->GetValue(); // Static Value comes from here
	magVar = (initmagVar);

	myDirMag = myDir - magVar ; // Compass Mag Var lookup or routine selection into here

	if (myDirMag < 0){
		myDirMag += 360;
	}
	else if (myDirMag > 360){
		myDirMag -= 360;

	}

	wxString mystring = wxString::Format(wxT("%03.2f"), myDir); // This Heading has been set up with 2 decimal places
	m_stHeading->SetLabel(mystring);

	if (m_bUsingWind){
		double polarBoatSpeed = GetPolarSpeed(initLat, initLon, myDir);
		if (polarBoatSpeed != -1){
			initSpd = polarBoatSpeed;

		}
	}

    initSpdKmhr = initSpd * 1.852;

    initDriftMag = initCurSet + magVar;

    	if (initDriftMag < 0){
    		initDriftMag += 360;
    	}
    	else if (initDriftMag > 360){
    			initDriftMag -= 360;
    }

	m_stSpeed->SetLabel(wxString::Format(_T("%03.2f"), initSpd)); // Messaging is Warming Up


	SetNextStep(initLat, initLon, myDir, initSpd / 7200, stepLat, stepLon);
	wxString timeStamp = wxString::Format(_T("%i"), wxGetUTCTime());

	wxString myNMEAais = myAIS->nmeaEncode(_T("18"), m_iMMSI, _T("5"), initSpd, initLat, initLon, myDir, myDir, _T("B"), timeStamp);

	if (m_bUseFile)	nmeafile->AddLine(myNMEAais);

	int ss = 1;
	wxTimeSpan mySeconds = wxTimeSpan::Seconds(ss);
	wxDateTime mdt = dt.Add(mySeconds);

	double wspd, wdir;
	bool m_bGrib = GetGribSpdDir(dt, initLat, initLon, wspd, wdir);
	if (m_bGrib && m_bUsingWind){
		MWVA = createMWVASentence(initSpd, myDir, wdir, wspd); // Wind speed and angle Grib Data Setpoint
		MWVT = createMWVTSentence(initSpd, myDir, wdir, wspd);
	    VDR = createVDRSentence(initCurSet, initCurDrift, initmagVar, initDriftMag); // Current Set and Drift
//		MWD = createMWDSentence(wdir, wspd); // Wind direction and speed isn't this an obsolete message type ????

	    if (m_bUseMWVA)PushNMEABuffer(MWVA + _T("\n"));
	    if (m_bUseMWVT)PushNMEABuffer(MWVT + _T("\n"));
//	    if (m_bUseMWD)PushNMEABuffer(MWD + _T("\n"));
		
	}

	GSV = createGSVSentence(initprn1, initprn2, initprn3, initprn4, initsatinV, initaz1, initaz2, initaz3, initaz4, initel1, initel2, initel3, initel4, initsnr1, initsnr2, initsnr3, initsnr4);
	GSV2 = createGSVSentence2(initsatinV);
	GSV3 = createGSVSentence3(initsatinV);
	GSV4 = createGSVSentence4(initsatinV);
    GGA = createGGASentence(mdt, initLat, initLon, initsatinV);
	GLL = createGLLSentence(mdt, initLat, initLon, initSpd, myDir); // Geographic Position La/Lo HDG

	HDT = createHDTSentence(myDir); // Basic True Heading message
	HDM = createHDMSentence(myDirMag); // Basic Magnetic Heading message

	VTG = createVTGSentence(mdt, initSpd, myDir, myDirMag, initSpdKmhr); // Track made good and ground speed
	VHW = createVHWSentence(initSpd, myDir, myDirMag, initSpdKmhr); // Water speed and heading e.g. STW
	RMC = createRMCSentence(mdt, initLat, initLon, initSpd, myDir, initmagVar);
    RSA = createRSASentence(initRudder);

    XDRPR = createXDRPRSentence(initPitch, initHeel);
    XDRAW = createXDRAWSentence(initAir, initWater);
    XDRMB = createXDRMBSentence(initBarometer);
    DBT = createDBTSentence(initDepth, initMeters, initFathoms);
    VDR = createVDRSentence(initCurSet, initCurDrift, initmagVar, initDriftMag); // Current Set and Drift

    if (m_bUseGSV)PushNMEABuffer(GSV + _T("\n"));
    if (m_bUseGSV)PushNMEABuffer(GSV2 + _T("\n"));
    if (m_bUseGSV)PushNMEABuffer(GSV3 + _T("\n"));
    if (m_bUseGSV)PushNMEABuffer(GSV4 + _T("\n"));
    if (m_bUseGGA)PushNMEABuffer(GGA + _T("\n"));
    if (m_bUseGLL)PushNMEABuffer(GLL + _T("\n"));
    if (m_bUseHDT)PushNMEABuffer(HDT + _T("\n"));
    if (m_bUseHDM)PushNMEABuffer(HDM + _T("\n"));
    if (m_bUseVTG)PushNMEABuffer(VTG + _T("\n"));
	if (m_bUseVHW)PushNMEABuffer(VHW + _T("\n"));
	if (m_bUseRMC)PushNMEABuffer(RMC + _T("\n"));
	if (m_bUseRSA)PushNMEABuffer(RSA + _T("\n"));
	if (m_bUseXDRPR)PushNMEABuffer(XDRPR + _T("\n"));
	if (m_bUseXDRAW)PushNMEABuffer(XDRAW + _T("\n"));
	if (m_bUseXDRMB)PushNMEABuffer(XDRMB + _T("\n"));
    if (m_bUseDBT)PushNMEABuffer(DBT + _T("\n"));
    if (m_bUseVDR)PushNMEABuffer(VDR + _T("\n"));

	if (m_bUseAis) PushNMEABuffer(myNMEAais + _T("\n"));

	initLat = stepLat;
	initLon = stepLon;



	dt = mdt;

	initBarometer = m_spBarometer->GetValue(); // Static Value comes from here
	double barometer = (initBarometer); //convert number to millibars

	initDepth = m_spDBT->GetValue();
    double depth = (initDepth);

    initCurSet = m_spCurSet->GetValue();
    double curset = (initCurSet);

    initCurDrift = m_spCurDrift->GetValue();
    double curdrift = (initCurDrift);

    initAir = m_spS_AirT1->GetValue();
    double air = (initAir);

    initWater = m_spS_WaterT1->GetValue();
    double water = (initWater);

    initPitch = m_spPitch->GetValue();
    double pitch = (initPitch);

	initHeel = m_spHeel->GetValue();
	double  heel = (initHeel);

	initsatinV = m_spSatsinV->GetValue();
	double satinV = (initsatinV);

	initprn1 = m_spPrn1->GetValue();
	double prn1 = (initprn1);

	initprn2 = m_spPrn2->GetValue();
	double prn2 = (initprn2);

	initprn3 = m_spPrn3->GetValue();
	double prn3 = (initprn3);

	initprn4 = m_spPrn4->GetValue();
	double prn4 = (initprn4);

	initaz1 = m_spAZ1->GetValue();
	double aZ1 = (initaz1);

	initaz2 = m_spAZ2->GetValue();
	double aZ2 = (initaz2);

	initaz3 = m_spAZ3->GetValue();
	double aZ3 = (initaz3);

	initaz4 = m_spAZ4->GetValue();
	double aZ4 = (initaz4);

	initel1 = m_spELE1->GetValue();
	double el1 = (initel1);

	initel2 = m_spELE2->GetValue();
	double el2 = (initel2);

	initel3 = m_spELE3->GetValue();
	double el3 = (initel3);

	initel4 = m_spELE4->GetValue();
	double el4 = (initel4);

	initsnr1 = m_spSNR1->GetValue();
	double snR1 = (initsnr1);

	initsnr2 = m_spSNR2->GetValue();
	double snR2 = (initsnr2);

	initsnr3 = m_spSNR3->GetValue();
	double snR3 = (initsnr3);

	initsnr4 = m_spSNR4->GetValue();
	double snR4 = (initsnr4);

}

void Dlg::SetInterval(int interval){
	m_interval = interval;
	if (m_Timer->IsRunning()) // Check the timer has started
		m_Timer->Start(m_interval, wxTIMER_CONTINUOUS); // restart timer with new interval

	   /* * *** Message format routines ***
	   *
	   *  Hey Ron, Let's Start off by creating the "Satellites in View" sentence(s) ($GPGSV)
	   *
	   *
       */
}

	wxString Dlg::createGSVSentence(double prn1, double prn2, double prn3, double prn4, double satinV, double az1, double az2, double az3, double az4, double el1, double el2, double el3, double el4, double snr1, double snr2, double snr3, double snr4){
             /**

             *
             *
             * $GPGSV,1,1,12,01,40,083,46,02,17,308,41,12,07,344,39,14,22,228,45*7d
             *
             * Where:
             * GSV            The Satellites "In View" message
             *   1            Number of sentences 
             *   1            sentence sequence # e.g. 1 of 1 (max of 4 satellites per each sentence)
             *  12            Number of satellites in view
             *  01            Satellite PRN number       01        02         12         14
             *  40            Elevation, degrees         40        17         07         22
             * 083            Azimuth, degrees          083       308        344        228
             *  46            SNR - measured in dB       46        41         39         45  no comma after here/before special chxr
             *
             * *76          the * is the end of message special check i.e.  checksum data, always begins with *
             * Each message ends with CR and LF.
             *
             *  The example shows a 4 satellite message. We can only send the data set on up to 4 satellites per message.
             * Why don't we out of the box chute send 4 messages - four static messages separated below is the first java message implementation
             *
             * Now that I have it messaging one sentence I will try to send all 4 ...
             *
             * nmeaServer.sendMessage("$GPGSV,4,1,12,03,03,111,00,04,42,270,75,06,01,010,00,13,06,292,10*71" + "\r\n");
             *
             **   Satellites 04, 16, 18, 22, 24 and 27 will appear to be OK each with their own dB SNR figure.
             *    The remaining 03, 06, 13, 14, 19 have a dB SNR value of zero!
             *
             *   I already have an idea how to make this message more end user configurable without it being too technical.
             *
             * Adjust sat # azimuth, elevation and SNR for "the constellation".
             * Most GPS units typically track a maximum of 12 sat's Differentials can do more. 
             * The entire GPS network is 33 sat's including 3-4 spares.. 4 Good Quality Fixes Gives Reasonable Accuracy,
             * but... if one or two fix's are marginal accuracy can be skewed etc. fairly easy to simulate
             * If you see PRN numbers above 33  in messages they are the newer systems stuff - e.g. GLONASS, 
             * we can add stuff on the supplementary services etc later on if there is a need ...
             *
             * In using the checksum calculation routine sending messages of this type looks like....
             *
             *
             */

        wxString nGSV;
        nGSV = _T("GPGSV");

        wxString nsF = _T("4");
        wxString nsL= _T("1");

        wxString satInV = _T("12");
        satInV = wxString::Format(_T("%1.0f"), satinV);


        wxString nC = _T(",");


        wxString pRn1 = _T("01");
        wxString pRn2 = _T("02");
        wxString pRn3 = _T("12");
        wxString pRn4 = _T("14");

        pRn1 = wxString::Format(_T("%1.0f"), prn1);
        pRn2 = wxString::Format(_T("%1.0f"), prn2);
        pRn3 = wxString::Format(_T("%1.0f"), prn3);
        pRn4 = wxString::Format(_T("%1.0f"), prn4);

        wxString eL1 =_T("40");
        wxString eL2 = _T("17");
        wxString eL3 = _T("07");
        wxString eL4 = _T("22");

        eL1 = wxString::Format(_T("%1.0f"), el1);
        eL2 = wxString::Format(_T("%1.0f"), el2);
        eL3 = wxString::Format(_T("%1.0f"), el3);
        eL4 = wxString::Format(_T("%1.0f"), el4);

        wxString aZ1 =_T("083");
        wxString aZ2 = _T("308");
        wxString aZ3 = _T("344");
        wxString aZ4 = _T("228");

        aZ1 = wxString::Format(_T("%1.0f"), az1);
        aZ2 = wxString::Format(_T("%1.0f"), az2);
        aZ3 = wxString::Format(_T("%1.0f"), az3);
        aZ4 = wxString::Format(_T("%1.0f"), az4);

        wxString snR1 = _T("46");
        wxString snR2 = _T("41");
        wxString snR3 = _T("39");
        wxString snR4 = _T("45");

        snR1 = wxString::Format(_T("%1.0f"), snr1);
        snR2 = wxString::Format(_T("%1.0f"), snr2);
        snR3 = wxString::Format(_T("%1.0f"), snr3);
        snR4 = wxString::Format(_T("%1.0f"), snr4);

        wxString nForCheckSum; // Grab the strings that need to be XOR'd
        wxString nFinal;       // Complete GPGSV Message String for sending routine

        wxString ndlr = _T("$");
        wxString nast = _T("*");

//        nSpd = wxString::Format(_T("%3.1f"), windspeed);
//        nDir = wxString::Format(_T("%3.1f"), winddirection);

        nForCheckSum = nGSV + nC + nsF+ nC + nsL + nC + satInV + nC + pRn1 + nC + eL1 + nC + aZ1 + nC + snR1 + nC + pRn2 + nC + eL2 + nC + aZ2 + nC+ snR2+ nC + pRn3 + nC + eL3 + nC + aZ3 + nC + snR3 + nC + pRn4 + nC + eL4 + nC + aZ4 + nC + snR4;
        nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
        return nFinal;


}


wxString Dlg::createGSVSentence2(double satinV){
             /** GSV Sentence 2
             *
             *
             * nmeaServer.sendMessage("$GPGSV,4,2,12,01,24,169,00,05,27,228,39,07,62,256,40,15,44,146,00*76" + "\r/n");
             */

        wxString nGSV;
        nGSV = _T("GPGSV");
       // nGSV = _T("GPGSV");

        wxString nsF = _T("4");
        wxString nsL= _T("2");

        wxString satInV;
        satInV = _T("12");
        satInV = wxString::Format(_T("%1.0f"), satinV);

        wxString nC = _T(",");

        wxString pRn1 =_T("01");
        wxString pRn2 = _T("05");
        wxString pRn3 = _T("07");
        wxString pRn4 = _T("15");

        wxString eL1 =_T("24");
        wxString eL2 = _T("27");
        wxString eL3 = _T("62");
        wxString eL4 = _T("44");

        wxString aZ1 =_T("169");
        wxString aZ2 = _T("228");
        wxString aZ3 = _T("256");
        wxString aZ4 = _T("146");

        wxString snR1 = _T("00");
        wxString snR2 = _T("39");
        wxString snR3 = _T("40");
        wxString snR4 = _T("00");

        wxString nForCheckSum; // Grab the strings that need to be XOR'd
        wxString nFinal;       // Complete GPGSV Message String for sending routine

        wxString ndlr = _T("$");
        wxString nast = _T("*");

//        nSpd = wxString::Format(_T("%3.1f"), windspeed);
//        nDir = wxString::Format(_T("%3.1f"), winddirection);

        nForCheckSum = nGSV + nC + nsF+ nC + nsL + nC + satInV + nC +  pRn1 + nC + eL1 + nC + aZ1 + nC + snR1 + nC + pRn2 + nC + eL2 + nC + aZ2 + nC+ snR2+ nC + pRn3 + nC + eL3 + nC + aZ3 + nC + snR3 + nC + pRn4 + nC + eL4 + nC + aZ4 + nC + snR4;
        nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
        return nFinal;


}
	wxString Dlg::createGSVSentence3(double satinV){
             /** GSV Sentence 3
             *
             * nmeaServer.sendMessage("$GPGSV,4,3,12,14,25,170,00,16,57,208,39,18,67,296,40,19,40,246,00*71" + "\r\n");
             */

        wxString nGSV;
        nGSV = _T("GPGSV");

        wxString nsF = _T("4");
        wxString nsL= _T("3");

        wxString satInV;
        satInV = _T("12");
        satInV = wxString::Format(_T("%1.0f"), satinV);

        wxString nC = _T(",");

        wxString pRn1 =_T("14");
        wxString pRn2 = _T("16");
        wxString pRn3 = _T("18");
        wxString pRn4 = _T("19");

        wxString eL1 =_T("25");
        wxString eL2 = _T("57");
        wxString eL3 = _T("67");
        wxString eL4 = _T("40");

        wxString aZ1 =_T("170");
        wxString aZ2 = _T("208");
        wxString aZ3 = _T("296");
        wxString aZ4 = _T("246");

        wxString snR1 = _T("00");
        wxString snR2 = _T("39");
        wxString snR3 = _T("40");
        wxString snR4 = _T("00");

        wxString nForCheckSum; // Grab the strings that need to be XOR'd
        wxString nFinal;       // Complete GPGSV Message String for sending routine

        wxString ndlr = _T("$");
        wxString nast = _T("*");

//        nSpd = wxString::Format(_T("%3.1f"), windspeed);
//        nDir = wxString::Format(_T("%3.1f"), winddirection);

        nForCheckSum = nGSV + nC + nsF+ nC + nsL + nC + satInV + nC +  pRn1 + nC + eL1 + nC + aZ1 + nC + snR1 + nC + pRn2 + nC + eL2 + nC + aZ2 + nC+ snR2+ nC + pRn3 + nC + eL3 + nC + aZ3 + nC + snR3 + nC + pRn4 + nC + eL4 + nC + aZ4 + nC + snR4;
        nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
        return nFinal;


}
	wxString Dlg::createGSVSentence4(double satinV){
/** GSV Sentence 4
             *
             * nmeaServer.sendMessage("$GPGSV,4,4,12,22,42,067,60,24,14,311,43,27,05,244,85,,,,*43" + "\r\n");
             */

        wxString nGSV;
        nGSV = _T("GPGSV");
       // nGSV = _T("GPGSV");

        wxString nsF = _T("4");
        wxString nsL= _T("4");

        wxString satInV;
        satInV = _T("12");
        satInV = wxString::Format(_T("%1.0f"), satinV);

        wxString nC = _T(",");

        wxString pRn1 =_T("22");
        wxString pRn2 = _T("24");
        wxString pRn3 = _T("27");
        wxString pRn4 = _T("30");

        wxString eL1 =_T("42");
        wxString eL2 = _T("14");
        wxString eL3 = _T("05");
        wxString eL4 = _T("01");

        wxString aZ1 =_T("60");
        wxString aZ2 = _T("311");
        wxString aZ3 = _T("244");
        wxString aZ4 = _T("02");

        wxString snR1 = _T("60");
        wxString snR2 = _T("43");
        wxString snR3 = _T("85");
        wxString snR4 = _T("00");

        wxString nForCheckSum; // Grab the strings that need to be XOR'd
        wxString nFinal;       // Complete GPGSV Message String for sending routine

        wxString ndlr = _T("$");
        wxString nast = _T("*");


        nForCheckSum = nGSV + nC + nsF+ nC + nsL + nC + satInV + nC +  pRn1 + nC + eL1 + nC + aZ1 + nC + snR1 + nC + pRn2 + nC + eL2 + nC + aZ2 + nC+ snR2+ nC + pRn3 + nC + eL3 + nC + aZ3 + nC + snR3 + nC + nC + nC + nC;
        nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
        return nFinal;

}
	wxString Dlg::createGGASentence(wxDateTime myDateTime, double myLat, double myLon, double satinV){

    /**
     * Time to Simulate a $GPGGA sentence.
     * This is essential fix data, provides 3D location and accuracy of the data.
     *
     * $GPGGA,123519,4807.038,N,01131.000,E,1,08,0.9,545.4,M,46.9,M,,*47
     *
	 *  Where:
	 *	GPGGA          Global Positioning System Fix Data
	 *	123519       Fix taken at 12:35:19 UTC
	 *	4807.038,N   Latitude 48 deg 07.038' N
	 *	01131.000,E  Longitude 11 deg 31.000' E
	 *	1               Fix quality: 0 = invalid
     *                  1 = GPS fix (SPS)
     *                  2 = DGPS fix
     *                  3 = PPS fix
	 *         		    4 = Real Time Kinematic
	 *        		    5 = Float RTK
     *                  6 = estimated (dead reckoning) (2.3 feature)
	 *        		    7 = Manual input mode
	 *                  8 = Simulation mode
     *    12           Number of satellites being tracked
     *    1.5          Horizontal dilution of position
     *    545.4,M      Altitude, Meters, above mean sea level
     *     46.9,M      Height of geoid (mean sea level) above WGS84 ellipsoid
     *
     *   (empty field) time in seconds since last DGPS update
     *   (empty field) DGPS station ID number
     *    *47          the checksum data
     *
     *
     *
     */
	wxString nGGA;
	wxString nTime;
	wxString nlat;
	wxString nlon;
	wxString nNS;
	wxString nEW;

	wxString nQuality;
	nQuality = _T("1");

	wxString satInV;
	satInV = _T("12");
	satInV = wxString::Format(_T("%1.0f"), satinV);

	wxString nHDOP;
	wxString nAltMSL;
    wxString nHgtGMSL;
    wxString nDGPS;

	wxString nForCheckSum;
	wxString nFinal;

	wxString nC = _T(",");
	wxString nA = _T("A");
	wxString nU = _T("M");

	nGGA = _T("GPGGA,"); // Global Positioning System Fix Data
    nDGPS = _T(",");

    nHDOP = _T("1.5");
//    nHDOP = wxString::Format(_T("%1.1f"), nHDOP);
    nAltMSL = _T("0.0"); // At Mean Sea Level
//    nAltMSL = wxString::Format(_T("%1.1f"), nAltMSL);
    nHgtGMSL = _T("1.5");
//    nHgtGMSL = wxString::Format(_T("%1.1f"), nHgtHGMSL);

	wxString ndlr = _T("$");
	wxString nast = _T("*");

	nTime = DateTimeToTimeString(myDateTime);
	nNS = LatitudeToString(myLat);
	nEW = LongitudeToString(myLon);

	nForCheckSum = nGGA + nTime + nC + nNS + nEW + nQuality + nC + satInV + nC + nHDOP + nC + nAltMSL + nC + nU + nC + nHgtGMSL + nC +nU + nC + nDGPS;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;

}

	wxString Dlg::createVHWSentence(double stw, double hdg, double myDirMag, double vKmhr){
	/*
		VHW Water Speed and Heading
		1   2   3   4   5%3.16   7   8 9
		|   |   |   |   |   |   |   | |
		$--VHW, x.x, T, x.x, M, x.x, N, x.x, K*hh
		1) HDG Degress	True
		2) T = True
		3) HDM Degrees Magnetic
		4) M = Magnetic
		5) Knots(speed of vessel relative to the water)
		6) N = Knots
		7) Kilometers (speed of vessel relative to the water)
		8) K = Kilometres
		9) Checksum
		*/
	vKmhr = stw * 1.852; // Speed Through Water in km/hr

		wxString nVHW;
		wxString nDir;
		wxString nRelTrue;
	    wxString nDirMag;
		wxString nSpdKmhr;
		wxString nSpd;
		wxString nValid;
		wxString nForCheckSum;
		wxString nFinal;
		wxString nUnits;
		wxString nUnitsMag;
		wxString nUnitsKmhr;
		wxString nC = _T(",");
		wxString nA = _T("A");
		nUnits = _T("N");
		nUnits = _T("N");
		nVHW = _T("GPVHW");
		nRelTrue = _T("T");
		nUnitsMag = _T("M");
		nUnitsKmhr = _T("K");
		wxString ndlr = _T("$");
		wxString nast = _T("*");
		nSpd = wxString::Format(_T("%3.1f"), stw); // Speed Through Water
		nDir = wxString::Format(_T("%3.1f"), hdg); // True Heading
		nSpdKmhr = wxString::Format(_T("%3.1f"), vKmhr);
		nDirMag = wxString::Format(_T("%3.1f"), myDirMag); // Degrees Magnetic Heading


		nForCheckSum = nVHW + nC + nDir + nC + nRelTrue + nC + nDirMag + nC + nUnitsMag + nC + nSpd + nC + nUnits + nC + nSpdKmhr + nC + nUnitsKmhr;
		nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
		return nFinal;

}

	wxString Dlg::createDBTSentence(double depth, double meters, double fathoms){
		             /**
		             *
		             * Depth Below TXD Surface
		             *
		             * $IIDBT,100.1,f,30.5,M,16.7,F*10
		             * 1) Depth, in feet
		             * 2) f Feet
		             * 3) Depth, in meters
		             * 4) M meters
		             * 5) Depth in Fathoms
		             * 6) F Fathoms
		             * 7) *checksum
		             *
		             * ,100.1,f,30.5,M,16.7,F"
		             *
		             *  depthSetting = depth;
		             *
		             */
		meters = depth * 0.3408; // depth input is feet convert to meters
	   fathoms = depth * 0.166667; // depth is in feet convert to fathoms
		        wxString nDBT = _T("IIDBT,");
				wxString nDepth;
				wxString nMeters;
				wxString nFathoms;

				wxString nForCheckSum;
				wxString nFinal;

				wxString nC = _T(",");
				wxString nuFeet = _T("f,");
				wxString nuMeters = _T("M,");
				wxString nuFathoms = _T("F");

				wxString ndlr = _T("$");
				wxString nast = _T("*");

				nDepth = wxString::Format(_T("%3.1f"), depth);
				nMeters = wxString::Format(_T("%3.1f"), meters);
				nFathoms = wxString::Format(_T("%3.1f"), fathoms);

				nForCheckSum = nDBT + nDepth + nC + nuFeet + nMeters + nC + nuMeters + nFathoms + nC + nuFathoms;
				nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
				return nFinal;

}
	wxString Dlg::createVDRSentence(double curset, double curdrift, double magVar, double driftMag){

/**
 *
 * $GPVDR,x.x,T,x.x,M,x.x,N*hh<CR><LF>
 *
 *  Where    :
 * Set water surface current Direction value in degrees, True
 * T = True
 * Direction degrees Magnetic
 * M = Magnetic
 * Drift water surface current speed, value in knots
 * N = Knots
 * * delimiter Checksum cr lf
 *
 */
driftMag = curset - magVar; // Calculate Current Mag direction applying mag variation
	    	wxString nVDR;
	    	wxString nSet;
	    	wxString nRelTrue;
	    	wxString nDrift;
	    	wxString nDriftMag;
	    	wxString nRelUnits;
	    	wxString nForCheckSum;
	    	wxString nFinal;
	    	wxString nUnits;
	    	wxString nUnitsMag;
	    	wxString nUnitsKmhr;
	    	wxString nC = _T(",");
	    	wxString nA = _T("A");
	    	nUnits = _T("N");
	    	nVDR = _T("GPVDR");
	    	nRelTrue = _T("T");
	    	nUnitsMag = _T("M");
	    	wxString ndlr = _T("$");
	    	wxString nast = _T("*");
	    	nSet = wxString::Format(_T("%3.1f"), curset); // True heading of surface current direction
	    	nDrift = wxString::Format(_T("%3.1f"), curdrift); // Speed of surface current in Knots
	    	nDriftMag = wxString::Format(_T("%3.1f"), driftMag); // Degrees Magnetic Heading surface current


	    	nForCheckSum = nVDR + nC + nSet + nC + nRelTrue + nC + nDriftMag + nC + nUnitsMag + nC + nDrift + nC + nUnits;
	    	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	    	return nFinal;

}

	wxString Dlg::createHDTSentence(double myDir){
		/*
		 *
		 * One of the simplest formata A True Heading message HEHDT
		1   2 3
		|   | |
		$--HDT, x.x, T*hh<CR><LF>
		*/
		wxString nDir;
		wxString nValid;
		wxString nForCheckSum;
		wxString nFinal;
		wxString nC = _T(",");
		wxString nA = _T("A");
		wxString nT = _T("T");
		wxString nM = _T("M,");
		wxString nN = _T("N,");
		wxString nK = _T("K,");

		wxString nHDT = _T("HEHDT,");
		nValid = _T("A,A");
		wxString ndlr = _T("$");
		wxString nast = _T("*");

		nDir = wxString::Format(_T("%3.1f"), myDir);

		nForCheckSum = nHDT + nDir + nC + nT;

		nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
		//wxMessageBox(nFinal);
		return nFinal;

}

	wxString Dlg::createHDMSentence(double myDirMag){
		/*
		1   2 3
		|   | |
		$HCHDM, x.x, T*hh<CR><LF>
		*/
		wxString nDirMag;
		wxString nValid;
		wxString nForCheckSum;
		wxString nFinal;
		wxString nC = _T(",");
		wxString nA = _T("A");
		wxString nT = _T("T");
		wxString nM = _T("M");
		wxString nN = _T("N,");
		wxString nK = _T("K,");

		wxString nHDM = _T("HCHDM,");
		nValid = _T("A,A");
		wxString ndlr = _T("$");
		wxString nast = _T("*");

		nDirMag = wxString::Format(_T("%3.1f"), myDirMag);

		nForCheckSum = nHDM + nDirMag + nC + nM;

		nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
		return nFinal;

}

	wxString Dlg::createXDRPRSentence(double pitch, double heel){
		/*
        *
		* $IIXDR,a,x.x,a,c--c, ..... *hh<CR><LF>
		* (1) Transducer Type
        * (2) Measurement Data
        * (3) Units of measurement
        * (4) Label / Name of transducer
		*
		* and finish with a checksum of course
		*
		* Sensors are angle measurement instruments -180º to +180º
		* 		* Note Positive Pitch is Nose Up - Heel is to Port
		*
		*/
		wxString nPitch;
		wxString nHeel;
		wxString nValid;
		wxString nForCheckSum;
		wxString nFinal;
		wxString nC = _T(",");
		wxString nA = _T("A,");
		wxString nType = _T(",D,");
		wxString nRSA = _T("IIXDR,");
		wxString nIDPitch = _T("PTCH");
		wxString nIDHeel = _T("ROLL");
		nValid = _T("A");
		wxString ndlr = _T("$");
		wxString nast = _T("*");

		nPitch = wxString::Format(_T("%3.1f"), pitch);
		nHeel = wxString::Format(_T("%3.1f"), heel);

		nForCheckSum = nRSA + nA + nPitch + nType + nIDPitch + nC + nA + nHeel + nType + nIDHeel;
		nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
		return nFinal;

}

	wxString Dlg::createXDRAWSentence(double air, double water){
		/*
        *
		* $IIXDR,a,x.x,a,c--c, ..... *hh<CR><LF>
		* (1) Transducer Type
        * (2) Measurement Data
        * (3) Units of measurement
        * (4) Label / Name of transducer
		*
		* and finish with a checksum of course
		*
		* Sensors are Temperature measurement instruments -38º to +55º
		*
		*
		*/
		wxString nAir;
		wxString nWater;
		wxString nValid;
		wxString nForCheckSum;
		wxString nFinal;
		wxString nC = _T(",");
		wxString nA = _T("C,");
		wxString nType = _T(",C,");
		wxString nRSA = _T("IIXDR,");
		wxString nIDAir = _T("ENV_OUTAIR_T");
		wxString nIDWater = _T("ENV_WATER_T");

		wxString ndlr = _T("$");
		wxString nast = _T("*");

		nAir = wxString::Format(_T("%3.1f"), air);
		nWater = wxString::Format(_T("%3.1f"), water);

		nForCheckSum = nRSA + nA + nWater + nType + nIDWater + nC + nA + nAir + nType +nIDAir;
		nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
		return nFinal;

}


	wxString Dlg::createRSASentence(double myRudder){
			/*
	        * Rudder Angle Sensor Sends Both Port and Starboard
			* $--RSA,x.x,A,x.x,A*hh<CR><LF>
			*/
			wxString nStbd;
			wxString nPort;
			wxString nValid;
			wxString nForCheckSum;
			wxString nFinal;
			wxString nC = _T(",");
			wxString nA = _T("A");
			wxString nRSA = _T("TIRSA,");
			nValid = _T("A");
			wxString ndlr = _T("$");
			wxString nast = _T("*");

			nStbd = wxString::Format(_T("%3.1f"), myRudder);
			nPort = wxString::Format(_T("%3.1f"), myRudder);

			nForCheckSum = nRSA + nStbd + nC + nValid  + nC + nPort + nC + nValid;
			nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
			return nFinal;


}

	wxString Dlg::createMWVASentence(double spd, double hdg, double winddirection, double windspeed){
	/* This is the Applied Wind Direction and Speed sentence
	1    2   3   4        5
	|    |   |   |        |
	$IIMWV, x.x, a, x.x, a*hh

	Field Number :
	1. Wind Angle, 0 to 360 degrees
	2.Reference, R = Relative, T = True (theoretical)
	3.Wind Speed
	4.Wind Speed Units, K / M / N
	5.Status, A = Data Valid
	Checksum
	*/

	/*
	+     * $IIMWV,<1>,<2>,<3>,<4>,<5*hh>
	+     *
	+     * NMEA 0183 standard Wind Speed and Direction  .
	+     *
	+     * <1> Wind direction, 0.0 to 359.9 degrees True, to the nearest 0.1 degree
	+     * <2> Reference for wind direction A Applied or is it R Relative,  T = True
	+     * <3> Wind speed.
	+     * <4> Speed Unit N = Knots  M = Meters/second Wind speed, decimal point Knot , to the nearest 0.1 m/s
	+     * <5> * checksum.

	+
	*/

	double twa = 360 - ((hdg - winddirection) - 360);
	if (twa > 360){
		twa -= 360;
		if (twa > 360){
			twa -= 360;
		}
	}
	wxString leftright = wxEmptyString;

	if (twa <= 180){
		leftright = _T("R");
	}
	if (twa > 180){
		leftright = _T("L");
		twa = 360 - twa;
	}

	double aws, twd, tws, awd, awa;
	twa = 180 - twa;  // we need the complement of the twa for the internal angle of the triangle
	twa = twa * M_PI / 180; // convert to radians
	tws = windspeed;
	double alpha, bravo, charlie, delta;
	alpha = pow(spd, 2) + pow(windspeed, 2) - 2 * spd*windspeed*cos(twa);
	aws = sqrt(alpha);

	// spd / charlie = aws / twa;

	charlie = spd * sin(twa) / aws;
	charlie = asin(charlie);
	twa = M_PI - twa;  // complement in radians
	awa = twa - charlie;
	awa = awa * 180 / M_PI; // back to degrees

	if (leftright == _T("L")) {
		awa = 360 - awa;
	}

	wxString nMWV;
	wxString nDirA;
	wxString nRelTrue;
	wxString nSpdA;
	wxString nValid;
	wxString nForCheckSum;
	wxString nFinal;
	wxString nUnits;

	wxString nC = _T(",");
	wxString nA = _T("A");

	nUnits = _T("N,");
	nMWV = _T("IIMWV,"); // Wind Speed and Angle
	nRelTrue = _T("R,"); // Relative or Applied Wind Angle
	nValid = _T("A");
	wxString ndlr = _T("$");
	wxString nast = _T("*");

    nDirA = wxString::Format(_T("%3.1f"), awa); //Applied Wind Angle Value
	nSpdA = wxString::Format(_T("%3.1f"), aws); // Applied Wind Speed Value

	nForCheckSum = nMWV + nDirA + nC + nRelTrue + nSpdA + nC + nUnits + nValid;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;

}
/* This is the True Wind Direction and Speed sentence */
	wxString Dlg::createMWVTSentence(double spd, double hdg, double winddirection, double windspeed){
	double twa = 360 - ((hdg - winddirection) - 360);
	if (twa > 360){
		twa -= 360;
		if (twa > 360){
			twa -= 360;

		}
	}
	double twaMag;
	twaMag = twa - magVar;
	if (twaMag > 360){
			twaMag -= 360;
			if (twaMag > 360){
				twaMag -= 360;
			}
	}


	double tws = windspeed; // True Wind Speed

	/*
		+     * $IIMWV,<1>,<2>,<3>,<4>,<5*hh>
		+     *
		+     * NMEA 0183 standard Wind Speed and Direction  .
		+     *
		+     * <1> Wind direction, 0.0 to 359.9 degrees True, to the nearest 0.1 degree
		+     * <2> Reference for wind direction A Applied or is it R Relative,  T = True
		+     * <3> Wind speed.
		+     * <4> Speed Unit N = Knots  M = Meters/second Wind speed, decimal point Knot , to the nearest 0.1 m/s
		+     * <5> * checksum.

		+
		*/

	wxString nMWV;
	wxString nMWD;
	wxString nDir;
	wxString nTrue;
	wxString nSpd;
	wxString nValid;

	wxString nForCheckSum;
	wxString nFinal;
	wxString nUnits;

	wxString nC = _T(",");
	wxString nA = _T("A");

	nUnits = _T("N,");
	nMWV = _T("IIMWV,");
	nMWD = _T("IIMWV,"); // Wind Instrument Wind Speed and Direction (true)
	nTrue = _T("T,");
	nValid = _T("A");

	wxString ndlr = _T("$");
	wxString nast = _T("*");

	nDir = wxString::Format(_T("%3.1f"), twa); // True Wind Angle
	nSpd = wxString::Format(_T("%3.1f"), tws); // True Wind Speed


	nForCheckSum = nMWV + nDir + nC + nTrue + nSpd + nC + nUnits + nValid;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;

}

	wxString Dlg::createXDRMBSentence(double barometer){
	             /*
	             * Barometer Message Sentence
	             */

barometer = barometer / 1000; // convert to milli-bar

	        wxString nXDRMB = _T("IIXDR,");
			wxString nBarometer;

			wxString nForCheckSum;
			wxString nFinal;

			wxString nC = _T(",");
			wxString nType = _T("P,");
			wxString nuLable = _T("Barometer");
			wxString nUnits = _T("B,");

			wxString ndlr = _T("$");
			wxString nast = _T("*");

			nBarometer = wxString::Format(_T("%1.5f"), barometer);


			nForCheckSum = nXDRMB + nType + nBarometer + nC + nUnits + nuLable;
			nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
			return nFinal;
}
/* This is depreciated message type

wxString Dlg::createMWDSentence(double wind direction, double wind speed){
	*
	1    2   3   4        5
	|    |   |   |        |
	$--MWV, x.x, a, x.x, a*hh

	Field Number :
	1. Wind Angle, 0 to 360 degrees
	2.Reference, R = Relative, T = True
	3.Wind Speed
	4.Wind Speed Units, K / M / N
	5.Status, A = Data Valid
	Checksum
	*/

	/*
	+
	+     * $IIMWD,<1>,<2>,<3>,<4>,<5>,<6>,<7>,<8>*hh
	+     *
	+     * NMEA 0183 standard Wind Direction and Speed, with respect to north.
	+     *
	+     * <1> Wind direction, 0.0 to 359.9 degrees True, to the nearest 0.1 degree
	+     * <2> T = True
	+     * <3> Wind direction, 0.0 to 359.9 degrees Magnetic, to the nearest 0.1
	degree
	+     * <4> M = Magnetic
	+     * <5> Wind speed, knots, to the nearest 0.1 knot.
	+     * <6> N = Knots
	+     * <7> Wind speed, meters/second, to the nearest 0.1 m/s.
	+     * <8> M = Meters/second
	+     */

/*	wxString nMWV;
	wxString nMWD;
	wxString nDir;
	wxString nRelTrue;
	wxString nSpd;
	wxString nValid;
	wxString nForCheckSum;
	wxString nFinal;
	wxString nUnits;
	wxString nC = _T(",");
	wxString nA = _T("A");
	nUnits = _T("N");
	nMWV = _T("WIMWV");
	nMWD = _T("WIMWD");
	nRelTrue = _T("T");
	nValid = _T("A,A");
	wxString ndlr = _T("$");
	wxString nast = _T("*");

	nSpd = wxString::Format(_T("%3.1f"), windspeed);
	nDir = wxString::Format(_T("%3.1f"), winddirection);

	nForCheckSum = nMWD + nC + nDir + nC + nRelTrue + nC  + nC + nC + nSpd + nC + nUnits + nC + nC ;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;

}
*/

	wxString Dlg::createGLLSentence(wxDateTime myDateTime, double myLat, double myLon, double mySpd, double myDir){

	//$GPGLL,5027.776667,N,412.690754,W,123327,A*26

	wxString nlat;
	wxString nlon;
	wxString nGLL;
	wxString nNS;
	wxString nEW;
	wxString nSpd;
	wxString nDir;
	wxString nTime;
	wxString nDate;
	wxString nValid;

	wxString nForCheckSum;
	wxString nFinal;

	wxString nC = _T(",");
	wxString nA = _T("A,");

	nGLL = _T("GPGLL,"); // GPGLL Geo Pos Lat Log
	nValid = _T("A,A");

	wxString ndlr = _T("$");
	wxString nast = _T("*");

	nTime = DateTimeToTimeString(myDateTime);
	nNS = LatitudeToString(myLat);
	nEW = LongitudeToString(myLon);
	nSpd = wxString::Format(_T("%3.1f"), mySpd);
	nDir = wxString::Format(_T("%3.1f"), myDir);
	nDate = DateTimeToDateString(myDateTime);

	nForCheckSum = nGLL + nNS + nEW + nTime + _T(",A");
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;
}

	wxString Dlg::createRMCSentence(wxDateTime myDateTime, double myLat, double myLon, double mySpd, double myDir, double magVar){
/*	//$GPRMC, 110858.989, A, 4549.9135, N, 00612.2671, E, 003.7, 207.5, 050513, , , A * 60
	//$GPRMC,110858.989,A,4549.9135,N,00612.2671,E,003.7,207.5,050513,,,A*60
*   Where:
*     RMC          Recommended Minimum sentence C
*     123519       Fix taken at 12:35:19 UTC
*     A            Status A=active or V=Void.
*     4807.038,N   Latitude 48 deg 07.038' N
*     01131.000,E  Longitude 11 deg 31.000' E
*     022.4        Speed over ground in knots
*     084.4        Course over ground Track in degrees True
*     230394       Date - 23rd of March 1994
*     003.1,W      Magnetic Variation
*     *6A          The checksum data, always begins with *
*
*
*/
	wxString nlat;
	wxString nlon;
	wxString nRMC;
	wxString nNS;
	wxString nEW;
	wxString nSpd;
	wxString nDir;
    wxString nMagVar;
    wxString nMagFlag;
	wxString nTime;
	wxString nDate;
	wxString nValid;

	wxString nForCheckSum;
	wxString nFinal;

	wxString nC = _T(",");
	wxString nA = _T("A");

	nRMC = _T("GPRMC,"); // Minimum Specific GPS/Transit Data C

	wxString ndlr = _T("$");
	wxString nast = _T("*");

	nTime = DateTimeToTimeString(myDateTime);
	nNS = LatitudeToString(myLat);
	nEW = LongitudeToString(myLon);

	nSpd = wxString::Format(_T("%3.1f"), mySpd); // SOG need to change code labels to make it clearer for those that follow
	nDir = wxString::Format(_T("%3.1f"), myDir);
	nMagVar = wxString::Format(_T("%3.1f"), magVar);

	nDate = DateTimeToDateString(myDateTime);

	if (magVar < 0){
			nMagFlag = _T("W,");
		}
		if (magVar > 0){
			nMagFlag = _T("E,");

		}
		if (magVar == 0){
					nMagFlag = _T(",");

		}

	nForCheckSum = nRMC + nTime + nC + nA + nC + nNS + nEW + nSpd + nC + nDir + nC + nDate + nC + nMagVar + nC + nMagFlag + nA ;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;
}

	wxString Dlg::createVTGSentence(wxDateTime myDateTime, double mySpd, double myDir, double myDirMag, double vKmhr){
	//$GPVTG, 054.7, T, 034.4, M, 005.5, N, 010.2, K * 48
	//$IIVTG, 307., T, , M, 08.5, N, 15.8, K, A * 2F

	vKmhr = mySpd * 1.852; // Speed Through Water in km/hr
	wxString nSpd; // Note check this is actual SOG value
	wxString nSpdKmhr;
	wxString nDir;
	wxString nDirMag;

	wxString nDate;
	wxString nValid;

	wxString nForCheckSum;
	wxString nFinal;

	wxString nVTG = _T("GPVTG,"); // GPVTG Track Made Good and Ground Speed

	wxString nC = _T(",");
	wxString nA = _T("A,");
	wxString nT = _T("T,");
	wxString nM = _T("M,");
	wxString nN = _T("N,");
	wxString nK = _T("K");

	wxString ndlr = _T("$");
	wxString nast = _T("*");
    nValid = _T("A,A");

	nSpd = wxString::Format(_T("%3.1f"), mySpd);
	nSpdKmhr = wxString::Format(_T("%3.1f"), vKmhr);
	nDir = wxString::Format(_T("%3.1f"), myDir);
	nDirMag = wxString::Format(_T("%3.1f"), myDirMag);

	nForCheckSum = nVTG + nDir + nC + nT + nDirMag + nC + nM + nSpd + nC + nN + nSpdKmhr + nC + nK;
	nFinal = ndlr + nForCheckSum + nast + makeCheckSum(nForCheckSum);
	return nFinal;
}


// The checksum routine

wxString Dlg::makeCheckSum(wxString mySentence){
	int i;
	unsigned char XOR;

	wxString s(mySentence);
	wxCharBuffer buffer = s.ToUTF8();
	char *Buff = buffer.data();	// data() returns const char *
	unsigned long iLen = strlen(Buff);
	for (XOR = 0, i = 0; i < iLen; i++)
		XOR ^= (unsigned char)Buff[i];
	stringstream tmpss;
	tmpss << hex << (int)XOR << endl;
	wxString mystr = tmpss.str();
	return mystr;
}

double StringToLatitude(wxString mLat) {

	//495054
	double returnLat;
	wxString mBitLat = mLat(0, 2);
	double degLat;
	mBitLat.ToDouble(&degLat);
	wxString mDecLat = mLat(2, mLat.length());
	double decValue;
	mDecLat.ToDouble(&decValue);

	returnLat = degLat + decValue / 100 / 60;

	return returnLat;
}

wxString Dlg::LatitudeToString(double mLat) {

	wxString singlezero = _T("0");
	wxString mDegLat;

	int degLat = std::abs(mLat);
	wxString finalDegLat = wxString::Format(_T("%i"), degLat);

	int myL = finalDegLat.length();
	switch (myL){
	case(1) : {
		mDegLat = singlezero + finalDegLat;
		break;
	}
	case(2) : {
		mDegLat = finalDegLat;
		break;
	}
	}

	double minLat = std::abs(mLat) - degLat;
	double decLat = minLat * 60;

	wxString returnLat;
	//wxMessageBox(returnLat, _T("returnLat"));

	if (mLat >= 0){
		if (decLat < 10){
			returnLat = mDegLat + _T("0") + wxString::Format(_T("%.6f"), decLat) + _T(",N,");
		}
		else {
			returnLat = mDegLat + wxString::Format(_T("%.6f"), decLat) + _T(",N,");
		}

	}
	else if (mLat < 0) {
		if (decLat < 10){
			returnLat = mDegLat + _T("0") + wxString::Format(_T("%.6f"), decLat) + _T(",S,");
		}
		else {
			returnLat = mDegLat + wxString::Format(_T("%.6f"), decLat) + _T(",S,");
		}
	}

	return returnLat;
}
double StringToLongitude(wxString mLon) {

	wxString mBitLon = "";
	wxString mDecLon;
	double value1;
	double decValue1;

	double returnLon;

	int m_len = mLon.length();

	if (m_len == 7)
	{
		mBitLon = mLon(0, 3);
	}

	if (m_len == 6)
	{
		mBitLon = mLon(0, 2);
	}

	if (m_len == 5)
	{
		mBitLon = mLon(0, 1);
	}

	if (m_len == 4)
	{
		mBitLon = "00.00";
	}

	if (mBitLon == "-")
	{
		value1 = -0.00001;
	}
	else
	{
		mBitLon.ToDouble(&value1);
	}

	mDecLon = mLon(mLon.length() - 4, mLon.length());
	mDecLon.ToDouble(&decValue1);

	if (value1 < 0)
	{
		returnLon = value1 - decValue1 / 100 / 60;
	}
	else
	{
		returnLon = value1 + decValue1 / 100 / 60;
	}

	return returnLon;
}

wxString Dlg::LongitudeToString(double mLon) {

	wxString mDecLon;
	wxString mDegLon;
	double decValue;
	wxString returnLon;
	wxString doublezero = _T("00");
	wxString singlezero = _T("0");

	int degLon = fabs(mLon);
	wxString inLon = wxString::Format(_T("%i"), degLon);

	//wxMessageBox(returnLon, _T("inLon"));

	int myL = inLon.length();
	switch (myL){
	case(1) : {
		mDegLon = doublezero + inLon;
		break;
	}
	case(2) : {
		mDegLon = singlezero + inLon;
		break;
	}
	case(3) : {
		mDegLon = inLon;
		break;
	}
	}
	decValue = std::abs(mLon) - degLon;
	double decLon = decValue * 60;

	if (mLon >= 0){
		if (decLon < 10){
			returnLon = mDegLon + _T("0") + wxString::Format(_T("%.6f"), decLon) + _T(",E,");
		}
		else {
			returnLon = mDegLon + wxString::Format(_T("%.6f"), decLon) + _T(",E,");
		}

	}
	else  {
		if (decLon < 10){
			returnLon = mDegLon + _T("0") + wxString::Format(_T("%.6f"), decLon) + _T(",W,");
		}
		else {
			returnLon = mDegLon + wxString::Format(_T("%.6f"), decLon) + _T(",W,");
		}
	}
	//wxMessageBox(returnLon, _T("returnLon"));
	return returnLon;
}

wxString Dlg::DateTimeToTimeString(wxDateTime myDT) {
	wxString sHours, sMinutes, sSecs;
	sHours = myDT.Format(_T("%H"));
	sMinutes = myDT.Format(_T("%M"));
	sSecs = myDT.Format(_T("%S"));
	wxString dtss = sHours + sMinutes + sSecs;
	return dtss;
}

wxString Dlg::DateTimeToDateString(wxDateTime myDate) {

	wxString sDay, sMonth, sYear;
	sDay = myDate.Format(_T("%d"));
	sMonth = myDate.Format(_T("%m"));
	sYear = myDate.Format(_T("%y"));
	wxString date = sDay + sMonth + sYear;
	return date;
}

void Dlg::OnContextMenu(double m_lat, double m_lon){

	m_buttonWind->SetBackgroundColour(wxColour(83, 0, 24));

        Refresh();

	m_bUsingWind = false;

	initLat = m_lat;
	initLon = m_lon;
}

void Dlg::RequestGrib(wxDateTime time){

	wxJSONValue v;
	time = time.FromUTC();

	v[_T("Day")] = time.GetDay();
	v[_T("Month")] = time.GetMonth();
	v[_T("Year")] = time.GetYear();
	v[_T("Hour")] = time.GetHour();
	v[_T("Minute")] = time.GetMinute();
	v[_T("Second")] = time.GetSecond();

	wxJSONWriter w;
	wxString out;
	w.Write(v, out);

	SendPluginMessage(wxString(_T("GRIB_TIMELINE_RECORD_REQUEST")), out);

	Lock();
	m_bNeedsGrib = false;
	Unlock();
}

bool Dlg::GetGribSpdDir(wxDateTime dt, double lat, double lon, double &spd, double &dir){

	wxDateTime dtime = dt;

	plugin->m_grib_lat = lat;
	plugin->m_grib_lon = lon;
	RequestGrib(dtime);
	if (plugin->m_bGribValid){
		spd = plugin->m_tr_spd;
		dir = plugin->m_tr_dir;
		return true;
	}
	else {
		return false;
	}

}

void Dlg::OnWind(wxCommandEvent& event){

	if (initLat == 0.0){
		wxMessageBox(_("Please right-click and choose vessel start position"));
		return;
	}
	if (!m_bSimulatorHasStarted){
		wxMessageBox(_("Please start Simulator"));
		return;
	}

	m_SliderSpeed->SetValue(0);

	if (!m_bUsingWind){
		m_buttonWind->SetBackgroundColour(wxColour(15, 86, 31));
		m_bUsingWind = true;
		double myPolarSpeed = GetPolarSpeed(initLat, initLon, initDir);
		if (myPolarSpeed == -1){
			if (m_bInvalidPolarsFile){
				wxMessageBox(_T("Invalid Boat Polars file"));
			}

			if (m_bInvalidGribFile){
				wxMessageBox(_T("Grib data is not available for the present date/time or location"));
			}
			m_buttonWind->SetBackgroundColour(wxColour(83, 0, 24)); // m_buttonWind Red 
			m_bUsingWind = false;
                        m_bSimulatorHasStarted = false;
                        wxMessageBox(_("Please start Simulator"));
                        return;
		}
        }
        else {
	 	m_buttonWind->SetBackgroundColour(wxColour(163, 86, 31)); // m_buttonWind Orange 
		m_bUsingWind = false;

//      Refresh(); // Debug 

        }

}

double Dlg::GetPolarSpeed(double lat, double lon, double cse){
	double lati = lat;
	double loni = lon;
	double spd;
	double dir;

	wxDateTime dt;
	dt = wxDateTime::UNow();

	bool m_bGrib = GetGribSpdDir(dt, lati, loni, spd, dir);
	if (!m_bGrib){
		m_bInvalidGribFile = true;
		return -1;
	}

	wxString error;
	wxString s = _T("/");
	wxString polars_path = *GetpSharedDataLocation() + _T("plugins")
		+ s + _T("Simulator_pi") + s + _T("data") + s;
	wxString myFile = polars_path + _T("LoftyPerch.xml"); // was arcona.xml

	double twa = 360 - ((cse - dir) - 360);
	if (twa > 360){
		twa -= 360;
		if (twa > 360){
			twa -= 360;
		}
	}

	if (twa > 180){
		twa = 360 - twa;
	}
	/*
	double relWind = cse - dir;

	relWind = abs(relWind);
	if (relWind > 180){
	relWind = 360 - relWind;
	}
	*/
	//wxMessageBox(wxString::Format(_T("%f"), relWind));

	double polarSpeed = ReadPolars(myFile, twa, spd);
	return polarSpeed;
}

double Dlg::ReadPolars(wxString filename, double windangle, double windspeed){

	bool foundWindAngle = false;
	bool foundWindSpeed = false;
	bool foundPreviousWindAngle = false;

	double myWindAngle = -1;
	double myWindSpeed = -1;
	double prevAngle = -1;
	double prevSpeed = -1;
	double dSpeed = -1.0;
	double prevPolarSpeed = -1;
	wxString myPolarSpeed;

	wxString theWindAngle;

	TiXmlDocument doc;
	wxString error;

	wxFileName fn(filename);

	if (!doc.LoadFile(filename.mb_str())){
		m_bInvalidPolarsFile = true;
		return -1;
	}
	else {
		TiXmlHandle root(doc.RootElement());

		if (strcmp(root.Element()->Value(), "Simulator")){
			m_bInvalidPolarsFile = true;
			return -1;
		}

		int count = 0;
		for (TiXmlElement* e = root.FirstChild().Element(); e; e = e->NextSiblingElement())
			count++;

		int i = 0;
		for (TiXmlElement* e = root.FirstChild().Element(); e; e = e->NextSiblingElement(), i++) {

			if (!strcmp(e->Value(), "TWA") && windangle > myWindAngle && !foundWindAngle && !foundWindSpeed) {
				myWindAngle = AttributeDouble(e, "WindAngle", NAN);
				if (prevAngle < windangle && windangle < myWindAngle){
					theWindAngle = wxString::Format(_T("%5.2f"), prevAngle);
					foundWindAngle = true;
					break;
				}
				prevAngle = myWindAngle;
			}
		}

		if (foundWindAngle){

			// we have found the polar for the next highest wind speed
			// need to move back to the previous polar ... given by windAngle

			TiXmlElement* e;
			for (e = root.FirstChild().Element(); e; e = e->NextSiblingElement(), i++) {

				if (!strcmp(e->Value(), "TWA")) {
					myWindAngle = AttributeDouble(e, "WindAngle", NAN);
					wxString angleOut = wxString::Format(_T("%5.2f"), myWindAngle);
					if (angleOut == theWindAngle){  // we have found the correct section of the polars file	for the relative wind													
						for (TiXmlElement* g = e->FirstChildElement(); g; g = g->NextSiblingElement()) {

							if (!strcmp(g->Value(), "SPD") && windspeed > myWindSpeed) {
								myWindSpeed = AttributeDouble(g, "WindSpeed", NAN);
								wxString myPolarSpeed = g->GetText();
								// double dSpeed;
								myPolarSpeed.ToDouble(& dSpeed);

								if (prevSpeed < windspeed && windspeed < myWindSpeed){
									//wxString boatSpeed = wxString::Format(_T("%5.2f"), prevPolarSpeed);
									return prevPolarSpeed;
								}

								prevSpeed = myWindSpeed;// attribute for wind speed
								prevPolarSpeed = dSpeed; // value for boat speed

							}
						}
					}
				}
			}

		}

	}

	m_bInvalidPolarsFile = true;
	return -1;

}

double Dlg::AttributeDouble(TiXmlElement *e, const char *name, double def)
{
	const char *attr = e->Attribute(name);
	if (!attr)
		return def;
	char *end;
	double d = strtod(attr, &end);
	if (end == attr)
		return def;
	return d;
}
