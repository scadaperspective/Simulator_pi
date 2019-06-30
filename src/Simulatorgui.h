///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  7 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/button.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/checkbox.h>
#include <wx/datectrl.h>
#include <wx/dateevt.h>
#include <wx/timectrl.h>
#include <wx/choicebk.h>
#include <wx/choice.h>
#include <wx/checklst.h>
#include <wx/notebook.h>
#include <wx/timer.h>
#include <wx/frame.h>
#include <wx/dialog.h>
#include <wx/clrpicker.h>
#include <wx/scrolwin.h>
#include <wx/valgen.h>
#include <wx/valtext.h>
#include <wx/combobox.h>
#include <wx/listbox.h>
#include <wx/gauge.h>
#include <wx/listctrl.h>
#include <wx/splitter.h>
#include <wx/grid.h>
#include <wx/radiobut.h>
#include <wx/html/htmlwin.h>

#include "wxWTranslateCatalog.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class SimulatorBase
///////////////////////////////////////////////////////////////////////////////
class SimulatorBase : public wxFrame
{
	private:

	protected:
		wxButton* m_bpPlay;
		wxButton* m_bpStop;
		wxButton* m_buttonAuto;
		wxButton* m_buttonStandby;
		wxStaticText* m_staticTextKnots122;
		wxStaticText* m_staticText8111111;
		wxStaticText* m_staticTextKnots1111111113;
		wxStaticText* m_staticTextKnots11111111112;
		wxStaticText* m_staticTextKnots11111111122;
		wxStaticText* m_staticTextKnots111111111112;
		wxStaticText* m_staticTextKnots111111111211;
		wxStaticText* m_staticTextKnots1111111111111;
		wxButton* m_buttonStandby1;
		wxButton* m_buttonWind;
		wxButton* m_button6;
		wxButton* m_buttonSpare19;
		wxButton* m_buttonMinus1;
		wxButton* m_buttonMinus10;
		wxButton* m_buttonPlus10;
		wxButton* m_buttonPlus1;
		wxStaticText* m_staticTWPName;
		wxStaticText* m_staticTextKnots11111111131;
		wxStaticText* m_staticTextKnots111111111121;
		wxStaticText* m_staticTextKnots111111111221;
		wxStaticText* m_staticTextKnots1111111111121;
		wxStaticText* m_staticTextKnots1111111112111;
		wxStaticText* m_staticTextKnots11111111111111;
		wxStaticText* m_staticTextKnots122111112;
		wxStaticText* m_staticText18121112;
		wxStaticText* m_staticTxtRudder;
		wxSpinCtrlDouble* m_SliderRudder;
		wxStaticLine* m_staticline121;
		wxTextCtrl* m_textCtrlRudderPort;
		wxButton* m_buttonMid;
		wxTextCtrl* m_textCtrlRudderStbd;
		wxStaticText* m_staticText13141;
		wxStaticText* m_staticText1341511;
		wxStaticText* m_staticText131231;
		wxStaticText* m_staticText1341512;
		wxStaticText* m_staticText13231;
		wxStaticText* m_staticText134151;
		wxStaticText* m_staticText1311121;
		wxStaticText* m_staticText13451;
		wxStaticText* m_staticText1341132;
		wxStaticText* m_staticText134231;
		wxStaticText* m_spSatinView;
		wxStaticText* m_staticText13411311;
		wxStaticText* m_statictextHDOP;
		wxStaticText* m_staticText1342131;
		wxStaticText* m_staticSatAB;
		wxSpinCtrlDouble* m_spSatAnt;
		wxStaticText* m_staticText13311121;
		wxStaticText* m_sSatGEO;
		wxSpinCtrlDouble* m_spSatGEO;
		wxStaticText* m_staticText13421112;
		wxStaticText* m_staticText1341111311;
		wxStaticText* m_staticText13421311;
		wxStaticText* m_staticText13411113112;
		wxStaticText* m_staticText134213111;
		wxStaticText* m_staticText131411;
		wxStaticText* m_staticText131412;
		wxStaticText* m_staticText131413;
		wxStaticText* m_staticText1314131;
		wxStaticText* m_sMMSIAIS;
		wxStaticText* m_staticText7312;
		wxStaticText* m_staticText7311;
		wxStaticText* m_staticText73111;
		wxSpinCtrlDouble* m_spAISShipType;
		wxStaticText* m_staticText731111;
		wxStaticText* m_staticText7311111;
		wxSpinCtrlDouble* m_spAISLength;
		wxSpinCtrlDouble* m_spinAISBeam;
		wxStaticText* m_staticText73111111;
		wxSpinCtrlDouble* m_spiAISDraught;
		wxCheckBox* m_cbAISLong;
		wxTextCtrl* m_textCtrlAISROT;
		wxStaticText* m_staticText28;
		wxStaticText* m_staticText302;
		wxTimePickerCtrl* m_tpAISETATime;
		wxStaticText* m_staticText731112;
		wxChoicebook* m_cbAISNavS;
		wxPanel* m_panelAISNS0;
		wxStaticText* m_staticText571;
		wxSpinCtrlDouble* m_sXTEP1;
		wxStaticText* m_staticText5611;
		wxPanel* m_panelAISN1;
		wxChoicebook* m_cbRoutePositionBearingMode1;
		wxPanel* m_panel911;
		wxSpinCtrl* m_sAIStimerA;
		wxStaticText* m_staticText741;
		wxStaticText* m_staticText101;
		wxSpinCtrl* m_sRoutePositionBearingMaxError;
		wxPanel* m_panel101;
		wxSpinCtrl* m_sRoutePositionBearingTime1;
		wxStaticText* m_staticText301;
		wxPanel* m_panelAISN2;
		wxPanel* m_panelAISN3;
		wxPanel* m_panelAISN4;
		wxPanel* m_panelAISN5;
		wxChoicebook* m_cbRoutePositionBearingMode11;
		wxPanel* m_panel9111;
		wxSpinCtrl* m_sAIStimerA1;
		wxStaticText* m_staticText7411;
		wxStaticText* m_staticText1011;
		wxSpinCtrl* m_sRoutePositionBearingMaxError1;
		wxPanel* m_panel1011;
		wxSpinCtrl* m_sRoutePositionBearingTime11;
		wxStaticText* m_staticText3011;
		wxPanel* m_panelAISN6;
		wxPanel* m_panelAISN7;
		wxPanel* m_panelAISN8;
		wxPanel* m_panelAISN9;
		wxPanel* m_panelAISN10;
		wxPanel* m_panelAISN11;
		wxPanel* m_panelAISN12;
		wxPanel* m_panelAISN13;
		wxPanel* m_panelAISN14;
		wxPanel* m_panelAISN15;
		wxCheckBox* m_cbAISNavSelect;
		wxStaticText* m_staticText1313;
		wxSpinCtrlDouble* m_spXDRBP;
		wxStaticText* m_staticText134122;
		wxStaticText* m_staticText13122;
		wxSpinCtrlDouble* m_spXDRAirTmp;
		wxStaticText* m_staticText13432;
		wxStaticText* m_staticText1322;
		wxSpinCtrlDouble* m_spXDRWaterTmp;
		wxStaticText* m_staticText13414;
		wxStaticText* m_staticText131111;
		wxSpinCtrlDouble* m_spXDRPitch;
		wxStaticText* m_staticText1344;
		wxStaticText* m_staticText134112;
		wxSpinCtrlDouble* m_spXDRRoll;
		wxStaticText* m_staticText13422;
		wxStaticText* m_staticText1332;
		wxSpinCtrlDouble* m_spXDRHeel;
		wxStaticText* m_staticText13311;
		wxStaticText* m_staticText1341112;
		wxSpinCtrlDouble* m_spXDREng1T;
		wxStaticText* m_staticText134321;
		wxStaticText* m_staticText13411112;
		wxSpinCtrlDouble* m_spXDREng2T;
		wxStaticText* m_staticText1343211;
		wxStaticText* m_staticText134111112;
		wxStaticText* m_staticText1342112;
		wxStaticText* m_staticText1341111111;
		wxStaticText* m_staticText13421111;
		wxChoicebook* m_cbMode;
		wxPanel* m_panel5;
		wxStaticText* m_staticText57;
		wxSpinCtrlDouble* m_sXTEP;
		wxStaticText* m_staticText561;
		wxPanel* m_panel8;
		wxPanel* m_panel92;
		wxChoicebook* m_cbRoutePositionBearingMode;
		wxPanel* m_panel91;
		wxSpinCtrl* m_sRoutePositionBearingDistance;
		wxStaticText* m_staticText74;
		wxStaticText* m_staticText10;
		wxSpinCtrl* m_sRoutePositionBearingMaxAngle;
		wxPanel* m_panel10;
		wxSpinCtrl* m_sRoutePositionBearingTime;
		wxStaticText* m_staticText30;
		wxCheckBox* m_cbBoundary;
		wxTextCtrl* m_tBoundary;
		wxButton* m_button22;
		wxStaticText* m_staticText71;
		wxSpinCtrl* m_sBoundaryWidth;
		wxStaticText* m_staticText72;
		wxCheckBox* m_cbConfirmBearingChange;
		wxCheckBox* m_cbInterceptRoute;
		wxChoice* m_cComputation;
		wxCheckListBox* m_cbActiveRouteItems0;
		wxCheckListBox* m_cbActiveRouteItems1;
		wxButton* m_button4;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
		wxStaticText* m_staticTextHDT;
		wxSpinCtrlDouble* m_spS_HDT;
		wxStaticText* m_staticText4201;
		wxStaticText* m_staticTextSTW;
		wxSpinCtrlDouble* m_spS_STW;
		wxStaticText* m_staticText43431;
		wxStaticText* m_staticTCOG;
		wxSpinCtrlDouble* m_spS_COG;
		wxStaticText* m_staticText43412;
		wxStaticText* m_staticTHDM;
		wxSpinCtrlDouble* m_spS_HDM;
		wxStaticText* m_staticText43151;
		wxStaticText* m_staticTHDG;
		wxSpinCtrlDouble* m_spS_HDG;
		wxStaticText* m_staticText434211;
		wxStaticText* m_staticTextSOG;
		wxSpinCtrlDouble* m_spS_SOG;
		wxStaticText* m_staticText41343;
		wxStaticText* m_staticText4132;
		wxSpinCtrlDouble* m_spCurSet;
		wxStaticText* m_staticText41341;
		wxStaticText* m_staticTextDrift;
		wxSpinCtrlDouble* m_spCurDrift;
		wxStaticText* m_staticText43434;
		wxStaticText* m_staticText43411;
		wxSpinCtrlDouble* m_spS_TWA;
		wxStaticText* m_staticText4342;
		wxStaticText* m_staticText4133;
		wxSpinCtrlDouble* m_spS_TWS;
		wxStaticText* m_staticText4134;
		wxStaticText* m_staticText134111;
		wxSpinCtrlDouble* m_spiS_AWA;
		wxStaticText* m_staticText413421;
		wxStaticText* m_staticText41341111;
		wxSpinCtrlDouble* m_spS_AWS;
		wxStaticText* m_staticText4133111;
		wxCheckBox* m_cbSHDT;
		wxCheckBox* m_cbSpare;
		wxCheckBox* m_cbSpare2;
		wxCheckBox* m_cbSHDM;
		wxCheckBox* m_cbSHDG;
		wxCheckBox* m_cbSSOG;
		wxCheckBox* m_cbSSet;
		wxCheckBox* m_cbSDrift;
		wxCheckBox* m_cbSTWA;
		wxCheckBox* m_cbSTWS;
		wxCheckBox* m_cbSAWA;
		wxCheckBox* m_cbSAWS;
		wxStaticText* m_staticTDBT;
		wxSpinCtrlDouble* m_spS_AirT1;
		wxStaticText* m_staticText13431121;
		wxStaticText* m_staticTDBT2;
		wxSpinCtrlDouble* m_spS_WaterT1;
		wxStaticText* m_staticText134311211;
		wxStaticText* m_staticTDBT1;
		wxSpinCtrlDouble* m_spDBT;
		wxStaticText* m_staticText1343112;
		wxStaticText* m_staticTDPT;
		wxSpinCtrlDouble* m_spDPT;
		wxStaticText* m_staticText431111;
		wxStaticText* m_staticTDPT1;
		wxSpinCtrlDouble* m_spBarometer;
		wxStaticText* m_staticText4311111;
		wxStaticText* m_staticTDPT11;
		wxSpinCtrlDouble* m_spPitch;
		wxStaticText* m_staticText43421;
		wxStaticText* m_staticTDPT111;
		wxSpinCtrlDouble* m_spHeel;
		wxStaticText* m_staticText434212;
		wxStaticText* m_staticText41321;
		wxSpinCtrlDouble* m_spCurSettmp;
		wxCheckBox* m_cbDetect521;
		wxCheckBox* m_cbOptimize531;
		wxCheckBox* m_cbOptimize51141;
		wxCheckBox* m_cbOptimize51151;
		wxCheckBox* m_cbOptimize51221;
		wxCheckBox* m_cbOptimize51321;
		wxCheckBox* m_cbOptimize5141;
		wxCheckBox* m_cbOptimize51821;
		wxCheckBox* m_cbOptimize51521;
		wxCheckBox* m_cbOptimize51921;
		wxCheckBox* m_cbOptimize51621;
		wxCheckBox* m_cbOptimize51721;
		wxCheckBox* m_cbOptimize511021;
		wxStaticText* m_staticTextKnots1221111111;
		wxStaticText* m_staticText811111111;
		wxStaticText* m_staticTextKnots1111111111;
		wxStaticText* m_staticText181211111;
		wxStaticText* m_staticTextKnots111111111321;
		wxStaticText* m_staticTextKnots1111111111221;
		wxStaticText* m_staticTextKnots1111111112221;
		wxStaticText* m_staticTextKnots11111111111221;
		wxStaticText* m_staticTextKnots11111111121121;
		wxStaticText* m_staticTextKnots111111111111121;

		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnSize( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnStart( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStop( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAuto( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnStandby( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnWind( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlus1( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMinus1( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMinus10( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPlus10( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMidships( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateDate( wxDateEvent& event ) { event.Skip(); }
		virtual void OnUpdateTime( wxDateEvent& event ) { event.Skip(); }
		virtual void OnMode( wxChoicebookEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOk( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnTimer( wxTimerEvent& event ) { event.Skip(); }


	public:
		wxStaticText* m_stHeading;
		wxStaticText* m_stSpeed;
		wxStaticText* m_stLatD1;
		wxStaticText* m_stLatD1m;
		wxStaticText* m_stLatD1s;
		wxStaticText* m_stLongD1;
		wxStaticText* m_stLongD1m;
		wxStaticText* m_stLongD1s;
		wxStaticText* m_stLatD2;
		wxStaticText* m_stLatD2m;
		wxStaticText* m_stLongD2;
		wxStaticText* m_stLongDm;
		wxStaticText* m_stLatD3;
		wxStaticText* m_stLongD3;
		wxTextCtrl* m_tActiveWP;
		wxStaticText* m_stWPLatD1;
		wxStaticText* m_stWPLatD1m;
		wxStaticText* m_stWPLatD1s;
		wxStaticText* m_stWPLongD1;
		wxStaticText* m_stWPLongD1m;
		wxStaticText* m_stWPLongD1s;
		wxStaticText* m_stWPLatD2;
		wxStaticText* m_stWPLatD2m;
		wxStaticText* m_stWPLongD2;
		wxStaticText* m_stWPLongD2m;
		wxStaticText* m_stWPLatD3;
		wxStaticText* m_stWPLongD3;
		wxStaticText* m_stWPHeading;
		wxStaticText* m_stWPDistance;
		wxNotebook* m_notebookSimulator;
		wxPanel* m_panelHelm;
		wxSlider* m_SliderSpeed;
		wxSlider* m_SliderSpStarb;
		wxPanel* m_panelGPS;
		wxSpinCtrl* m_spPrn1;
		wxSpinCtrl* m_spPrn2;
		wxSpinCtrl* m_spPrn3;
		wxSpinCtrl* m_spPrn4;
		wxSpinCtrl* m_spSNRQual;
		wxSpinCtrl* m_spSatsinV;
		wxSpinCtrl* m_spSatHDOP;
		wxSpinCtrl* m_spGPSAntBow;
		wxSpinCtrl* m_spSatAntBeam;
		wxSpinCtrl* m_spAZ1;
		wxSpinCtrl* m_spELE1;
		wxSpinCtrl* m_spSNR1;
		wxSpinCtrl* m_spAZ2;
		wxSpinCtrl* m_spELE2;
		wxSpinCtrl* m_spSNR2;
		wxSpinCtrl* m_spAZ3;
		wxSpinCtrl* m_spELE3;
		wxSpinCtrl* m_spSNR3;
		wxSpinCtrl* m_spAZ4;
		wxSpinCtrl* m_spELE4;
		wxSpinCtrl* m_spSNR4;
		wxPanel* m_panelAIS;
		wxTextCtrl* m_textCtrlAISMMSI;
		wxTextCtrl* m_textCtrlAISMO;
		wxTextCtrl* m_textCtrlAISCallsign;
		wxTextCtrl* m_textCtrlAISVesselName;
		wxCheckBox* m_cbAISLat;
		wxCheckBox* m_cbAISSOG;
		wxCheckBox* m_cbAISHDT;
		wxCheckBox* m_cbAISCOG;
		wxCheckBox* m_cbAISROT;
		wxCheckBox* m_cbAISAIVDO;
		wxCheckBox* m_cbAISAIVDM;
		wxCheckBox* m_cbTransmitAis1;
		wxCheckBox* m_cbAisToFile1;
		wxCheckBox* m_cbAISETA;
		wxDatePickerCtrl* m_dpAISETADate;
		wxTextCtrl* m_textCtrlAISDestination;
		wxPanel* m_panelXDR;
		wxSpinCtrl* m_sSpare2111;
		wxSpinCtrl* m_sSpare2221;
		wxCheckBox* m_cbXDRBAR;
		wxCheckBox* m_cbDetect61;
		wxCheckBox* m_cbXDRATemp;
		wxCheckBox* m_cbOptimize62;
		wxCheckBox* m_cbXDRWTemp;
		wxCheckBox* m_cbOptimize112;
		wxCheckBox* m_cbXDRVPitch;
		wxCheckBox* m_cbOptimize113;
		wxCheckBox* m_cbXDRVRoll;
		wxCheckBox* m_cbOptimize121;
		wxCheckBox* m_cbXDRVHeel;
		wxCheckBox* m_cbOptimize131;
		wxCheckBox* m_cbXDREngT1;
		wxCheckBox* m_cbOptimize141;
		wxCheckBox* m_cbXDREngT2;
		wxCheckBox* m_cbOptimize181;
		wxCheckBox* m_cbTWS1;
		wxCheckBox* m_cbOptimize151;
		wxCheckBox* m_cbAWA1;
		wxCheckBox* m_cbOptimize191;
		wxCheckBox* m_cbAWS1;
		wxCheckBox* m_cbOptimize161;
		wxCheckBox* m_cbSpare3;
		wxCheckBox* m_cbOptimize171;
		wxCheckBox* m_cbSpare11;
		wxCheckBox* m_cbOptimize1101;
		wxCheckBox* m_cbSpare21;
		wxCheckBox* m_cbOptimize1111;
		wxCheckBox* m_cbXDRMTW;
		wxCheckBox* m_cbXDRVLW;
		wxCheckBox* m_cbXDRMWD;
		wxCheckBox* m_cbXDRMWV;
		wxCheckBox* m_cbXDRRSA;
		wxCheckBox* m_cbXDRVHW;
		wxCheckBox* m_cbXDRVTG;
		wxCheckBox* m_cbXDRVWR;
		wxCheckBox* m_cbXDRVWT;
		wxCheckBox* m_cbXDRXDR;
		wxPanel* m_panelAP;
		wxPanel* m_panelTest;
		wxCheckBox* m_cbSSTW;
		wxCheckBox* m_cbSCOG;
		wxPanel* m_panelConfigure;
		wxCheckBox* m_cbHDT511;
		wxCheckBox* m_cbCOG511;
		wxCheckBox* m_cbHDM511;
		wxCheckBox* m_cbHDG511;
		wxCheckBox* m_cbSOG511;
		wxCheckBox* m_cbSet511;
		wxCheckBox* m_cbDrift511;
		wxCheckBox* m_cbTWA511;
		wxCheckBox* m_cbTWS521;
		wxCheckBox* m_cbAWA521;
		wxCheckBox* m_cbAWS521;
		wxCheckBox* m_cbSpare541;
		wxCheckBox* m_cbSpare521;
		wxStdDialogButtonSizer* m_sdbSizer51;
		wxButton* m_sdbSizer51OK;
		wxButton* m_sdbSizer51Apply;
		wxButton* m_sdbSizer51Cancel;
		wxPanel* m_panelData1;
		wxStaticText* m_stGPSHeading1;
		wxStaticText* m_stGPSSpeed1;
		wxStaticText* m_stGPSETA1;
		wxStaticText* m_stGPSDistance1;
		wxStaticText* m_stGPSLatD11;
		wxStaticText* m_stGPSLatD1m1;
		wxStaticText* m_stGPDLatD1s1;
		wxStaticText* m_stGPSLongD11;
		wxStaticText* m_stGPSLongD1m1;
		wxStaticText* m_stGPSLongD1s1;
		wxStaticText* m_stGPSLatD21;
		wxStaticText* m_stGPSLatD2m1;
		wxStaticText* m_stGPSLongD21;
		wxStaticText* m_stGPSLongDm1;
		wxStaticText* m_stGPSLatD31;
		wxStaticText* m_stGPSLongD31;
		wxTimer m_timer;

		SimulatorBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Vessel Data Message Simulator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 884,647 ), long style = wxCAPTION|wxCLOSE_BOX|wxDEFAULT_FRAME_STYLE|wxFRAME_FLOAT_ON_PARENT|wxFRAME_NO_TASKBAR|wxRESIZE_BORDER|wxSYSTEM_MENU|wxTAB_TRAVERSAL );

		~SimulatorBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SimulatorPreferences
///////////////////////////////////////////////////////////////////////////////
class SimulatorPreferences : public wxDialog
{
	private:

	protected:
		wxStdDialogButtonSizer* m_sdbSizer;
		wxButton* m_sdbSizerOK;
		wxButton* m_sdbSizerCancel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxTextCtrl* m_textCtrlMMSI;
		wxCheckBox* m_cbTransmitAis;
		wxCheckBox* m_cbAisToFile;
		wxCheckBox* m_bUseGSV;
		wxCheckBox* m_bUseGLL;
		wxCheckBox* m_bUseHDT;
		wxCheckBox* m_bUseHDM;
		wxCheckBox* m_bUseVTG;
		wxCheckBox* m_bUseRMC;
		wxCheckBox* m_bUseVHW;
		wxCheckBox* m_bUseVDR;
		wxCheckBox* m_bUseGGA;
		wxCheckBox* m_cbSpare1211;
		wxCheckBox* m_cbUseMWVA;
		wxCheckBox* m_cbUseMWVT;
		wxCheckBox* m_cbUseMWD;
		wxCheckBox* m_cbSpare12111;
		wxCheckBox* m_cbXDRVLW;
		wxCheckBox* m_cbXDRVWR;
		wxCheckBox* m_cbRSAPort;
		wxCheckBox* m_cbRSAStarboard;
		wxCheckBox* m_cbXDRVPitch;
		wxCheckBox* m_cbXDRVHeel;
		wxCheckBox* m_cbTWA;
		wxCheckBox* m_cbOptimize62;
		wxCheckBox* m_cbTWS;
		wxCheckBox* m_cbOptimize112;
		wxCheckBox* m_cbXDRWTemp;
		wxCheckBox* m_cbXDRATemp;
		wxCheckBox* m_cbXDRBAR;
		wxCheckBox* m_cbOptimize131;
		wxCheckBox* m_cbSounder;
		wxCheckBox* m_cbTWS1;
		wxCheckBox* m_cbAWA1;
		wxCheckBox* m_cbAWA12;
		wxCheckBox* m_cbAWA121;
		wxCheckBox* m_cbAWA11;
		wxCheckBox* m_cbXDREngT1;
		wxCheckBox* m_cbOptimize141;
		wxCheckBox* m_cbXDREngT2;
		wxCheckBox* m_cbAWA112;
		wxCheckBox* m_cbOptimize181;
		wxCheckBox* m_cbOptimize151;
		wxCheckBox* m_cbOptimize191;
		wxCheckBox* m_cbAWS1;
		wxCheckBox* m_cbOptimize161;
		wxCheckBox* m_cbSpare3;
		wxCheckBox* m_cbOptimize171;
		wxCheckBox* m_cbSpare11;
		wxCheckBox* m_cbOptimize1101;
		wxCheckBox* m_cbSpare21;
		wxCheckBox* m_cbOptimize1111;
		wxCheckBox* m_cbSpare211;
		wxCheckBox* m_cbTWS211;
		wxCheckBox* m_cbAWA211;
		wxCheckBox* m_cbGPSAntP;
		wxCheckBox* m_cbGPSAntS;
		wxCheckBox* m_bUseRSA;
		wxCheckBox* m_bUseXDRPR;
		wxCheckBox* m_bUseMWVT;
		wxCheckBox* m_bUseMWVA;
		wxCheckBox* m_bUseXDRAW;
		wxCheckBox* m_bUseXDRMB;
		wxCheckBox* m_bUseDBT;

		SimulatorPreferences( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 941,676 ), long style = wxCAPTION|wxRESIZE_BORDER );
		~SimulatorPreferences();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SimulatorPreferences1
///////////////////////////////////////////////////////////////////////////////
class SimulatorPreferences1 : public wxDialog
{
	private:

	protected:
		wxScrolledWindow* m_scrolledWindow4;
		wxStaticText* m_staticText74;
		wxStaticText* m_staticText73;
		wxStaticText* m_staticText75;
		wxStaticText* m_staticText70;
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText711;
		wxStaticText* m_staticText731;
		wxStaticText* m_staticText115;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Help;

		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdateColor( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void OnUpdateSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateColumns( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelp( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxColourPickerCtrl* m_cpCursorRoute;
		wxColourPickerCtrl* m_cpDestinationRoute;
		wxSpinCtrl* m_sRouteThickness;
		wxSpinCtrl* m_sIsoChronThickness;
		wxSpinCtrl* m_sAlternateRouteThickness;
		wxSpinCtrl* m_sWindBarbsOnRouteThickness;
		wxTextCtrl* m_textCtrlMMSI;
		wxCheckBox* m_cbDisplayCursorRoute;
		wxCheckBox* m_cbMarkAtPolarChange;
		wxCheckBox* m_cbDisplayCurrent;
		wxCheckBox* m_cbDisplayWindBarbs;
		wxCheckBox* m_cbDisplayApparentWindBarbs;
		wxCheckBox* m_cbTransmitAis;
		wxCheckBox* m_cbAisToFile;
		wxSpinCtrl* m_sConcurrentThreads;
		wxCheckListBox* m_cblFields;
		wxCheckBox* m_cbUseLocalTime;

		SimulatorPreferences1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Simulator Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 964,556 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~SimulatorPreferences1();

};

///////////////////////////////////////////////////////////////////////////////
/// Class CursorPositionDialog
///////////////////////////////////////////////////////////////////////////////
class CursorPositionDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText134;
		wxStaticText* m_staticText128;
		wxStaticText* m_staticText124;
		wxStaticText* m_staticText130;
		wxStaticText* m_staticText126;
		wxStaticText* m_staticText122;
		wxStdDialogButtonSizer* m_sdbSizer5;
		wxButton* m_sdbSizer5OK;
		wxStaticText* m_staticTextKnots122111;
		wxStaticText* m_staticText81111;
		wxStaticText* m_staticTextKnots111111;
		wxStaticText* m_staticText18121;

	public:
		wxStaticText* m_stTime;
		wxStaticText* m_stPosition;
		wxStaticText* m_stPolar;
		wxStaticText* m_stSailChanges;
		wxStaticText* m_stTacks;
		wxStaticText* m_stWeatherData;
		wxStaticText* m_stHeading11;
		wxStaticText* m_stSpeed11;
		wxStaticText* m_stHeading221;
		wxStaticText* m_stSpeed211;

		CursorPositionDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Cursor Position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 404,322 ), long style = wxDEFAULT_DIALOG_STYLE );
		~CursorPositionDialog();

};

///////////////////////////////////////////////////////////////////////////////
/// Class NewPositionDialog
///////////////////////////////////////////////////////////////////////////////
class NewPositionDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText140;
		wxStaticText* m_staticText142;
		wxStaticText* m_staticText143;
		wxStaticText* m_staticText144;
		wxStaticText* m_staticText145;
		wxStaticText* m_staticText146;
		wxStaticText* m_staticText147;
		wxStdDialogButtonSizer* m_sdbSizer4;
		wxButton* m_sdbSizer4OK;
		wxButton* m_sdbSizer4Cancel;

	public:
		wxTextCtrl* m_tName;
		wxTextCtrl* m_tLatitudeDegrees;
		wxTextCtrl* m_tLatitudeMinutes;
		wxTextCtrl* m_tLongitudeDegrees;
		wxTextCtrl* m_tLongitudeMinutes;

		NewPositionDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("New Position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 429,506 ), long style = wxDEFAULT_DIALOG_STYLE );
		~NewPositionDialog();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase : public wxDialog
{
	private:

	protected:
		wxNotebook* m_notebook7;
		wxPanel* m_panel24;
		wxComboBox* m_cStart;
		wxStaticText* m_staticText28;
		wxButton* m_bGribTime;
		wxStaticText* m_staticText30;
		wxTimePickerCtrl* m_tpTime;
		wxButton* m_bCurrentTime;
		wxTextCtrl* m_tBoat;
		wxButton* m_bBoatFilename;
		wxButton* m_bEditBoat;
		wxStaticText* m_staticText20;
		wxSpinCtrl* m_sMaxDivertedCourse;
		wxStaticText* m_staticText1181;
		wxStaticText* m_staticText23;
		wxSpinCtrl* m_sMaxTrueWindKnots;
		wxStaticText* m_staticText128;
		wxStaticText* m_staticText136;
		wxSpinCtrl* m_sMaxApparentWindKnots;
		wxStaticText* m_staticText1282;
		wxStaticText* m_staticText27;
		wxSpinCtrl* m_sMaxSwellMeters;
		wxStaticText* m_staticText129;
		wxComboBox* m_cEnd;
		wxSpinCtrl* m_sTimeStepHours;
		wxStaticText* m_staticText110;
		wxSpinCtrl* m_sTimeStepMinutes;
		wxStaticText* m_staticText111;
		wxSpinCtrl* m_sTimeStepSeconds;
		wxStaticText* m_staticText112;
		wxCheckBox* m_cbDetectLand;
		wxCheckBox* m_cbDetectBoundary;
		wxCheckBox* m_cbOptimizeTacking;
		wxCheckBox* m_cbAllowDataDeficient;
		wxButton* m_bClose;
		wxPanel* m_panel25;
		wxStaticText* m_staticText26;
		wxSpinCtrl* m_sMaxLatitude;
		wxStaticText* m_staticText131;
		wxStaticText* m_staticText120;
		wxSpinCtrl* m_sWindVSCurrent;
		wxStaticText* m_staticText119;
		wxSpinCtrl* m_sMaxCourseAngle;
		wxStaticText* m_staticText1251;
		wxStaticText* m_staticText124;
		wxSpinCtrl* m_sMaxSearchAngle;
		wxStaticText* m_staticText125;
		wxStaticText* m_staticText1281;
		wxSpinCtrl* m_sCycloneMonths;
		wxStaticText* m_staticText1291;
		wxSpinCtrl* m_sCycloneDays;
		wxStaticText* m_staticText130;
		wxCheckBox* m_cbInvertedRegions;
		wxCheckBox* m_cbAnchoring;
		wxStaticText* m_staticText139;
		wxComboBox* m_cIntegrator;
		wxStaticText* m_staticText1292;
		wxSpinCtrl* m_sWindStrength;
		wxStaticText* m_staticText1301;
		wxStaticText* m_staticText24;
		wxSpinCtrl* m_sTackingTime;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText241;
		wxSpinCtrl* m_sSafetyMarginLand;
		wxStaticText* m_staticText1211;
		wxStaticText* m_staticText113;
		wxStaticText* m_staticText115;
		wxStaticText* m_staticText117;
		wxStaticText* m_staticText118;
		wxButton* m_bResetAdvanced;

		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateDate( wxDateEvent& event ) { event.Skip(); }
		virtual void OnGribTime( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateTime( wxDateEvent& event ) { event.Skip(); }
		virtual void OnCurrentTime( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBoatFilename( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void EnableSpin( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnUpdateSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAvoidCyclones( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetAdvanced( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxDatePickerCtrl* m_dpStartDate;
		wxCheckBox* m_cbCurrents;
		wxCheckBox* m_cbUseGrib;
		wxChoice* m_cClimatologyType;
		wxCheckBox* m_cbAvoidCycloneTracks;
		wxSpinCtrl* m_sFromDegree;
		wxSpinCtrl* m_sToDegree;
		wxTextCtrl* m_tByDegrees;

		ConfigurationDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Simulator Configuration"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE );
		~ConfigurationDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ConfigurationDialogBase2
///////////////////////////////////////////////////////////////////////////////
class ConfigurationDialogBase2 : public wxDialog
{
	private:

	protected:
		wxNotebook* m_notebookConfigurations;
		wxPanel* m_panel8;
		wxStaticText* m_staticText108;
		wxStaticText* m_stStartDateTime;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText122;
		wxStaticText* m_staticText123;
		wxStaticText* m_staticText124;
		wxStaticText* m_staticText125;
		wxStaticText* m_staticText126;
		wxButton* m_button41;
		wxButton* m_button38;
		wxButton* m_button39;
		wxButton* m_button40;
		wxPanel* m_pRoutes;
		wxListBox* m_lSources;
		wxListBox* m_lDestinations;
		wxStaticText* m_staticText1241;
		wxTextCtrl* m_tMiles;
		wxStaticText* m_staticText1251;
		wxButton* m_bConnect;
		wxButton* m_bDisconnectAll;
		wxPanel* m_panel9;
		wxButton* m_bAddBoat;
		wxButton* m_bRemoveBoat;
		wxPanel* m_panel17;
		wxStaticText* m_staticText131;
		wxStaticText* m_staticText134;
		wxStaticText* m_staticText132;
		wxStaticText* m_staticText1341;
		wxStaticText* m_staticText133;
		wxStaticText* m_staticText1342;
		wxButton* m_button46;
		wxButton* m_button47;
		wxButton* m_bInformation;
		wxButton* m_bReset;
		wxButton* m_bGenerate;
		wxButton* m_bClose;

		// Virtual event handlers, overide them in your derived class
		virtual void OnOnce( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDaily( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnWeekly( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnMonthly( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSources( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDestinations( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnConnect( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDisconnectAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void On100( wxCommandEvent& event ) { event.Skip(); }
		virtual void On80to120( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnReset( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGenerate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxTextCtrl* m_tStartDays;
		wxTextCtrl* m_tStartHours;
		wxTextCtrl* m_tStartSpacingDays;
		wxTextCtrl* m_tStartSpacingHours;
		wxListBox* m_lBoats;
		wxSpinCtrl* m_sWindStrengthMin;
		wxSpinCtrl* m_sWindStrengthMax;
		wxSpinCtrl* m_sWindStrengthStep;

		ConfigurationDialogBase2( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Configuration Page 2"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~ConfigurationDialogBase2();

};

///////////////////////////////////////////////////////////////////////////////
/// Class RoutePositionDialog
///////////////////////////////////////////////////////////////////////////////
class RoutePositionDialog : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText134;
		wxStaticText* m_staticDuration;
		wxStaticText* m_staticText128;
		wxStaticText* m_staticText12816;
		wxStaticText* m_staticText1281;
		wxStaticText* m_staticText12812;
		wxStaticText* m_staticText12811;
		wxStaticText* m_staticText12813;
		wxStaticText* m_staticText12814;
		wxStaticText* m_staticText12815;
		wxStaticText* m_staticText124;
		wxStaticText* m_staticText130;
		wxStaticText* m_staticText126;
		wxStaticText* m_staticText122;
		wxStdDialogButtonSizer* m_sdbSizer5;
		wxButton* m_sdbSizer5OK;

	public:
		wxStaticText* m_stTime;
		wxStaticText* m_stDuration;
		wxStaticText* m_stPosition;
		wxStaticText* m_stBoatSpeed;
		wxStaticText* m_stTWS;
		wxStaticText* m_stAWS;
		wxStaticText* m_stTWA;
		wxStaticText* m_stAWA;
		wxStaticText* m_stWaves;
		wxStaticText* m_stWindGust;
		wxStaticText* m_stPolar;
		wxStaticText* m_stSailChanges;
		wxStaticText* m_stTacks;
		wxStaticText* m_stWeatherData;

		RoutePositionDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Route Position"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 404,360 ), long style = wxDEFAULT_DIALOG_STYLE );
		~RoutePositionDialog();

};

///////////////////////////////////////////////////////////////////////////////
/// Class FilterRoutesDialogBase
///////////////////////////////////////////////////////////////////////////////
class FilterRoutesDialogBase : public wxDialog
{
	private:

	protected:
		wxChoice* m_cCategory;
		wxTextCtrl* m_tFilter;
		wxButton* m_button48;
		wxButton* m_bDone;

		// Virtual event handlers, overide them in your derived class
		virtual void OnCategory( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnFilterText( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnResetAll( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDone( wxCommandEvent& event ) { event.Skip(); }


	public:

		FilterRoutesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Filter Routes"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~FilterRoutesDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class BoatDialogBase
///////////////////////////////////////////////////////////////////////////////
class BoatDialogBase : public wxDialog
{
	private:

	protected:
		wxFlexGridSizer* m_fgSizer;
		wxSplitterWindow* m_splitter2;
		wxPanel* m_panel20;
		wxNotebook* m_nNotebook;
		wxPanel* m_plot;
		wxScrolledWindow* m_PlotWindow;
		wxPanel* m_panel10;
		wxScrolledWindow* m_CrossOverChart;
		wxStaticText* m_staticText137;
		wxSpinCtrl* m_sOverlapPercentage;
		wxStaticText* m_staticText138;
		wxPanel* m_panel24;
		wxStaticText* m_staticText125;
		wxStaticText* m_stBestCourseUpWindPortTack;
		wxStaticText* m_staticText1251;
		wxStaticText* m_stBestCourseUpWindStarboardTack;
		wxStaticText* m_staticText1252;
		wxStaticText* m_stBestCourseDownWindPortTack;
		wxStaticText* m_staticText12511;
		wxStaticText* m_stBestCourseDownWindStarboardTack;
		wxStaticText* m_staticText133;
		wxSpinCtrl* m_sVMGWindSpeed;
		wxChoice* m_cPlotType;
		wxChoice* m_cPlotVariable;
		wxCheckBox* m_cbFullPlot;
		wxPanel* m_panel21;
		wxListCtrl* m_lPolars;
		wxButton* m_bUp;
		wxButton* m_bDown;
		wxButton* m_bEditPolar;
		wxButton* m_bAddPolar;
		wxButton* m_bRemovePolar;
		wxStaticLine* m_staticline1;
		wxButton* m_bOpenBoat;
		wxButton* m_bSaveBoat;
		wxButton* m_bSaveAsBoat;

		// Virtual event handlers, overide them in your derived class
		virtual void OnMouseEventsPolarPlot( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnPaintPlot( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnUpdatePlot( wxSizeEvent& event ) { event.Skip(); }
		virtual void OnPaintCrossOverChart( wxPaintEvent& event ) { event.Skip(); }
		virtual void OnOverlapPercentage( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnVMGWindSpeed( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnUpdatePlot( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnPolarSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnUpPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnDownPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnEditPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddPolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemovePolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOpenBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveBoat( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnSaveAsBoat( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxGauge* m_gCrossOverChart;

		BoatDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Boat"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~BoatDialogBase();

		void m_splitter2OnIdle( wxIdleEvent& )
		{
			m_splitter2->SetSashPosition( 0 );
			m_splitter2->Disconnect( wxEVT_IDLE, wxIdleEventHandler( BoatDialogBase::m_splitter2OnIdle ), NULL, this );
		}

};

///////////////////////////////////////////////////////////////////////////////
/// Class EditPolarDialogBase
///////////////////////////////////////////////////////////////////////////////
class EditPolarDialogBase : public wxDialog
{
	private:

	protected:
		wxNotebook* m_notebook6;
		wxPanel* m_panel19;
		wxGrid* m_gPolar;
		wxStaticText* m_staticText1351;
		wxPanel* m_panel20;
		wxTextCtrl* m_tTrueWindAngle;
		wxListBox* m_lTrueWindAngles;
		wxButton* m_bAddTrueWindAngle;
		wxButton* m_bRemoveTrueWindAngle;
		wxTextCtrl* m_tTrueWindSpeed;
		wxListBox* m_lTrueWindSpeeds;
		wxButton* m_bAddTrueWindSpeed;
		wxButton* m_bRemoveTrueWindSpeed;
		wxPanel* m_panel21;
		wxNotebook* m_notebook61;
		wxPanel* m_panel22;
		wxRadioButton* m_rbApparentWind;
		wxRadioButton* m_rbTrueWind;
		wxStaticText* m_staticText133;
		wxTextCtrl* m_tWindSpeed;
		wxStaticText* m_staticText134;
		wxTextCtrl* m_tWindDirection;
		wxStaticText* m_staticText135;
		wxTextCtrl* m_tBoatSpeed;
		wxButton* m_button46;
		wxListCtrl* m_lMeasurements;
		wxButton* m_bRemoveMeasurement;
		wxButton* m_bRemoveAllMeasurements;
		wxButton* m_button48;
		wxButton* m_button50;
		wxPanel* m_panel23;
		wxPanel* m_panel17;
		wxStaticText* m_staticText139;
		wxStaticText* m_staticText100;
		wxChoice* m_cHullType;
		wxStaticText* m_staticText58;
		wxSpinCtrl* m_sDisplacement;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText128;
		wxSpinCtrl* m_sSailArea;
		wxStaticText* m_staticText129;
		wxStaticText* m_staticText57;
		wxSpinCtrl* m_sLWL;
		wxStaticText* m_staticText122;
		wxStaticText* m_staticText109;
		wxSpinCtrl* m_sLOA;
		wxStaticText* m_staticText127;
		wxStaticText* m_staticText113;
		wxSpinCtrl* m_sBeam;
		wxStaticText* m_staticText126;
		wxStaticText* m_staticText119;
		wxStaticText* m_stSailAreaDisplacementRatio;
		wxStaticText* m_staticText105;
		wxStaticText* m_stDisplacementLengthRatio;
		wxStaticText* m_staticText92;
		wxStaticText* m_stHullSpeed;
		wxStaticText* m_staticText94;
		wxStaticText* m_stCapsizeRisk;
		wxStaticText* m_staticText96;
		wxStaticText* m_stComfortFactor;
		wxPanel* m_panel221;
		wxGrid* m_grid1;
		wxButton* m_button42;
		wxButton* m_button43;
		wxButton* m_button44;
		wxButton* m_button45;
		wxButton* m_button461;
		wxStdDialogButtonSizer* m_sdbSizer6;
		wxButton* m_sdbSizer6Save;
		wxButton* m_sdbSizer6Cancel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnPolarGridChanged( wxGridEvent& event ) { event.Skip(); }
		virtual void d( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddTrueWindAngle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveTrueWindAngle( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddTrueWindSpeed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveTrueWindSpeed( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAddMeasurement( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveMeasurement( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRemoveAllMeasurements( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnGeneratePolar( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRecompute( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRecomputeSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnSave( wxCommandEvent& event ) { event.Skip(); }


	public:

		EditPolarDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Edit Vessel Simulator Polar Information"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~EditPolarDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SimulatorRoutingPanel
///////////////////////////////////////////////////////////////////////////////
class SimulatorRoutingPanel : public wxPanel
{
	private:

	protected:
		wxPanel* m_panel11;
		wxPanel* m_panel12;

		// Virtual event handlers, overide them in your derived class
		virtual void OnEditPositionClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftUp( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnPositionKeyDown( wxListEvent& event ) { event.Skip(); }
		virtual void OnEditConfigurationClick( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnWeatherRoutesListLeftDown( wxMouseEvent& event ) { event.Skip(); }
		virtual void OnWeatherRouteSort( wxListEvent& event ) { event.Skip(); }
		virtual void OnWeatherRouteSelected( wxListEvent& event ) { event.Skip(); }
		virtual void OnWeatherRouteKeyDown( wxListEvent& event ) { event.Skip(); }
		virtual void OnCompute( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnExport( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxSplitterWindow* m_splitter1;
		wxListCtrl* m_lPositions;
		wxListCtrl* m_lWeatherRoutes;
		wxButton* m_bCompute;
		wxButton* m_bExport;
		wxGauge* m_gProgress;

		SimulatorRoutingPanel( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 500,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~SimulatorRoutingPanel();

};

///////////////////////////////////////////////////////////////////////////////
/// Class SettingsDialogBase
///////////////////////////////////////////////////////////////////////////////
class SettingsDialogBase : public wxDialog
{
	private:

	protected:
		wxScrolledWindow* m_scrolledWindow4;
		wxStaticText* m_staticText74;
		wxStaticText* m_staticText73;
		wxStaticText* m_staticText75;
		wxStaticText* m_staticText70;
		wxStaticText* m_staticText71;
		wxStaticText* m_staticText711;
		wxStaticText* m_staticText115;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Help;

		// Virtual event handlers, overide them in your derived class
		virtual void OnUpdateColor( wxColourPickerEvent& event ) { event.Skip(); }
		virtual void OnUpdateSpin( wxSpinEvent& event ) { event.Skip(); }
		virtual void OnUpdate( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnUpdateColumns( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnHelp( wxCommandEvent& event ) { event.Skip(); }


	public:
		wxColourPickerCtrl* m_cpCursorRoute;
		wxColourPickerCtrl* m_cpDestinationRoute;
		wxSpinCtrl* m_sRouteThickness;
		wxSpinCtrl* m_sIsoChronThickness;
		wxSpinCtrl* m_sAlternateRouteThickness;
		wxSpinCtrl* m_sWindBarbsOnRouteThickness;
		wxCheckBox* m_cbDisplayCursorRoute;
		wxCheckBox* m_cbAlternatesForAll;
		wxCheckBox* m_cbMarkAtPolarChange;
		wxCheckBox* m_cbDisplayCurrent;
		wxCheckBox* m_cbDisplayWindBarbs;
		wxCheckBox* m_cbDisplayApparentWindBarbs;
		wxCheckBox* m_cbDisplayComfort;
		wxSpinCtrl* m_sConcurrentThreads;
		wxCheckListBox* m_cblFields;
		wxCheckBox* m_cbUseLocalTime;

		SettingsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Simulator Settings"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~SettingsDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class PreferencesDialogBase
///////////////////////////////////////////////////////////////////////////////
class PreferencesDialogBase : public wxDialog
{
	private:

	protected:
		wxChoicebook* m_cbMode;
		wxPanel* m_panel5;
		wxStaticText* m_staticText57;
		wxSpinCtrlDouble* m_sXTEP;
		wxStaticText* m_staticText561;
		wxPanel* m_panel8;
		wxPanel* m_panel9;
		wxChoicebook* m_cbRoutePositionBearingMode;
		wxPanel* m_panel91;
		wxSpinCtrl* m_sRoutePositionBearingDistance;
		wxStaticText* m_staticText74;
		wxStaticText* m_staticText10;
		wxSpinCtrl* m_sRoutePositionBearingMaxAngle;
		wxPanel* m_panel10;
		wxSpinCtrl* m_sRoutePositionBearingTime;
		wxStaticText* m_staticText30;
		wxCheckBox* m_cbBoundary;
		wxTextCtrl* m_tBoundary;
		wxButton* m_button22;
		wxStaticText* m_staticText71;
		wxSpinCtrl* m_sBoundaryWidth;
		wxStaticText* m_staticText72;
		wxCheckBox* m_cbConfirmBearingChange;
		wxCheckBox* m_cbInterceptRoute;
		wxChoice* m_cComputation;
		wxCheckListBox* m_cbActiveRouteItems0;
		wxCheckListBox* m_cbActiveRouteItems1;
		wxButton* m_button4;
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;

		// Virtual event handlers, overide them in your derived class
		virtual void OnMode( wxChoicebookEvent& event ) { event.Skip(); }
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnOk( wxCommandEvent& event ) { event.Skip(); }


	public:

		PreferencesDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Simulator Autopilot Route Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 666,448 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER|wxTAB_TRAVERSAL );
		~PreferencesDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class StatisticsDialogBase
///////////////////////////////////////////////////////////////////////////////
class StatisticsDialogBase : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText511;
		wxStaticText* m_stRunTime;
		wxStaticText* m_staticText47;
		wxStaticText* m_stState;
		wxStaticText* m_staticText53;
		wxStaticText* m_stIsoChrons;
		wxStaticText* m_staticText55;
		wxStaticText* m_stRoutes;
		wxStaticText* m_staticText57;
		wxStaticText* m_stInvRoutes;
		wxStaticText* m_staticText90;
		wxStaticText* m_stSkipPositions;
		wxStaticText* m_staticText49;
		wxStaticText* m_stPositions;
		wxStdDialogButtonSizer* m_sdbSizer5;
		wxButton* m_sdbSizer5OK;

	public:

		StatisticsDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Plugin Statistics"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~StatisticsDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class ReportDialogBase
///////////////////////////////////////////////////////////////////////////////
class ReportDialogBase : public wxDialog
{
	private:

	protected:
		wxHtmlWindow* m_htmlConfigurationReport;
		wxHtmlWindow* m_htmlRoutesReport;
		wxButton* m_bInformation;
		wxButton* m_bClose;

		// Virtual event handlers, overide them in your derived class
		virtual void OnInformation( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		ReportDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Plugin Report"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( -1,-1 ), long style = wxCLOSE_BOX|wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~ReportDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class AboutDialogBase
///////////////////////////////////////////////////////////////////////////////
class AboutDialogBase : public wxDialog
{
	private:

	protected:
		wxStaticText* m_staticText135;
		wxStaticText* m_stVersion;
		wxStaticText* m_staticText110;
		wxButton* m_bAboutAuthor;
		wxButton* m_bClose;

		// Virtual event handlers, overide them in your derived class
		virtual void OnAboutAuthor( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnClose( wxCommandEvent& event ) { event.Skip(); }


	public:

		AboutDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("About Simulator"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE );
		~AboutDialogBase();

};

