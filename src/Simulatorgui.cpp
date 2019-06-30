///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun  7 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "Simulatorgui.h"

///////////////////////////////////////////////////////////////////////////

SimulatorBase::SimulatorBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 355,500 ), wxDefaultSize );
	this->SetExtraStyle( wxFRAME_EX_METAL );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer11;
	fgSizer11 = new wxFlexGridSizer( 4, 1, 0, 0 );
	fgSizer11->SetFlexibleDirection( wxBOTH );
	fgSizer11->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer223;
	fgSizer223 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer223->SetFlexibleDirection( wxBOTH );
	fgSizer223->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer229;
	fgSizer229 = new wxFlexGridSizer( 4, 1, 0, 0 );
	fgSizer229->SetFlexibleDirection( wxBOTH );
	fgSizer229->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bpPlay = new wxButton( this, wxID_ANY, _("Start"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_bpPlay->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_bpPlay->SetForegroundColour( wxColour( 29, 219, 13 ) );
	m_bpPlay->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bpPlay->SetToolTip( _("Press here to load grib data and start the simulator") );

	fgSizer229->Add( m_bpPlay, 0, wxALL, 2 );

	m_bpStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bpStop->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_bpStop->SetForegroundColour( wxColour( 158, 23, 23 ) );
	m_bpStop->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_bpStop->SetToolTip( _("Press here to stop the simulator") );

	fgSizer229->Add( m_bpStop, 0, wxALL, 2 );

	m_buttonAuto = new wxButton( this, wxID_ANY, _("Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAuto->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonAuto->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonAuto->SetToolTip( _("Press Set to engauge the Autopilot ") );

	fgSizer229->Add( m_buttonAuto, 0, wxALL, 2 );

	m_buttonStandby = new wxButton( this, wxID_ANY, _("Stdby"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonStandby->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonStandby->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonStandby->SetToolTip( _("Manual ") );

	fgSizer229->Add( m_buttonStandby, 0, wxALL, 2 );


	fgSizer223->Add( fgSizer229, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer288;
	fgSizer288 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer288->SetFlexibleDirection( wxBOTH );
	fgSizer288->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbLongS;
	sbLongS = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Bearing  / Speed") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer221111;
	fgSizer221111 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer221111->SetFlexibleDirection( wxBOTH );
	fgSizer221111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stHeading = new wxStaticText( sbLongS->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stHeading->Wrap( -1 );
	m_stHeading->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stHeading->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stHeading->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stHeading->SetToolTip( _("Vessel Heading") );

	fgSizer221111->Add( m_stHeading, 0, wxALL, 1 );

	m_staticTextKnots122 = new wxStaticText( sbLongS->GetStaticBox(), wxID_ANY, _("Deg t    "), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots122->Wrap( -1 );
	m_staticTextKnots122->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots122->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots122->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer221111->Add( m_staticTextKnots122, 0, wxALL, 1 );

	m_stSpeed = new wxStaticText( sbLongS->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stSpeed->Wrap( -1 );
	m_stSpeed->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stSpeed->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stSpeed->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stSpeed->SetToolTip( _("Log Speed") );

	fgSizer221111->Add( m_stSpeed, 0, wxALL, 1 );

	m_staticText8111111 = new wxStaticText( sbLongS->GetStaticBox(), wxID_ANY, _(" Kts "), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticText8111111->Wrap( -1 );
	m_staticText8111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticText8111111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText8111111->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer221111->Add( m_staticText8111111, 0, wxALL, 1 );


	sbLongS->Add( fgSizer221111, 1, wxEXPAND, 5 );


	fgSizer288->Add( sbLongS, 1, wxEXPAND, 0 );

	wxStaticBoxSizer* sbLongS1;
	sbLongS1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Present Position") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2211111;
	fgSizer2211111 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer2211111->SetFlexibleDirection( wxBOTH );
	fgSizer2211111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stLatD1 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stLatD1->Wrap( -1 );
	m_stLatD1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLatD1->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD1, 0, wxALL, 1 );

	m_stLatD1m = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLatD1m->Wrap( -1 );
	m_stLatD1m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD1m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD1m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLatD1m->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD1m, 0, wxALL, 1 );

	m_stLatD1s = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLatD1s->Wrap( -1 );
	m_stLatD1s->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD1s->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD1s->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD1s, 0, wxALL, 1 );

	m_staticTextKnots1111111113 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots1111111113->Wrap( -1 );
	m_staticTextKnots1111111113->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots1111111113->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots1111111113->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots1111111113, 0, wxALL, 1 );

	m_stLongD1 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stLongD1->Wrap( -1 );
	m_stLongD1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongD1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongD1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongD1->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongD1, 0, wxALL, 1 );

	m_stLongD1m = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLongD1m->Wrap( -1 );
	m_stLongD1m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongD1m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongD1m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongD1m->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongD1m, 0, wxALL, 1 );

	m_stLongD1s = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLongD1s->Wrap( -1 );
	m_stLongD1s->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongD1s->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongD1s->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongD1s->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongD1s, 0, wxALL, 1 );

	m_staticTextKnots11111111112 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots11111111112->Wrap( -1 );
	m_staticTextKnots11111111112->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots11111111112->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots11111111112->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots11111111112, 0, wxALL, 1 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stLatD2 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stLatD2->Wrap( -1 );
	m_stLatD2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLatD2->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD2, 0, wxALL, 1 );

	m_stLatD2m = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLatD2m->Wrap( -1 );
	m_stLatD2m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD2m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD2m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLatD2m->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD2m, 0, wxALL, 1 );

	m_staticTextKnots11111111122 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots11111111122->Wrap( -1 );
	m_staticTextKnots11111111122->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots11111111122->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots11111111122->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots11111111122, 0, wxALL, 1 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stLongD2 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stLongD2->Wrap( -1 );
	m_stLongD2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongD2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongD2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongD2->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongD2, 0, wxALL, 1 );

	m_stLongDm = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_stLongDm->Wrap( -1 );
	m_stLongDm->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongDm->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongDm->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongDm->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongDm, 0, wxALL, 1 );

	m_staticTextKnots111111111112 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots111111111112->Wrap( -1 );
	m_staticTextKnots111111111112->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots111111111112->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots111111111112->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots111111111112, 0, wxALL, 1 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stLatD3 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLatD3->Wrap( -1 );
	m_stLatD3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLatD3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLatD3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLatD3->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLatD3, 0, wxALL, 1 );

	m_staticTextKnots111111111211 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots111111111211->Wrap( -1 );
	m_staticTextKnots111111111211->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots111111111211->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots111111111211->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots111111111211, 0, wxALL, 1 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer2211111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stLongD3 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_stLongD3->Wrap( -1 );
	m_stLongD3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stLongD3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stLongD3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stLongD3->SetToolTip( _("Vessel Heading") );

	fgSizer2211111->Add( m_stLongD3, 0, wxALL, 1 );

	m_staticTextKnots1111111111111 = new wxStaticText( sbLongS1->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, wxALIGN_LEFT );
	m_staticTextKnots1111111111111->Wrap( -1 );
	m_staticTextKnots1111111111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots1111111111111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots1111111111111->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211111->Add( m_staticTextKnots1111111111111, 0, wxALL, 1 );


	sbLongS1->Add( fgSizer2211111, 1, wxEXPAND, 5 );


	fgSizer288->Add( sbLongS1, 1, wxEXPAND, 5 );


	fgSizer223->Add( fgSizer288, 1, wxEXPAND, 2 );


	fgSizer11->Add( fgSizer223, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer111;
	fgSizer111 = new wxFlexGridSizer( 3, 4, 0, 0 );
	fgSizer111->AddGrowableCol( 0 );
	fgSizer111->AddGrowableCol( 1 );
	fgSizer111->AddGrowableCol( 2 );
	fgSizer111->AddGrowableCol( 3 );
	fgSizer111->AddGrowableRow( 0 );
	fgSizer111->AddGrowableRow( 1 );
	fgSizer111->SetFlexibleDirection( wxVERTICAL );
	fgSizer111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer228;
	fgSizer228 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer228->SetFlexibleDirection( wxBOTH );
	fgSizer228->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonStandby1 = new wxButton( this, wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonStandby1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonStandby1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonStandby1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonStandby1->SetToolTip( _("Manual ") );

	fgSizer228->Add( m_buttonStandby1, 0, wxALL, 2 );

	m_buttonWind = new wxButton( this, wxID_ANY, _("Grib"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonWind->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonWind->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonWind->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonWind->SetToolTip( _("Press this to Sail based on grib and sail polar data ") );

	fgSizer228->Add( m_buttonWind, 0, wxALL, 3 );

	m_button6 = new wxButton( this, wxID_ANY, _("Static"), wxDefaultPosition, wxDefaultSize, 0 );
	m_button6->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_button6->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_button6->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_button6->SetToolTip( _("Autopilot Rudder Trim") );

	fgSizer228->Add( m_button6, 0, wxALL, 3 );

	m_buttonSpare19 = new wxButton( this, wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonSpare19->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonSpare19->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer228->Add( m_buttonSpare19, 0, wxALL, 2 );

	m_buttonMinus1 = new wxButton( this, wxID_ANY, _("-1"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	m_buttonMinus1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMinus1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonMinus1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonMinus1->SetToolTip( _("AP Set Value -1") );

	fgSizer228->Add( m_buttonMinus1, 0, wxALIGN_RIGHT|wxALL, 2 );

	m_buttonMinus10 = new wxButton( this, wxID_ANY, _("-10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMinus10->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMinus10->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonMinus10->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonMinus10->SetToolTip( _("AP Set Value -10") );

	fgSizer228->Add( m_buttonMinus10, 0, wxALL, 3 );

	m_buttonPlus10 = new wxButton( this, wxID_ANY, _("+10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPlus10->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonPlus10->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonPlus10->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonPlus10->SetToolTip( _("AP Set Value +10") );

	fgSizer228->Add( m_buttonPlus10, 0, wxALL, 3 );

	m_buttonPlus1 = new wxButton( this, wxID_ANY, _("+1"), wxDefaultPosition, wxDefaultSize, wxBU_EXACTFIT );
	m_buttonPlus1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonPlus1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonPlus1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonPlus1->SetToolTip( _("AP Set Value +1") );

	fgSizer228->Add( m_buttonPlus1, 0, wxALL, 2 );


	fgSizer111->Add( fgSizer228, 1, wxEXPAND, 2 );


	fgSizer11->Add( fgSizer111, 1, wxEXPAND, 2 );


	fgSizer1->Add( fgSizer11, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("WP Display") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer211;
	fgSizer211 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer211->AddGrowableCol( 1 );
	fgSizer211->SetFlexibleDirection( wxBOTH );
	fgSizer211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTWPName = new wxStaticText( sbSizer1->GetStaticBox(), wxID_ANY, _("WP ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTWPName->Wrap( -1 );
	m_staticTWPName->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTWPName->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer211->Add( m_staticTWPName, 0, wxALL, 2 );

	m_tActiveWP = new wxTextCtrl( sbSizer1->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_tActiveWP->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_tActiveWP->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer211->Add( m_tActiveWP, 0, wxALL|wxEXPAND, 2 );


	fgSizer2->Add( fgSizer211, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer212;
	fgSizer212 = new wxFlexGridSizer( 1, 1, 0, 0 );
	fgSizer212->SetFlexibleDirection( wxBOTH );
	fgSizer212->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbLongS11;
	sbLongS11 = new wxStaticBoxSizer( new wxStaticBox( sbSizer1->GetStaticBox(), wxID_ANY, _("WP Position") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer22111111;
	fgSizer22111111 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer22111111->SetFlexibleDirection( wxBOTH );
	fgSizer22111111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stWPLatD1 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD1->Wrap( -1 );
	m_stWPLatD1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD1->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD1, 0, wxALL, 1 );

	m_stWPLatD1m = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD1m->Wrap( -1 );
	m_stWPLatD1m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD1m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD1m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD1m->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD1m, 0, wxALL, 1 );

	m_stWPLatD1s = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD1s->Wrap( -1 );
	m_stWPLatD1s->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD1s->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD1s->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD1s->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD1s, 0, wxALL, 1 );

	m_staticTextKnots11111111131 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Lat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots11111111131->Wrap( -1 );
	m_staticTextKnots11111111131->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots11111111131->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots11111111131->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots11111111131, 0, wxALL, 1 );

	m_stWPLongD1 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD1->Wrap( -1 );
	m_stWPLongD1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD1->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD1, 0, wxALL, 1 );

	m_stWPLongD1m = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD1m->Wrap( -1 );
	m_stWPLongD1m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD1m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD1m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD1m->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD1m, 0, wxALL, 1 );

	m_stWPLongD1s = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD1s->Wrap( -1 );
	m_stWPLongD1s->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD1s->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD1s->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD1s->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD1s, 0, wxALL, 1 );

	m_staticTextKnots111111111121 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Long"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots111111111121->Wrap( -1 );
	m_staticTextKnots111111111121->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots111111111121->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots111111111121->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots111111111121, 0, wxALL, 1 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stWPLatD2 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD2->Wrap( -1 );
	m_stWPLatD2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD2->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD2, 0, wxALL, 1 );

	m_stWPLatD2m = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD2m->Wrap( -1 );
	m_stWPLatD2m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD2m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD2m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD2m->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD2m, 0, wxALL, 1 );

	m_staticTextKnots111111111221 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Lat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots111111111221->Wrap( -1 );
	m_staticTextKnots111111111221->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots111111111221->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots111111111221->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots111111111221, 0, wxALL, 1 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stWPLongD2 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD2->Wrap( -1 );
	m_stWPLongD2->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD2->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD2, 0, wxALL, 1 );

	m_stWPLongD2m = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD2m->Wrap( -1 );
	m_stWPLongD2m->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD2m->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD2m->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD2m->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD2m, 0, wxALL, 1 );

	m_staticTextKnots1111111111121 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Long"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1111111111121->Wrap( -1 );
	m_staticTextKnots1111111111121->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots1111111111121->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots1111111111121->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots1111111111121, 0, wxALL, 1 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stWPLatD3 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLatD3->Wrap( -1 );
	m_stWPLatD3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLatD3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLatD3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLatD3->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLatD3, 0, wxALL, 1 );

	m_staticTextKnots1111111112111 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Lat"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1111111112111->Wrap( -1 );
	m_staticTextKnots1111111112111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots1111111112111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots1111111112111->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots1111111112111, 0, wxALL, 1 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer22111111->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stWPLongD3 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPLongD3->Wrap( -1 );
	m_stWPLongD3->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPLongD3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPLongD3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPLongD3->SetToolTip( _("Vessel Heading") );

	fgSizer22111111->Add( m_stWPLongD3, 0, wxALL, 1 );

	m_staticTextKnots11111111111111 = new wxStaticText( sbLongS11->GetStaticBox(), wxID_ANY, _("Long"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots11111111111111->Wrap( -1 );
	m_staticTextKnots11111111111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots11111111111111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots11111111111111->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer22111111->Add( m_staticTextKnots11111111111111, 0, wxALL, 1 );


	sbLongS11->Add( fgSizer22111111, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbLongS3;
	sbLongS3 = new wxStaticBoxSizer( new wxStaticBox( sbLongS11->GetStaticBox(), wxID_ANY, _("Bearing  / Distance") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2211113;
	fgSizer2211113 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer2211113->SetFlexibleDirection( wxBOTH );
	fgSizer2211113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stWPHeading = new wxStaticText( sbLongS3->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPHeading->Wrap( -1 );
	m_stWPHeading->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPHeading->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPHeading->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPHeading->SetToolTip( _("Vessel Heading") );

	fgSizer2211113->Add( m_stWPHeading, 0, wxALL, 1 );

	m_staticTextKnots122111112 = new wxStaticText( sbLongS3->GetStaticBox(), wxID_ANY, _("Deg t"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots122111112->Wrap( -1 );
	m_staticTextKnots122111112->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTextKnots122111112->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextKnots122111112->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211113->Add( m_staticTextKnots122111112, 0, wxALL, 1 );

	m_stWPDistance = new wxStaticText( sbLongS3->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stWPDistance->Wrap( -1 );
	m_stWPDistance->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stWPDistance->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_stWPDistance->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_stWPDistance->SetToolTip( _("Log Speed") );

	fgSizer2211113->Add( m_stWPDistance, 0, wxALL, 1 );

	m_staticText18121112 = new wxStaticText( sbLongS3->GetStaticBox(), wxID_ANY, _("N Mi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18121112->Wrap( -1 );
	m_staticText18121112->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticText18121112->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText18121112->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer2211113->Add( m_staticText18121112, 0, wxALL, 1 );


	sbLongS3->Add( fgSizer2211113, 1, wxEXPAND, 5 );


	sbLongS11->Add( sbLongS3, 1, wxEXPAND, 5 );


	fgSizer212->Add( sbLongS11, 1, wxEXPAND, 5 );


	fgSizer2->Add( fgSizer212, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer277;
	fgSizer277 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer277->SetFlexibleDirection( wxBOTH );
	fgSizer277->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer2->Add( fgSizer277, 1, wxEXPAND, 2 );


	sbSizer1->Add( fgSizer2, 1, wxEXPAND, 2 );

	wxBoxSizer* bSizer31;
	bSizer31 = new wxBoxSizer( wxHORIZONTAL );


	sbSizer1->Add( bSizer31, 1, wxEXPAND, 2 );


	fgSizer1->Add( sbSizer1, 1, wxEXPAND, 2 );


	bSizer1->Add( fgSizer1, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer4->AddGrowableCol( 0 );
	fgSizer4->AddGrowableRow( 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_notebookSimulator = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_notebookSimulator->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_notebookSimulator->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_notebookSimulator->SetToolTip( _("Select Function Tab") );

	m_panelHelm = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelHelm->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelHelm->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelHelm->SetToolTip( _("Manual Settings") );
	m_panelHelm->SetMinSize( wxSize( 475,-1 ) );

	wxFlexGridSizer* fgSizer81;
	fgSizer81 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer81->AddGrowableCol( 0 );
	fgSizer81->AddGrowableRow( 0 );
	fgSizer81->SetFlexibleDirection( wxBOTH );
	fgSizer81->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxBoxSizer* bSizer141;
	bSizer141 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer132;
	bSizer132 = new wxBoxSizer( wxHORIZONTAL );

	m_staticTxtRudder = new wxStaticText( m_panelHelm, wxID_ANY, _("Rudder / Trim         "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTxtRudder->Wrap( -1 );
	m_staticTxtRudder->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticTxtRudder->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTxtRudder->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_staticTxtRudder->SetToolTip( _("To Adjust rudder angle ( including trim)") );

	bSizer132->Add( m_staticTxtRudder, 0, wxALL, 2 );

	m_SliderRudder = new wxSpinCtrlDouble( m_panelHelm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL|wxSP_ARROW_KEYS, -35, 35, 0.000000, 0.01 );
	m_SliderRudder->SetDigits( 2 );
	m_SliderRudder->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_SliderRudder->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_SliderRudder->SetToolTip( _("Rudder Angle -P + S") );

	bSizer132->Add( m_SliderRudder, 0, wxALIGN_RIGHT|wxALL, 2 );

	wxStaticBoxSizer* sbSizer481;
	sbSizer481 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _("Spacer") ), wxVERTICAL );

	wxBoxSizer* bSizer711;
	bSizer711 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer1112;
	bSizer1112 = new wxBoxSizer( wxVERTICAL );


	bSizer711->Add( bSizer1112, 1, wxEXPAND, 5 );


	bSizer711->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer711->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer721;
	bSizer721 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer1121;
	bSizer1121 = new wxBoxSizer( wxVERTICAL );


	bSizer721->Add( bSizer1121, 1, wxEXPAND, 5 );


	bSizer721->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer721->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticline121 = new wxStaticLine( sbSizer481->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_staticline121->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticline121->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	bSizer721->Add( m_staticline121, 0, wxEXPAND | wxALL, 5 );


	bSizer711->Add( bSizer721, 1, wxEXPAND, 5 );


	sbSizer481->Add( bSizer711, 1, wxEXPAND, 2 );


	bSizer132->Add( sbSizer481, 1, wxEXPAND, 2 );


	bSizer141->Add( bSizer132, 0, wxEXPAND, 2 );

	wxBoxSizer* bSizer1311;
	bSizer1311 = new wxBoxSizer( wxHORIZONTAL );


	bSizer1311->Add( 0, 0, 1, wxEXPAND, 2 );

	m_textCtrlRudderPort = new wxTextCtrl( m_panelHelm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_CENTER|wxBORDER_RAISED|wxBORDER_SUNKEN );
	m_textCtrlRudderPort->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrlRudderPort->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_textCtrlRudderPort->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_textCtrlRudderPort->SetToolTip( _("Port Rudder Angle Value") );

	bSizer1311->Add( m_textCtrlRudderPort, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 0 );

	m_buttonMid = new wxButton( m_panelHelm, wxID_ANY, _(">|<"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMid->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMid->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_buttonMid->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_buttonMid->SetToolTip( _("Centre Rudder Midships") );

	bSizer1311->Add( m_buttonMid, 0, wxALIGN_CENTER_VERTICAL, 2 );

	m_textCtrlRudderStbd = new wxTextCtrl( m_panelHelm, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY|wxBORDER_SUNKEN );
	m_textCtrlRudderStbd->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrlRudderStbd->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_textCtrlRudderStbd->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_textCtrlRudderStbd->SetToolTip( _("Starboard Rudder Angle Value") );

	bSizer1311->Add( m_textCtrlRudderStbd, 0, wxALIGN_CENTER_VERTICAL, 2 );

	wxStaticBoxSizer* sbSizer482;
	sbSizer482 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _("Spacer") ), wxVERTICAL );

	sbSizer482->SetMinSize( wxSize( 475,-1 ) );

	bSizer1311->Add( sbSizer482, 1, wxEXPAND, 2 );


	bSizer1311->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer141->Add( bSizer1311, 1, wxEXPAND, 2 );

	wxBoxSizer* bSizer61;
	bSizer61 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer161;
	bSizer161 = new wxBoxSizer( wxHORIZONTAL );

	wxStaticBoxSizer* sbSizer28111;
	sbSizer28111 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _("Stuff") ), wxVERTICAL );


	bSizer161->Add( sbSizer28111, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer10721;
	fgSizer10721 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer10721->AddGrowableCol( 0 );
	fgSizer10721->AddGrowableCol( 1 );
	fgSizer10721->SetFlexibleDirection( wxBOTH );
	fgSizer10721->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1082;
	fgSizer1082 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1082->AddGrowableCol( 0 );
	fgSizer1082->SetFlexibleDirection( wxBOTH );
	fgSizer1082->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer2811;
	sbSizer2811 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _("     Port") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer9511;
	fgSizer9511 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer9511->SetFlexibleDirection( wxBOTH );
	fgSizer9511->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer2811->Add( fgSizer9511, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer9411;
	fgSizer9411 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer9411->SetFlexibleDirection( wxBOTH );
	fgSizer9411->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer9521;
	fgSizer9521 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer9521->SetFlexibleDirection( wxBOTH );
	fgSizer9521->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_SliderSpeed = new wxSlider( sbSizer2811->GetStaticBox(), wxID_ANY, 0, -50, 250, wxPoint( -1,-1 ), wxSize( -1,200 ), wxSL_AUTOTICKS|wxSL_BOTH|wxSL_HORIZONTAL|wxSL_INVERSE|wxSL_LEFT|wxSL_MIN_MAX_LABELS|wxSL_VALUE_LABEL|wxBORDER_DEFAULT );
	m_SliderSpeed->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_SliderSpeed->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_SliderSpeed->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_SliderSpeed->SetToolTip( _("Port Eng Speed (Kts)") );

	fgSizer9521->Add( m_SliderSpeed, 0, wxALL, 5 );


	fgSizer9411->Add( fgSizer9521, 1, wxEXPAND, 5 );


	sbSizer2811->Add( fgSizer9411, 1, wxEXPAND, 5 );


	fgSizer1082->Add( sbSizer2811, 1, wxEXPAND, 5 );


	fgSizer10721->Add( fgSizer1082, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1092;
	fgSizer1092 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1092->AddGrowableCol( 0 );
	fgSizer1092->SetFlexibleDirection( wxBOTH );
	fgSizer1092->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer292;
	sbSizer292 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _(" Starboard") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer1132;
	fgSizer1132 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1132->SetFlexibleDirection( wxBOTH );
	fgSizer1132->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer115112;
	fgSizer115112 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer115112->SetFlexibleDirection( wxBOTH );
	fgSizer115112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_SliderSpStarb = new wxSlider( sbSizer292->GetStaticBox(), wxID_ANY, 0, -50, 250, wxPoint( -1,-1 ), wxSize( -1,200 ), wxSL_AUTOTICKS|wxSL_BOTH|wxSL_HORIZONTAL|wxSL_INVERSE|wxSL_LEFT|wxSL_MIN_MAX_LABELS|wxSL_VALUE_LABEL|wxBORDER_DEFAULT );
	m_SliderSpStarb->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_SliderSpStarb->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_SliderSpStarb->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_SliderSpStarb->SetToolTip( _("Starboard Eng Speed (Kts)") );

	fgSizer115112->Add( m_SliderSpStarb, 0, wxALL, 5 );


	fgSizer1132->Add( fgSizer115112, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer11212;
	fgSizer11212 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer11212->SetFlexibleDirection( wxBOTH );
	fgSizer11212->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer1132->Add( fgSizer11212, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1153;
	fgSizer1153 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1153->SetFlexibleDirection( wxBOTH );
	fgSizer1153->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer1132->Add( fgSizer1153, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer11513;
	fgSizer11513 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer11513->SetFlexibleDirection( wxBOTH );
	fgSizer11513->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer1132->Add( fgSizer11513, 1, wxEXPAND, 5 );


	sbSizer292->Add( fgSizer1132, 1, wxEXPAND, 5 );


	fgSizer1092->Add( sbSizer292, 1, wxEXPAND, 5 );


	fgSizer10721->Add( fgSizer1092, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2911;
	sbSizer2911 = new wxStaticBoxSizer( new wxStaticBox( m_panelHelm, wxID_ANY, _("Stuff ") ), wxVERTICAL );

	sbSizer2911->SetMinSize( wxSize( 550,-1 ) );
	wxStaticBoxSizer* sbSizer661;
	sbSizer661 = new wxStaticBoxSizer( new wxStaticBox( sbSizer2911->GetStaticBox(), wxID_ANY, _("label") ), wxVERTICAL );


	sbSizer2911->Add( sbSizer661, 1, wxEXPAND, 5 );


	fgSizer10721->Add( sbSizer2911, 1, wxEXPAND, 5 );


	bSizer161->Add( fgSizer10721, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer161, 1, wxEXPAND, 5 );


	bSizer61->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer77;
	bSizer77 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer11111;
	bSizer11111 = new wxBoxSizer( wxVERTICAL );


	bSizer77->Add( bSizer11111, 1, wxEXPAND, 5 );


	bSizer61->Add( bSizer77, 1, wxEXPAND, 5 );


	bSizer141->Add( bSizer61, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 2 );


	fgSizer81->Add( bSizer141, 1, wxEXPAND, 2 );


	m_panelHelm->SetSizer( fgSizer81 );
	m_panelHelm->Layout();
	fgSizer81->Fit( m_panelHelm );
	m_notebookSimulator->AddPage( m_panelHelm, _("Helm"), true );
	m_panelGPS = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelGPS->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelGPS->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelGPS->SetToolTip( _("GPS Settings") );

	wxFlexGridSizer* fgSizer10813;
	fgSizer10813 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer10813->SetFlexibleDirection( wxBOTH );
	fgSizer10813->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer63;
	sbSizer63 = new wxStaticBoxSizer( new wxStaticBox( m_panelGPS, wxID_ANY, _("GPS Constillation + Parameters") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer108131;
	fgSizer108131 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer108131->SetFlexibleDirection( wxBOTH );
	fgSizer108131->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText13141 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("Sat 1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13141->Wrap( -1 );
	m_staticText13141->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText13141->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer108131->Add( m_staticText13141, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spPrn1 = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 4 );
	m_spPrn1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spPrn1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spPrn1->SetToolTip( _("Sattelite #1 ID#") );

	fgSizer108131->Add( m_spPrn1, 0, wxALL, 2 );

	m_staticText1341511 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341511->Wrap( -1 );
	fgSizer108131->Add( m_staticText1341511, 0, wxALL, 5 );

	m_staticText131231 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("Sat 2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131231->Wrap( -1 );
	m_staticText131231->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText131231->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer108131->Add( m_staticText131231, 0, wxALL, 2 );

	m_spPrn2 = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 17 );
	m_spPrn2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spPrn2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spPrn2->SetToolTip( _("Sattelite #2 ID#") );

	fgSizer108131->Add( m_spPrn2, 0, wxALL, 2 );

	m_staticText1341512 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341512->Wrap( -1 );
	fgSizer108131->Add( m_staticText1341512, 0, wxALL, 5 );

	m_staticText13231 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("Sat 3"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13231->Wrap( -1 );
	fgSizer108131->Add( m_staticText13231, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spPrn3 = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 22 );
	m_spPrn3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spPrn3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spPrn3->SetToolTip( _("Sattelite #3 ID#") );

	fgSizer108131->Add( m_spPrn3, 0, wxALL, 2 );

	m_staticText134151 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134151->Wrap( -1 );
	fgSizer108131->Add( m_staticText134151, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText1311121 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("Sat 4"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1311121->Wrap( -1 );
	fgSizer108131->Add( m_staticText1311121, 0, wxALL, 2 );

	m_spPrn4 = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 24 );
	m_spPrn4->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spPrn4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spPrn4->SetToolTip( _("Sattelite #4 ID#") );

	fgSizer108131->Add( m_spPrn4, 0, wxALL, 2 );

	m_staticText13451 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13451->Wrap( -1 );
	fgSizer108131->Add( m_staticText13451, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText1341132 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("SNR %"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341132->Wrap( -1 );
	fgSizer108131->Add( m_staticText1341132, 0, wxALL, 2 );

	m_spSNRQual = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 33, 45 );
	m_spSNRQual->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSNRQual->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSNRQual->SetToolTip( _("GPS RX Signal Quality") );

	fgSizer108131->Add( m_spSNRQual, 0, wxALL, 2 );

	m_staticText134231 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("0-100"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134231->Wrap( -1 );
	fgSizer108131->Add( m_staticText134231, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spSatinView = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("In View"), wxDefaultPosition, wxDefaultSize, 0 );
	m_spSatinView->Wrap( -1 );
	fgSizer108131->Add( m_spSatinView, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spSatsinV = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 24, 12 );
	m_spSatsinV->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSatsinV->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSatsinV->SetToolTip( _("# of GPS in view maximum of 12") );

	fgSizer108131->Add( m_spSatsinV, 0, wxALL, 2 );

	m_staticText13411311 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("# GPS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13411311->Wrap( -1 );
	fgSizer108131->Add( m_staticText13411311, 0, wxALL, 2 );

	m_statictextHDOP = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("HDOP"), wxDefaultPosition, wxDefaultSize, 0 );
	m_statictextHDOP->Wrap( -1 );
	fgSizer108131->Add( m_statictextHDOP, 0, wxALL, 2 );

	m_spSatHDOP = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 10 );
	m_spSatHDOP->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSatHDOP->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer108131->Add( m_spSatHDOP, 0, wxALL, 2 );

	m_staticText1342131 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("#"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1342131->Wrap( -1 );
	fgSizer108131->Add( m_staticText1342131, 0, wxALL, 2 );

	m_staticSatAB = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("ANT "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticSatAB->Wrap( -1 );
	fgSizer108131->Add( m_staticSatAB, 0, wxALL, 2 );

	m_spSatAnt = new wxSpinCtrlDouble( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -100, 100, 0, 0.1 );
	m_spSatAnt->SetDigits( 1 );
	m_spSatAnt->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSatAnt->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer108131->Add( m_spSatAnt, 0, wxALL, 2 );

	m_staticText13311121 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("A/B G"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13311121->Wrap( -1 );
	fgSizer108131->Add( m_staticText13311121, 0, wxALL, 2 );

	m_sSatGEO = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("GEO Sep"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sSatGEO->Wrap( -1 );
	fgSizer108131->Add( m_sSatGEO, 0, wxALL, 2 );

	m_spSatGEO = new wxSpinCtrlDouble( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -100, 100, 0, 0.1 );
	m_spSatGEO->SetDigits( 1 );
	m_spSatGEO->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSatGEO->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer108131->Add( m_spSatGEO, 0, wxALL, 2 );

	m_staticText13421112 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13421112->Wrap( -1 );
	m_staticText13421112->SetToolTip( _("V Diff From WGS84") );

	fgSizer108131->Add( m_staticText13421112, 0, wxALL, 2 );

	m_staticText1341111311 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("ANT Pos X"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341111311->Wrap( -1 );
	m_staticText1341111311->SetToolTip( _("Position of Antennae on Vessel ") );

	fgSizer108131->Add( m_staticText1341111311, 0, wxALL, 2 );

	m_spGPSAntBow = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 4 );
	m_spGPSAntBow->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spGPSAntBow->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spGPSAntBow->SetToolTip( _("GPS Ant Distance from Bow (M)") );

	fgSizer108131->Add( m_spGPSAntBow, 0, wxALL, 2 );

	m_staticText13421311 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13421311->Wrap( -1 );
	fgSizer108131->Add( m_staticText13421311, 0, wxALL, 2 );

	m_staticText13411113112 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("ANT Pos Y"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13411113112->Wrap( -1 );
	m_staticText13411113112->SetToolTip( _("Position of Antennae on Vessel ") );

	fgSizer108131->Add( m_staticText13411113112, 0, wxALL, 2 );

	m_spSatAntBeam = new wxSpinCtrl( sbSizer63->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 4 );
	m_spSatAntBeam->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSatAntBeam->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSatAntBeam->SetToolTip( _("Distance from P/S outer hull ") );

	fgSizer108131->Add( m_spSatAntBeam, 0, wxALL, 2 );

	m_staticText134213111 = new wxStaticText( sbSizer63->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134213111->Wrap( -1 );
	fgSizer108131->Add( m_staticText134213111, 0, wxALL, 2 );

	wxFlexGridSizer* fgSizer203;
	fgSizer203 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer203->SetFlexibleDirection( wxBOTH );
	fgSizer203->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer108131->Add( fgSizer203, 1, wxEXPAND, 5 );


	sbSizer63->Add( fgSizer108131, 1, wxEXPAND, 5 );


	fgSizer10813->Add( sbSizer63, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer2881;
	fgSizer2881 = new wxFlexGridSizer( 2, 5, 0, 0 );
	fgSizer2881->SetFlexibleDirection( wxBOTH );
	fgSizer2881->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer632;
	sbSizer632 = new wxStaticBoxSizer( new wxStaticBox( m_panelGPS, wxID_ANY, _("GPS Azmuth, Elevation and SNR") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer1081312;
	fgSizer1081312 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer1081312->SetFlexibleDirection( wxBOTH );
	fgSizer1081312->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText131411 = new wxStaticText( sbSizer632->GetStaticBox(), wxID_ANY, _("A/E/SNR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131411->Wrap( -1 );
	fgSizer1081312->Add( m_staticText131411, 0, wxALL, 2 );

	m_spAZ1 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 360, 66 );
	m_spAZ1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spAZ1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spAZ1->SetToolTip( _("Sattelite #1 ID#") );

	fgSizer1081312->Add( m_spAZ1, 0, wxALL, 2 );

	m_spELE1 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -90, 90, 4 );
	m_spELE1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spELE1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spELE1->SetToolTip( _("Sattelite #1 ID#") );

	fgSizer1081312->Add( m_spELE1, 0, wxALL, 2 );

	m_spSNR1 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 100, 58 );
	m_spSNR1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSNR1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSNR1->SetToolTip( _("Sattelite #1 ID#") );

	fgSizer1081312->Add( m_spSNR1, 0, wxALL, 2 );

	m_staticText131412 = new wxStaticText( sbSizer632->GetStaticBox(), wxID_ANY, _("A/E/SNR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131412->Wrap( -1 );
	fgSizer1081312->Add( m_staticText131412, 0, wxALL, 2 );

	m_spAZ2 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 360, 192 );
	m_spAZ2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spAZ2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spAZ2->SetToolTip( _("Sattelite #2 ID#") );

	fgSizer1081312->Add( m_spAZ2, 0, wxALL, 2 );

	m_spELE2 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -90, 90, 90 );
	m_spELE2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spELE2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spELE2->SetToolTip( _("Sattelite #1 ID#") );

	fgSizer1081312->Add( m_spELE2, 0, wxALL, 2 );

	m_spSNR2 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 100, 45 );
	m_spSNR2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSNR2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSNR2->SetToolTip( _("Sattelite #3 ID#") );

	fgSizer1081312->Add( m_spSNR2, 0, wxALL, 2 );

	m_staticText131413 = new wxStaticText( sbSizer632->GetStaticBox(), wxID_ANY, _("A/E/SNR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131413->Wrap( -1 );
	fgSizer1081312->Add( m_staticText131413, 0, wxALL, 2 );

	m_spAZ3 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 360, 36 );
	m_spAZ3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spAZ3->SetToolTip( _("Sattelite #2 ID#") );

	fgSizer1081312->Add( m_spAZ3, 0, wxALL, 2 );

	m_spELE3 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -90, 90, 24 );
	m_spELE3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spELE3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spELE3->SetToolTip( _("Sat #3 Elevation") );

	fgSizer1081312->Add( m_spELE3, 0, wxALL, 2 );

	m_spSNR3 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 100, 90 );
	m_spSNR3->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSNR3->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSNR3->SetToolTip( _("GPS RX Signal Quality") );

	fgSizer1081312->Add( m_spSNR3, 0, wxALL, 2 );

	m_staticText1314131 = new wxStaticText( sbSizer632->GetStaticBox(), wxID_ANY, _("A/E/SNR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1314131->Wrap( -1 );
	fgSizer1081312->Add( m_staticText1314131, 0, wxALL, 2 );

	m_spAZ4 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 360, 130 );
	m_spAZ4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spAZ4->SetToolTip( _("Sattelite #2 ID#") );

	fgSizer1081312->Add( m_spAZ4, 0, wxALL, 2 );

	m_spELE4 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -90, 90, 45 );
	m_spELE4->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spELE4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spELE4->SetToolTip( _("GPS #4 Elevation") );

	fgSizer1081312->Add( m_spELE4, 0, wxALL, 2 );

	m_spSNR4 = new wxSpinCtrl( sbSizer632->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 100, 32 );
	m_spSNR4->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spSNR4->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spSNR4->SetToolTip( _("GPS RX Signal Quality") );

	fgSizer1081312->Add( m_spSNR4, 0, wxALL, 2 );

	wxFlexGridSizer* fgSizer2032;
	fgSizer2032 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer2032->SetFlexibleDirection( wxBOTH );
	fgSizer2032->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer1081312->Add( fgSizer2032, 1, wxEXPAND, 5 );


	sbSizer632->Add( fgSizer1081312, 1, wxEXPAND, 5 );


	fgSizer2881->Add( sbSizer632, 1, wxEXPAND, 5 );


	fgSizer10813->Add( fgSizer2881, 1, wxEXPAND, 5 );


	m_panelGPS->SetSizer( fgSizer10813 );
	m_panelGPS->Layout();
	fgSizer10813->Fit( m_panelGPS );
	m_notebookSimulator->AddPage( m_panelGPS, _("GPS"), false );
	m_panelAIS = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelAIS->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelAIS->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelAIS->SetToolTip( _("AIS Settings") );

	wxStaticBoxSizer* sbSizer51;
	sbSizer51 = new wxStaticBoxSizer( new wxStaticBox( m_panelAIS, wxID_ANY, _("AIS Settings / Controls") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer10811312;
	fgSizer10811312 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer10811312->SetFlexibleDirection( wxBOTH );
	fgSizer10811312->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer61;
	sbSizer61 = new wxStaticBoxSizer( new wxStaticBox( sbSizer51->GetStaticBox(), wxID_ANY, wxEmptyString ), wxVERTICAL );

	wxFlexGridSizer* fgSizer197;
	fgSizer197 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer197->SetFlexibleDirection( wxBOTH );
	fgSizer197->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textCtrlAISMMSI = new wxTextCtrl( sbSizer61->GetStaticBox(), wxID_ANY, _("503012345"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlAISMMSI->SetToolTip( _("Nine Digit MMSI Number") );

	fgSizer197->Add( m_textCtrlAISMMSI, 0, wxALL, 2 );

	m_sMMSIAIS = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("MMSI (A)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_sMMSIAIS->Wrap( -1 );
	fgSizer197->Add( m_sMMSIAIS, 0, wxALL, 2 );

	m_textCtrlAISMO = new wxTextCtrl( sbSizer61->GetStaticBox(), wxID_ANY, _("1234567"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlAISMO->SetToolTip( _("Seven Digit IMO Number") );

	fgSizer197->Add( m_textCtrlAISMO, 0, wxALL, 2 );

	m_staticText7312 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("IMO (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7312->Wrap( -1 );
	m_staticText7312->SetToolTip( _("Every 6 minutes min") );

	fgSizer197->Add( m_staticText7312, 0, wxALL, 2 );

	m_textCtrlAISCallsign = new wxTextCtrl( sbSizer61->GetStaticBox(), wxID_ANY, _("VK4AGL"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textCtrlAISCallsign->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrlAISCallsign->SetMaxLength( 7 );
	}
	#else
	m_textCtrlAISCallsign->SetMaxLength( 7 );
	#endif
	m_textCtrlAISCallsign->SetToolTip( _("Enter Callsign here") );

	fgSizer197->Add( m_textCtrlAISCallsign, 0, wxALL, 2 );

	m_staticText7311 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("Callsign (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7311->Wrap( -1 );
	m_staticText7311->SetToolTip( _("every 6 minutes") );

	fgSizer197->Add( m_staticText7311, 0, wxALL, 2 );

	m_textCtrlAISVesselName = new wxTextCtrl( sbSizer61->GetStaticBox(), wxID_ANY, _("Lofty Perch"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textCtrlAISVesselName->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrlAISVesselName->SetMaxLength( 20 );
	}
	#else
	m_textCtrlAISVesselName->SetMaxLength( 20 );
	#endif
	m_textCtrlAISVesselName->SetToolTip( _("Enter vessel name here") );

	fgSizer197->Add( m_textCtrlAISVesselName, 0, wxALL, 2 );

	m_staticText73111 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("Vessel Name (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73111->Wrap( -1 );
	m_staticText73111->SetToolTip( _("Every 6 minutes min") );

	fgSizer197->Add( m_staticText73111, 0, wxALL, 2 );

	m_spAISShipType = new wxSpinCtrlDouble( sbSizer61->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 1, 99, 35, 1 );
	m_spAISShipType->SetDigits( 0 );
	m_spAISShipType->SetToolTip( _("Vessel Length in whole M") );

	fgSizer197->Add( m_spAISShipType, 0, wxALL, 5 );

	m_staticText731111 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("Type of Vessel (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText731111->Wrap( -1 );
	fgSizer197->Add( m_staticText731111, 0, wxALL, 2 );

	m_staticText7311111 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("Vessel Dimentions  L * B (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7311111->Wrap( -1 );
	fgSizer197->Add( m_staticText7311111, 0, wxALL, 2 );


	fgSizer197->Add( 0, 0, 1, wxEXPAND, 5 );

	m_spAISLength = new wxSpinCtrlDouble( sbSizer61->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 1, 1000, 12, 1 );
	m_spAISLength->SetDigits( 0 );
	m_spAISLength->SetToolTip( _("Vessel Length in whole M") );

	fgSizer197->Add( m_spAISLength, 0, wxALL, 2 );

	m_spinAISBeam = new wxSpinCtrlDouble( sbSizer61->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 1, 1000, 8, 1 );
	m_spinAISBeam->SetDigits( 0 );
	m_spinAISBeam->SetToolTip( _("Vessel Beam in whole M") );

	fgSizer197->Add( m_spinAISBeam, 0, wxALL, 2 );

	m_staticText73111111 = new wxStaticText( sbSizer61->GetStaticBox(), wxID_ANY, _("Draught (B)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73111111->Wrap( -1 );
	fgSizer197->Add( m_staticText73111111, 0, wxALL, 2 );

	m_spiAISDraught = new wxSpinCtrlDouble( sbSizer61->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0.1, 25.5, 1, 1 );
	m_spiAISDraught->SetDigits( 1 );
	m_spiAISDraught->SetToolTip( _("Vessel Draught in 0.0") );

	fgSizer197->Add( m_spiAISDraught, 0, wxALL, 2 );

	m_cbAISLat = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("Lattitude"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISLat->SetValue(true);
	m_cbAISLat->SetToolTip( _("Lattitude Accurate to within 0.0001 minutes") );

	fgSizer197->Add( m_cbAISLat, 0, wxALL, 2 );

	m_cbAISLong = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("Longitude"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISLong->SetValue(true);
	m_cbAISLong->SetToolTip( _("Longitude Accurate to within 0.0001 minutes") );

	fgSizer197->Add( m_cbAISLong, 0, wxALL, 2 );

	m_cbAISSOG = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("SOG"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISSOG->SetValue(true);
	m_cbAISSOG->SetToolTip( _("Speed Over Ground 0.1 knot to 102 knots") );

	fgSizer197->Add( m_cbAISSOG, 0, wxALL, 2 );

	m_cbAISHDT = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("HDT"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISHDT->SetValue(true);
	fgSizer197->Add( m_cbAISHDT, 0, wxALL, 2 );

	m_cbAISCOG = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("COG"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISCOG->SetValue(true);
	m_cbAISCOG->SetToolTip( _("Course Over Ground 0.1ºt") );

	fgSizer197->Add( m_cbAISCOG, 0, wxALL, 2 );


	fgSizer197->Add( 0, 0, 1, wxEXPAND, 5 );

	m_textCtrlAISROT = new wxTextCtrl( sbSizer61->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_CENTER|wxTE_READONLY|wxBORDER_SUNKEN );
	m_textCtrlAISROT->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrlAISROT->SetToolTip( _("Starboard Rudder Angle Value") );

	fgSizer197->Add( m_textCtrlAISROT, 0, wxALL, 2 );

	m_cbAISROT = new wxCheckBox( sbSizer61->GetStaticBox(), wxID_ANY, _("Rate of Turn"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISROT->SetValue(true);
	m_cbAISROT->SetToolTip( _("Rate of turn 0 to 720 degrees per minute") );

	fgSizer197->Add( m_cbAISROT, 0, wxALL, 2 );

	wxFlexGridSizer* fgSizer106;
	fgSizer106 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer106->AddGrowableCol( 0 );
	fgSizer106->AddGrowableCol( 1 );
	fgSizer106->SetFlexibleDirection( wxBOTH );
	fgSizer106->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer83;
	fgSizer83 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer83->AddGrowableCol( 0 );
	fgSizer83->SetFlexibleDirection( wxBOTH );
	fgSizer83->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer106->Add( fgSizer83, 1, wxEXPAND, 5 );


	fgSizer197->Add( fgSizer106, 1, wxEXPAND, 2 );


	sbSizer61->Add( fgSizer197, 1, 0, 2 );


	fgSizer10811312->Add( sbSizer61, 1, 0, 2 );

	wxFlexGridSizer* fgSizer199;
	fgSizer199 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer199->SetFlexibleDirection( wxBOTH );
	fgSizer199->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer64;
	sbSizer64 = new wxStaticBoxSizer( new wxStaticBox( sbSizer51->GetStaticBox(), wxID_ANY, _("Select Message Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer274;
	fgSizer274 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer274->SetFlexibleDirection( wxBOTH );
	fgSizer274->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbAISAIVDO = new wxCheckBox( sbSizer64->GetStaticBox(), wxID_ANY, _("AIVDO Reports from own vessel"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISAIVDO->SetValue(true);
	fgSizer274->Add( m_cbAISAIVDO, 0, wxALL, 2 );

	m_cbAISAIVDM = new wxCheckBox( sbSizer64->GetStaticBox(), wxID_ANY, _("AIVDM Rx from others"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISAIVDM->SetValue(true);
	fgSizer274->Add( m_cbAISAIVDM, 0, wxALL, 2 );

	m_cbTransmitAis1 = new wxCheckBox( sbSizer64->GetStaticBox(), wxID_ANY, _("Transmit AIS"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbTransmitAis1->SetValue(true);
	fgSizer274->Add( m_cbTransmitAis1, 0, wxALL, 2 );

	m_cbAisToFile1 = new wxCheckBox( sbSizer64->GetStaticBox(), wxID_ANY, _("Save AIS to File"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAisToFile1->SetValue(true);
	fgSizer274->Add( m_cbAisToFile1, 0, wxALL, 2 );


	sbSizer64->Add( fgSizer274, 1, wxEXPAND, 2 );


	fgSizer199->Add( sbSizer64, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( sbSizer51->GetStaticBox(), wxID_ANY, _("Class B ETA/Destination") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer60;
	fgSizer60 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer60->AddGrowableCol( 0 );
	fgSizer60->SetFlexibleDirection( wxBOTH );
	fgSizer60->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6->AddGrowableCol( 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer60->Add( fgSizer6, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1111;
	fgSizer1111 = new wxFlexGridSizer( 1, 2, 0, 0 );
	fgSizer1111->SetFlexibleDirection( wxBOTH );
	fgSizer1111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbAISETA = new wxCheckBox( sbSizer3->GetStaticBox(), wxID_ANY, _("ETA Voyage Dest"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAISETA->SetValue(true);
	m_cbAISETA->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_cbAISETA->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer1111->Add( m_cbAISETA, 0, wxALL, 2 );


	fgSizer1111->Add( 0, 0, 1, wxEXPAND, 2 );

	m_staticText28 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	m_staticText28->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText28->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer1111->Add( m_staticText28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_dpAISETADate = new wxDatePickerCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_ALLOWNONE|wxDP_DEFAULT );
	m_dpAISETADate->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_dpAISETADate->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	fgSizer1111->Add( m_dpAISETADate, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText302 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, _("Time * (24Hr)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText302->Wrap( -1 );
	m_staticText302->SetToolTip( _("Can be requested as a precision UTC time and date stamp") );

	fgSizer1111->Add( m_staticText302, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_tpAISETATime = new wxTimePickerCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	m_tpAISETATime->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_tpAISETATime->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_tpAISETATime->SetToolTip( _("Time converted to 24hr time ") );

	fgSizer1111->Add( m_tpAISETATime, 0, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 2 );

	m_textCtrlAISDestination = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, _("Bahamas"), wxDefaultPosition, wxDefaultSize, 0 );
	#ifdef __WXGTK__
	if ( !m_textCtrlAISDestination->HasFlag( wxTE_MULTILINE ) )
	{
	m_textCtrlAISDestination->SetMaxLength( 20 );
	}
	#else
	m_textCtrlAISDestination->SetMaxLength( 20 );
	#endif
	m_textCtrlAISDestination->SetToolTip( _("Enter destination here") );

	fgSizer1111->Add( m_textCtrlAISDestination, 0, wxALL, 2 );

	m_staticText731112 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, _("Destination"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText731112->Wrap( -1 );
	fgSizer1111->Add( m_staticText731112, 0, wxALL, 2 );


	fgSizer94->Add( fgSizer1111, 1, wxEXPAND, 2 );


	fgSizer60->Add( fgSizer94, 1, wxEXPAND, 2 );


	sbSizer3->Add( fgSizer60, 1, wxEXPAND, 2 );


	fgSizer199->Add( sbSizer3, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizerNavStatus;
	sbSizerNavStatus = new wxStaticBoxSizer( new wxStaticBox( sbSizer51->GetStaticBox(), wxID_ANY, _("Navigation Status Selection A/B") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer23212;
	fgSizer23212 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer23212->SetFlexibleDirection( wxBOTH );
	fgSizer23212->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbAISNavS = new wxChoicebook( sbSizerNavStatus->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxCHB_DEFAULT );
	m_panelAISNS0 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelAISNS0->SetToolTip( _("Select to change status timer ") );

	wxFlexGridSizer* fgSizer441;
	fgSizer441 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer441->SetFlexibleDirection( wxBOTH );
	fgSizer441->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText571 = new wxStaticText( m_panelAISNS0, wxID_ANY, _("AIS Timer"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText571->Wrap( -1 );
	fgSizer441->Add( m_staticText571, 0, wxALL, 5 );

	m_sXTEP1 = new wxSpinCtrlDouble( m_panelAISNS0, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 500, 10000, 1000, 1 );
	m_sXTEP1->SetDigits( 0 );
	m_sXTEP1->SetMaxSize( wxSize( 100,-1 ) );

	fgSizer441->Add( m_sXTEP1, 0, wxALL, 5 );

	m_staticText5611 = new wxStaticText( m_panelAISNS0, wxID_ANY, _("ms"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5611->Wrap( -1 );
	fgSizer441->Add( m_staticText5611, 0, wxALL|wxEXPAND, 5 );


	m_panelAISNS0->SetSizer( fgSizer441 );
	m_panelAISNS0->Layout();
	fgSizer441->Fit( m_panelAISNS0 );
	m_cbAISNavS->AddPage( m_panelAISNS0, _("0 Under way using engine(s)"), false );
	m_panelAISN1 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer5511;
	fgSizer5511 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5511->SetFlexibleDirection( wxBOTH );
	fgSizer5511->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbRoutePositionBearingMode1 = new wxChoicebook( m_panelAISN1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel911 = new wxPanel( m_cbRoutePositionBearingMode1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer191;
	fgSizer191 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer191->SetFlexibleDirection( wxBOTH );
	fgSizer191->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sAIStimerA = new wxSpinCtrl( m_panel911, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 1000, 10000, 3000 );
	m_sAIStimerA->SetToolTip( _("Ais Update Rate") );

	fgSizer191->Add( m_sAIStimerA, 0, wxALL, 5 );

	m_staticText741 = new wxStaticText( m_panel911, wxID_ANY, _("ms "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText741->Wrap( -1 );
	fgSizer191->Add( m_staticText741, 0, wxALL, 5 );

	m_staticText101 = new wxStaticText( m_panel911, wxID_ANY, _("Pos Accuracy"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText101->Wrap( -1 );
	fgSizer191->Add( m_staticText101, 0, wxALL, 5 );

	m_sRoutePositionBearingMaxError = new wxSpinCtrl( m_panel911, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 90, 36 );
	m_sRoutePositionBearingMaxError->SetToolTip( _("Location Precision ") );

	fgSizer191->Add( m_sRoutePositionBearingMaxError, 0, wxALL, 5 );


	m_panel911->SetSizer( fgSizer191 );
	m_panel911->Layout();
	fgSizer191->Fit( m_panel911 );
	m_cbRoutePositionBearingMode1->AddPage( m_panel911, _("Default"), true );
	m_panel101 = new wxPanel( m_cbRoutePositionBearingMode1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer201;
	fgSizer201 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer201->SetFlexibleDirection( wxBOTH );
	fgSizer201->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingTime1 = new wxSpinCtrl( m_panel101, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 2000, 0 );
	fgSizer201->Add( m_sRoutePositionBearingTime1, 0, wxALL, 5 );

	m_staticText301 = new wxStaticText( m_panel101, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText301->Wrap( -1 );
	fgSizer201->Add( m_staticText301, 0, wxALL, 5 );


	m_panel101->SetSizer( fgSizer201 );
	m_panel101->Layout();
	fgSizer201->Fit( m_panel101 );
	m_cbRoutePositionBearingMode1->AddPage( m_panel101, _("By Time"), false );
	fgSizer5511->Add( m_cbRoutePositionBearingMode1, 1, wxEXPAND | wxALL, 5 );


	m_panelAISN1->SetSizer( fgSizer5511 );
	m_panelAISN1->Layout();
	fgSizer5511->Fit( m_panelAISN1 );
	m_cbAISNavS->AddPage( m_panelAISN1, _("1 At Anchor"), true );
	m_panelAISN2 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer5501;
	fgSizer5501 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer5501->SetFlexibleDirection( wxBOTH );
	fgSizer5501->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN2->SetSizer( fgSizer5501 );
	m_panelAISN2->Layout();
	fgSizer5501->Fit( m_panelAISN2 );
	m_cbAISNavS->AddPage( m_panelAISN2, _("2 Not under command"), false );
	m_panelAISN3 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55011;
	fgSizer55011 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55011->SetFlexibleDirection( wxBOTH );
	fgSizer55011->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN3->SetSizer( fgSizer55011 );
	m_panelAISN3->Layout();
	fgSizer55011->Fit( m_panelAISN3 );
	m_cbAISNavS->AddPage( m_panelAISN3, _("3 Restricted manouverability"), false );
	m_panelAISN4 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55012;
	fgSizer55012 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55012->SetFlexibleDirection( wxBOTH );
	fgSizer55012->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN4->SetSizer( fgSizer55012 );
	m_panelAISN4->Layout();
	fgSizer55012->Fit( m_panelAISN4 );
	m_cbAISNavS->AddPage( m_panelAISN4, _("4 Constrained by her draught"), false );
	m_panelAISN5 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55111;
	fgSizer55111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55111->SetFlexibleDirection( wxBOTH );
	fgSizer55111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbRoutePositionBearingMode11 = new wxChoicebook( m_panelAISN5, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel9111 = new wxPanel( m_cbRoutePositionBearingMode11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1911;
	fgSizer1911 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1911->SetFlexibleDirection( wxBOTH );
	fgSizer1911->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sAIStimerA1 = new wxSpinCtrl( m_panel9111, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 1000, 10000, 3000 );
	fgSizer1911->Add( m_sAIStimerA1, 0, wxALL, 5 );

	m_staticText7411 = new wxStaticText( m_panel9111, wxID_ANY, _("ms "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText7411->Wrap( -1 );
	fgSizer1911->Add( m_staticText7411, 0, wxALL, 5 );

	m_staticText1011 = new wxStaticText( m_panel9111, wxID_ANY, _("Max Error"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1011->Wrap( -1 );
	fgSizer1911->Add( m_staticText1011, 0, wxALL, 5 );

	m_sRoutePositionBearingMaxError1 = new wxSpinCtrl( m_panel9111, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 90, 36 );
	fgSizer1911->Add( m_sRoutePositionBearingMaxError1, 0, wxALL, 5 );


	m_panel9111->SetSizer( fgSizer1911 );
	m_panel9111->Layout();
	fgSizer1911->Fit( m_panel9111 );
	m_cbRoutePositionBearingMode11->AddPage( m_panel9111, _("Default"), true );
	m_panel1011 = new wxPanel( m_cbRoutePositionBearingMode11, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer2011;
	fgSizer2011 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2011->SetFlexibleDirection( wxBOTH );
	fgSizer2011->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingTime11 = new wxSpinCtrl( m_panel1011, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 2000, 0 );
	fgSizer2011->Add( m_sRoutePositionBearingTime11, 0, wxALL, 5 );

	m_staticText3011 = new wxStaticText( m_panel1011, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3011->Wrap( -1 );
	fgSizer2011->Add( m_staticText3011, 0, wxALL, 5 );


	m_panel1011->SetSizer( fgSizer2011 );
	m_panel1011->Layout();
	fgSizer2011->Fit( m_panel1011 );
	m_cbRoutePositionBearingMode11->AddPage( m_panel1011, _("By Time"), false );
	fgSizer55111->Add( m_cbRoutePositionBearingMode11, 1, wxEXPAND | wxALL, 5 );


	m_panelAISN5->SetSizer( fgSizer55111 );
	m_panelAISN5->Layout();
	fgSizer55111->Fit( m_panelAISN5 );
	m_cbAISNavS->AddPage( m_panelAISN5, _("5 Moored"), false );
	m_panelAISN6 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer550113;
	fgSizer550113 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer550113->SetFlexibleDirection( wxBOTH );
	fgSizer550113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN6->SetSizer( fgSizer550113 );
	m_panelAISN6->Layout();
	fgSizer550113->Fit( m_panelAISN6 );
	m_cbAISNavS->AddPage( m_panelAISN6, _("6 Aground !"), false );
	m_panelAISN7 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55013;
	fgSizer55013 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55013->SetFlexibleDirection( wxBOTH );
	fgSizer55013->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN7->SetSizer( fgSizer55013 );
	m_panelAISN7->Layout();
	fgSizer55013->Fit( m_panelAISN7 );
	m_cbAISNavS->AddPage( m_panelAISN7, _("7 Engaged in Fishing"), false );
	m_panelAISN8 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55014;
	fgSizer55014 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55014->SetFlexibleDirection( wxBOTH );
	fgSizer55014->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN8->SetSizer( fgSizer55014 );
	m_panelAISN8->Layout();
	fgSizer55014->Fit( m_panelAISN8 );
	m_cbAISNavS->AddPage( m_panelAISN8, _("8 Under way sailing"), true );
	m_panelAISN9 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55015;
	fgSizer55015 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55015->SetFlexibleDirection( wxBOTH );
	fgSizer55015->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN9->SetSizer( fgSizer55015 );
	m_panelAISN9->Layout();
	fgSizer55015->Fit( m_panelAISN9 );
	m_cbAISNavS->AddPage( m_panelAISN9, _("9 reserverd HSC or Danger Goods"), false );
	m_panelAISN10 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55016;
	fgSizer55016 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55016->SetFlexibleDirection( wxBOTH );
	fgSizer55016->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN10->SetSizer( fgSizer55016 );
	m_panelAISN10->Layout();
	fgSizer55016->Fit( m_panelAISN10 );
	m_cbAISNavS->AddPage( m_panelAISN10, _("10 Reserved Dangerous Goods etc"), false );
	m_panelAISN11 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55017;
	fgSizer55017 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55017->SetFlexibleDirection( wxBOTH );
	fgSizer55017->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN11->SetSizer( fgSizer55017 );
	m_panelAISN11->Layout();
	fgSizer55017->Fit( m_panelAISN11 );
	m_cbAISNavS->AddPage( m_panelAISN11, _("11 Powered Tow Astern"), false );
	m_panelAISN12 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55018;
	fgSizer55018 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55018->SetFlexibleDirection( wxBOTH );
	fgSizer55018->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN12->SetSizer( fgSizer55018 );
	m_panelAISN12->Layout();
	fgSizer55018->Fit( m_panelAISN12 );
	m_cbAISNavS->AddPage( m_panelAISN12, _("12 Powered Push Tow "), false );
	m_panelAISN13 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer55019;
	fgSizer55019 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer55019->SetFlexibleDirection( wxBOTH );
	fgSizer55019->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN13->SetSizer( fgSizer55019 );
	m_panelAISN13->Layout();
	fgSizer55019->Fit( m_panelAISN13 );
	m_cbAISNavS->AddPage( m_panelAISN13, _("13 Reserverd"), false );
	m_panelAISN14 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer550110;
	fgSizer550110 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer550110->SetFlexibleDirection( wxBOTH );
	fgSizer550110->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN14->SetSizer( fgSizer550110 );
	m_panelAISN14->Layout();
	fgSizer550110->Fit( m_panelAISN14 );
	m_cbAISNavS->AddPage( m_panelAISN14, _("14 AIS-SART, MOBAIS, EPIRB-AIS"), false );
	m_panelAISN15 = new wxPanel( m_cbAISNavS, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer550111;
	fgSizer550111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer550111->SetFlexibleDirection( wxBOTH );
	fgSizer550111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panelAISN15->SetSizer( fgSizer550111 );
	m_panelAISN15->Layout();
	fgSizer550111->Fit( m_panelAISN15 );
	m_cbAISNavS->AddPage( m_panelAISN15, _("15 AIS_SART, MOB-AIS"), false );
	fgSizer23212->Add( m_cbAISNavS, 1, wxEXPAND | wxALL, 2 );

	m_cbAISNavSelect = new wxCheckBox( sbSizerNavStatus->GetStaticBox(), wxID_ANY, _("Navigation Status"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbAISNavSelect->SetValue(true);
	fgSizer23212->Add( m_cbAISNavSelect, 0, wxALL, 2 );

	wxFlexGridSizer* fgSizer198;
	fgSizer198 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer198->SetFlexibleDirection( wxBOTH );
	fgSizer198->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer23212->Add( fgSizer198, 1, wxEXPAND, 2 );


	fgSizer23212->Add( 0, 0, 1, wxEXPAND, 2 );


	sbSizerNavStatus->Add( fgSizer23212, 1, wxEXPAND, 2 );


	fgSizer199->Add( sbSizerNavStatus, 1, wxEXPAND, 2 );


	fgSizer10811312->Add( fgSizer199, 1, wxEXPAND, 2 );


	sbSizer51->Add( fgSizer10811312, 1, wxEXPAND, 2 );


	m_panelAIS->SetSizer( sbSizer51 );
	m_panelAIS->Layout();
	sbSizer51->Fit( m_panelAIS );
	m_notebookSimulator->AddPage( m_panelAIS, _("AIS"), false );
	m_panelXDR = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelXDR->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelXDR->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelXDR->SetToolTip( _("XDR Instrument Settings") );

	wxFlexGridSizer* fgSizer621;
	fgSizer621 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer621->AddGrowableCol( 0 );
	fgSizer621->AddGrowableRow( 0 );
	fgSizer621->SetFlexibleDirection( wxBOTH );
	fgSizer621->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer6611;
	sbSizer6611 = new wxStaticBoxSizer( new wxStaticBox( m_panelXDR, wxID_ANY, _("XDR/Instruments") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer641;
	fgSizer641 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer641->AddGrowableCol( 0 );
	fgSizer641->AddGrowableCol( 1 );
	fgSizer641->AddGrowableRow( 0 );
	fgSizer641->SetFlexibleDirection( wxBOTH );
	fgSizer641->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer6812;
	fgSizer6812 = new wxFlexGridSizer( 10, 3, 0, 0 );
	fgSizer6812->SetFlexibleDirection( wxBOTH );
	fgSizer6812->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1313 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Barometric"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1313->Wrap( -1 );
	fgSizer6812->Add( m_staticText1313, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spXDRBP = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 820, 1055, 1024.000000, 0.1 );
	m_spXDRBP->SetDigits( 1 );
	fgSizer6812->Add( m_spXDRBP, 0, wxALL, 2 );

	m_staticText134122 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("hPa \"B\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134122->Wrap( -1 );
	fgSizer6812->Add( m_staticText134122, 0, wxALL, 2 );

	m_staticText13122 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Air Temp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13122->Wrap( -1 );
	fgSizer6812->Add( m_staticText13122, 0, wxALL, 2 );

	m_spXDRAirTmp = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -25, 100, 21.5, 0.1 );
	m_spXDRAirTmp->SetDigits( 3 );
	fgSizer6812->Add( m_spXDRAirTmp, 0, wxALL, 2 );

	m_staticText13432 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"C\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13432->Wrap( -1 );
	fgSizer6812->Add( m_staticText13432, 0, wxALL, 2 );

	m_staticText1322 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Water Temp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1322->Wrap( -1 );
	fgSizer6812->Add( m_staticText1322, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spXDRWaterTmp = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -25, 100, 18.1, 0.1 );
	m_spXDRWaterTmp->SetDigits( 3 );
	fgSizer6812->Add( m_spXDRWaterTmp, 0, wxALL, 2 );

	m_staticText13414 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg '\"C\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13414->Wrap( -1 );
	fgSizer6812->Add( m_staticText13414, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText131111 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Pitch"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131111->Wrap( -1 );
	fgSizer6812->Add( m_staticText131111, 0, wxALL, 2 );

	m_spXDRPitch = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0, 0.1 );
	m_spXDRPitch->SetDigits( 3 );
	fgSizer6812->Add( m_spXDRPitch, 0, wxALL, 2 );

	m_staticText1344 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"A\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1344->Wrap( -1 );
	fgSizer6812->Add( m_staticText1344, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText134112 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Roll"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134112->Wrap( -1 );
	fgSizer6812->Add( m_staticText134112, 0, wxALL, 2 );

	m_spXDRRoll = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0, 0.1 );
	m_spXDRRoll->SetDigits( 3 );
	fgSizer6812->Add( m_spXDRRoll, 0, wxALL, 2 );

	m_staticText13422 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"A\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13422->Wrap( -1 );
	fgSizer6812->Add( m_staticText13422, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText1332 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Heel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1332->Wrap( -1 );
	fgSizer6812->Add( m_staticText1332, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spXDRHeel = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0, 0.1 );
	m_spXDRHeel->SetDigits( 3 );
	fgSizer6812->Add( m_spXDRHeel, 0, wxALL, 2 );

	m_staticText13311 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"A\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13311->Wrap( -1 );
	fgSizer6812->Add( m_staticText13311, 0, wxALL, 2 );

	m_staticText1341112 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Eng 1 Temp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341112->Wrap( -1 );
	fgSizer6812->Add( m_staticText1341112, 0, wxALL, 2 );

	m_spXDREng1T = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -25, 250, 21.5, 0.1 );
	m_spXDREng1T->SetDigits( 3 );
	fgSizer6812->Add( m_spXDREng1T, 0, wxALL, 2 );

	m_staticText134321 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"C\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134321->Wrap( -1 );
	fgSizer6812->Add( m_staticText134321, 0, wxALL, 2 );

	m_staticText13411112 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Eng 2 Temp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13411112->Wrap( -1 );
	fgSizer6812->Add( m_staticText13411112, 0, wxALL, 2 );

	m_spXDREng2T = new wxSpinCtrlDouble( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -25, 250, 21.5, 0.1 );
	m_spXDREng2T->SetDigits( 3 );
	fgSizer6812->Add( m_spXDREng2T, 0, wxALL, 2 );

	m_staticText1343211 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg \"C\""), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1343211->Wrap( -1 );
	fgSizer6812->Add( m_staticText1343211, 0, wxALL, 2 );

	m_staticText134111112 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("XDR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134111112->Wrap( -1 );
	fgSizer6812->Add( m_staticText134111112, 0, wxALL, 2 );

	m_sSpare2111 = new wxSpinCtrl( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 1 );
	fgSizer6812->Add( m_sSpare2111, 0, wxALL, 2 );

	m_staticText1342112 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1342112->Wrap( -1 );
	fgSizer6812->Add( m_staticText1342112, 0, wxALL, 2 );

	m_staticText1341111111 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("XDR"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341111111->Wrap( -1 );
	fgSizer6812->Add( m_staticText1341111111, 0, wxALL, 2 );

	m_sSpare2221 = new wxSpinCtrl( sbSizer6611->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 10 );
	fgSizer6812->Add( m_sSpare2221, 0, wxALL, 2 );

	m_staticText13421111 = new wxStaticText( sbSizer6611->GetStaticBox(), wxID_ANY, _("Deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13421111->Wrap( -1 );
	fgSizer6812->Add( m_staticText13421111, 0, wxALL, 2 );


	fgSizer641->Add( fgSizer6812, 1, wxEXPAND, 2 );


	sbSizer6611->Add( fgSizer641, 1, wxEXPAND, 2 );


	fgSizer621->Add( sbSizer6611, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer6532;
	sbSizer6532 = new wxStaticBoxSizer( new wxStaticBox( m_panelXDR, wxID_ANY, _("Selector") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer108112;
	fgSizer108112 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer108112->SetFlexibleDirection( wxBOTH );
	fgSizer108112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer6532->Add( fgSizer108112, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer231;
	fgSizer231 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer231->SetFlexibleDirection( wxBOTH );
	fgSizer231->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbXDRBAR = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Barometer"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRBAR->SetValue(true);
	fgSizer231->Add( m_cbXDRBAR, 0, wxALL, 2 );

	m_cbDetect61 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Detect    "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbDetect61, 0, wxALL, 2 );

	m_cbXDRATemp = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Air Temp"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRATemp->SetValue(true);
	fgSizer231->Add( m_cbXDRATemp, 0, wxALL, 2 );

	m_cbOptimize62 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize62, 0, wxALL, 2 );

	m_cbXDRWTemp = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Water Temp"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRWTemp->SetValue(true);
	fgSizer231->Add( m_cbXDRWTemp, 0, wxALL, 2 );

	m_cbOptimize112 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize112, 0, wxALL, 2 );

	m_cbXDRVPitch = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Vessel Pitch"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVPitch->SetValue(true);
	fgSizer231->Add( m_cbXDRVPitch, 0, wxALL, 2 );

	m_cbOptimize113 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize113, 0, wxALL, 2 );

	m_cbXDRVRoll = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Vessel Roll"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVRoll->SetValue(true);
	fgSizer231->Add( m_cbXDRVRoll, 0, wxALL, 2 );

	m_cbOptimize121 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize121, 0, wxALL, 2 );

	m_cbXDRVHeel = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Vessel Heel"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVHeel->SetValue(true);
	fgSizer231->Add( m_cbXDRVHeel, 0, wxALL, 2 );

	m_cbOptimize131 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize131, 0, wxALL, 2 );

	m_cbXDREngT1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Engine Temp1"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDREngT1->SetValue(true);
	fgSizer231->Add( m_cbXDREngT1, 0, wxALL, 2 );

	m_cbOptimize141 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize141, 0, wxALL, 2 );

	m_cbXDREngT2 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Engine Temp2"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDREngT2->SetValue(true);
	fgSizer231->Add( m_cbXDREngT2, 0, wxALL, 2 );

	m_cbOptimize181 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize181, 0, wxALL, 2 );

	m_cbTWS1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbTWS1->SetValue(true);
	fgSizer231->Add( m_cbTWS1, 0, wxALL, 2 );

	m_cbOptimize151 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize151, 0, wxALL, 2 );

	m_cbAWA1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAWA1->SetValue(true);
	fgSizer231->Add( m_cbAWA1, 0, wxALL, 2 );

	m_cbOptimize191 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize191, 0, wxALL, 2 );

	m_cbAWS1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAWS1->SetValue(true);
	fgSizer231->Add( m_cbAWS1, 0, wxALL, 2 );

	m_cbOptimize161 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize161, 0, wxALL, 2 );

	m_cbSpare3 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSpare3->SetValue(true);
	fgSizer231->Add( m_cbSpare3, 0, wxALL, 2 );

	m_cbOptimize171 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize171, 0, wxALL, 2 );

	m_cbSpare11 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSpare11->SetValue(true);
	fgSizer231->Add( m_cbSpare11, 0, wxALL, 2 );

	m_cbOptimize1101 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize1101, 0, wxALL, 2 );

	m_cbSpare21 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSpare21->SetValue(true);
	fgSizer231->Add( m_cbSpare21, 0, wxALL, 2 );

	m_cbOptimize1111 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize1111, 0, wxALL, 2 );


	sbSizer6532->Add( fgSizer231, 1, wxEXPAND, 5 );


	fgSizer621->Add( sbSizer6532, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer6111;
	sbSizer6111 = new wxStaticBoxSizer( new wxStaticBox( m_panelXDR, wxID_ANY, _("Message Types") ), wxVERTICAL );

	sbSizer6111->SetMinSize( wxSize( 300,-1 ) );
	wxFlexGridSizer* fgSizer6411;
	fgSizer6411 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6411->AddGrowableCol( 0 );
	fgSizer6411->AddGrowableCol( 1 );
	fgSizer6411->AddGrowableRow( 0 );
	fgSizer6411->SetFlexibleDirection( wxBOTH );
	fgSizer6411->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer6611;
	fgSizer6611 = new wxFlexGridSizer( 12, 1, 0, 0 );
	fgSizer6611->AddGrowableCol( 0 );
	fgSizer6611->AddGrowableRow( 0 );
	fgSizer6611->SetFlexibleDirection( wxBOTH );
	fgSizer6611->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbXDRMTW = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("MTW"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRMTW->SetValue(true);
	m_cbXDRMTW->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRMTW, 0, wxALL, 2 );

	m_cbXDRVLW = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("VLW"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVLW->SetValue(true);
	m_cbXDRVLW->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRVLW, 0, wxALL, 2 );

	m_cbXDRMWD = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("MWD"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRMWD->SetValue(true);
	fgSizer6611->Add( m_cbXDRMWD, 0, wxALL, 2 );

	m_cbXDRMWV = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("MWV"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRMWV->SetValue(true);
	m_cbXDRMWV->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRMWV, 0, wxALL, 2 );

	m_cbXDRRSA = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("RSA"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRRSA->SetValue(true);
	m_cbXDRRSA->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRRSA, 0, wxALL, 2 );

	m_cbXDRVHW = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("VHW"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVHW->SetValue(true);
	m_cbXDRVHW->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRVHW, 0, wxALL, 2 );

	m_cbXDRVTG = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("VTG"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVTG->SetValue(true);
	m_cbXDRVTG->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRVTG, 0, wxALL, 2 );

	m_cbXDRVWR = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("VWR"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVWR->SetValue(true);
	m_cbXDRVWR->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRVWR, 0, wxALL, 2 );

	m_cbXDRVWT = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("VLW"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVWT->SetValue(true);
	m_cbXDRVWT->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRVWT, 0, wxALL, 2 );

	m_cbXDRXDR = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("XDR"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRXDR->SetValue(true);
	m_cbXDRXDR->SetToolTip( _("$MTW") );

	fgSizer6611->Add( m_cbXDRXDR, 0, wxALL, 2 );

	wxStaticBoxSizer* sbSizer106;
	sbSizer106 = new wxStaticBoxSizer( new wxStaticBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("label") ), wxVERTICAL );

	sbSizer106->SetMinSize( wxSize( 30,300 ) );
	wxFlexGridSizer* fgSizer6711;
	fgSizer6711 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer6711->SetFlexibleDirection( wxBOTH );
	fgSizer6711->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer106->Add( fgSizer6711, 1, wxEXPAND, 5 );


	fgSizer6611->Add( sbSizer106, 1, wxEXPAND, 5 );


	fgSizer6411->Add( fgSizer6611, 1, wxEXPAND, 5 );


	sbSizer6111->Add( fgSizer6411, 1, wxEXPAND, 2 );


	fgSizer621->Add( sbSizer6111, 1, wxEXPAND, 2 );


	m_panelXDR->SetSizer( fgSizer621 );
	m_panelXDR->Layout();
	fgSizer621->Fit( m_panelXDR );
	m_notebookSimulator->AddPage( m_panelXDR, _("XDR"), false );
	m_panelAP = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelAP->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelAP->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelAP->SetToolTip( _("AUtoPilot Settings") );

	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->AddGrowableCol( 1 );
	fgSizer8->AddGrowableRow( 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	wxFlexGridSizer* fgSizer162;
	fgSizer162 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer162->AddGrowableCol( 0 );
	fgSizer162->SetFlexibleDirection( wxBOTH );
	fgSizer162->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panelAP, wxID_ANY, _("Mode") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer37;
	fgSizer37 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer37->AddGrowableCol( 0 );
	fgSizer37->AddGrowableRow( 0 );
	fgSizer37->SetFlexibleDirection( wxBOTH );
	fgSizer37->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbMode = new wxChoicebook( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxCHB_DEFAULT );
	m_panel5 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer44;
	fgSizer44 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer44->SetFlexibleDirection( wxBOTH );
	fgSizer44->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText57 = new wxStaticText( m_panel5, wxID_ANY, _("XTE Multiplier"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	fgSizer44->Add( m_staticText57, 0, wxALL, 2 );

	m_sXTEP = new wxSpinCtrlDouble( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10000, 0, 1 );
	m_sXTEP->SetDigits( 0 );
	m_sXTEP->SetMaxSize( wxSize( 100,-1 ) );

	fgSizer44->Add( m_sXTEP, 0, wxALL, 2 );

	m_staticText561 = new wxStaticText( m_panel5, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText561->Wrap( -1 );
	fgSizer44->Add( m_staticText561, 0, wxALL|wxEXPAND, 2 );


	m_panel5->SetSizer( fgSizer44 );
	m_panel5->Layout();
	fgSizer44->Fit( m_panel5 );
	m_cbMode->AddPage( m_panel5, _("Standard XTE"), false );
	m_panel8 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer50;
	fgSizer50 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer50->SetFlexibleDirection( wxBOTH );
	fgSizer50->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panel8->SetSizer( fgSizer50 );
	m_panel8->Layout();
	fgSizer50->Fit( m_panel8 );
	m_cbMode->AddPage( m_panel8, _("Waypoint Bearing"), false );
	m_panel92 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbRoutePositionBearingMode = new wxChoicebook( m_panel92, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel91 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer19;
	fgSizer19 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer19->SetFlexibleDirection( wxBOTH );
	fgSizer19->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingDistance = new wxSpinCtrl( m_panel91, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 1, 1000, 100 );
	fgSizer19->Add( m_sRoutePositionBearingDistance, 0, wxALL, 2 );

	m_staticText74 = new wxStaticText( m_panel91, wxID_ANY, _("Meters"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer19->Add( m_staticText74, 0, wxALL, 2 );

	m_staticText10 = new wxStaticText( m_panel91, wxID_ANY, _("Max Error Angle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer19->Add( m_staticText10, 0, wxALL, 2 );

	m_sRoutePositionBearingMaxAngle = new wxSpinCtrl( m_panel91, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 1, 90, 30 );
	fgSizer19->Add( m_sRoutePositionBearingMaxAngle, 0, wxALL, 2 );


	m_panel91->SetSizer( fgSizer19 );
	m_panel91->Layout();
	fgSizer19->Fit( m_panel91 );
	m_cbRoutePositionBearingMode->AddPage( m_panel91, _("By Distance"), true );
	m_panel10 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingTime = new wxSpinCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 2000, 0 );
	fgSizer20->Add( m_sRoutePositionBearingTime, 0, wxALL, 2 );

	m_staticText30 = new wxStaticText( m_panel10, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer20->Add( m_staticText30, 0, wxALL, 2 );


	m_panel10->SetSizer( fgSizer20 );
	m_panel10->Layout();
	fgSizer20->Fit( m_panel10 );
	m_cbRoutePositionBearingMode->AddPage( m_panel10, _("By Time"), false );
	fgSizer51->Add( m_cbRoutePositionBearingMode, 1, wxEXPAND | wxALL, 2 );


	m_panel92->SetSizer( fgSizer51 );
	m_panel92->Layout();
	fgSizer51->Fit( m_panel92 );
	m_cbMode->AddPage( m_panel92, _("Route Position Bearing"), true );
	fgSizer37->Add( m_cbMode, 1, wxEXPAND | wxALL, 2 );


	sbSizer7->Add( fgSizer37, 1, wxEXPAND, 2 );


	fgSizer162->Add( sbSizer7, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer91;
	sbSizer91 = new wxStaticBoxSizer( new wxStaticBox( m_panelAP, wxID_ANY, _("Boundary") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer18->AddGrowableCol( 1 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbBoundary = new wxCheckBox( sbSizer91->GetStaticBox(), wxID_ANY, _("GUID"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer18->Add( m_cbBoundary, 0, wxALL, 2 );

	m_tBoundary = new wxTextCtrl( sbSizer91->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( m_tBoundary, 0, wxALL|wxEXPAND, 2 );


	sbSizer91->Add( fgSizer18, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer56;
	fgSizer56 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer56->SetFlexibleDirection( wxBOTH );
	fgSizer56->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button22 = new wxButton( sbSizer91->GetStaticBox(), wxID_ANY, _("Generate"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer56->Add( m_button22, 0, wxALL, 2 );

	m_staticText71 = new wxStaticText( sbSizer91->GetStaticBox(), wxID_ANY, _("Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer56->Add( m_staticText71, 0, wxALL, 2 );

	m_sBoundaryWidth = new wxSpinCtrl( sbSizer91->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 1, 1000, 30 );
	fgSizer56->Add( m_sBoundaryWidth, 0, wxALL, 2 );

	m_staticText72 = new wxStaticText( sbSizer91->GetStaticBox(), wxID_ANY, _("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	fgSizer56->Add( m_staticText72, 0, wxALL, 2 );


	sbSizer91->Add( fgSizer56, 1, wxEXPAND, 2 );


	fgSizer162->Add( sbSizer91, 1, wxEXPAND, 2 );


	fgSizer8->Add( fgSizer162, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer181;
	fgSizer181 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer181->AddGrowableCol( 0 );
	fgSizer181->SetFlexibleDirection( wxBOTH );
	fgSizer181->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( m_panelAP, wxID_ANY, _("Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbConfirmBearingChange = new wxCheckBox( sbSizer10->GetStaticBox(), wxID_ANY, _("Confirm Bearing Change\nOn Waypoint Arrival"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer45->Add( m_cbConfirmBearingChange, 0, wxALL, 2 );

	m_cbInterceptRoute = new wxCheckBox( sbSizer10->GetStaticBox(), wxID_ANY, _("Intercept Route\nOn Current Course"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer45->Add( m_cbInterceptRoute, 0, wxALL, 2 );

	wxString m_cComputationChoices[] = { _("Great Circle (Shortest Distance)"), _("Mercator (Constant Bearings)") };
	int m_cComputationNChoices = sizeof( m_cComputationChoices ) / sizeof( wxString );
	m_cComputation = new wxChoice( sbSizer10->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cComputationNChoices, m_cComputationChoices, 0 );
	m_cComputation->SetSelection( 0 );
	fgSizer45->Add( m_cComputation, 0, wxALL, 2 );


	sbSizer10->Add( fgSizer45, 1, wxEXPAND, 2 );


	fgSizer181->Add( sbSizer10, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( m_panelAP, wxID_ANY, _("Active Route Windows") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16->AddGrowableCol( 1 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxString m_cbActiveRouteItems0Choices[] = { _("XTE"), _("BRG"), _("VMG"), _("RNG"), _("TTG"), _("Route ETA"), _("Route RNG"), _("Route TTG"), _("Highway"), _("Deactivate") };
	int m_cbActiveRouteItems0NChoices = sizeof( m_cbActiveRouteItems0Choices ) / sizeof( wxString );
	m_cbActiveRouteItems0 = new wxCheckListBox( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), m_cbActiveRouteItems0NChoices, m_cbActiveRouteItems0Choices, 0 );
	fgSizer16->Add( m_cbActiveRouteItems0, 0, wxALL|wxEXPAND, 2 );

	wxString m_cbActiveRouteItems1Choices[] = { _("XTE"), _("BRG"), _("VMG"), _("RNG"), _("TTG"), _("Route ETA"), _("Route RNG"), _("Route TTG"), _("Highway"), _("Deactivate") };
	int m_cbActiveRouteItems1NChoices = sizeof( m_cbActiveRouteItems1Choices ) / sizeof( wxString );
	m_cbActiveRouteItems1 = new wxCheckListBox( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), m_cbActiveRouteItems1NChoices, m_cbActiveRouteItems1Choices, 0 );
	fgSizer16->Add( m_cbActiveRouteItems1, 0, wxALL, 2 );


	sbSizer5->Add( fgSizer16, 1, wxEXPAND, 2 );


	fgSizer181->Add( sbSizer5, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->AddGrowableCol( 1 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button4 = new wxButton( m_panelAP, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( m_button4, 0, wxALL, 2 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( m_panelAP, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( m_panelAP, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	fgSizer21->Add( m_sdbSizer1, 1, wxALIGN_RIGHT|wxEXPAND, 2 );


	fgSizer181->Add( fgSizer21, 1, wxEXPAND, 2 );


	fgSizer8->Add( fgSizer181, 1, wxEXPAND, 2 );


	m_panelAP->SetSizer( fgSizer8 );
	m_panelAP->Layout();
	fgSizer8->Fit( m_panelAP );
	m_notebookSimulator->AddPage( m_panelAP, _("AutoPilot"), false );
	m_panelTest = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelTest->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelTest->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelTest->SetToolTip( _("Fixed Value Settings") );

	wxFlexGridSizer* fgSizer491;
	fgSizer491 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer491->SetFlexibleDirection( wxBOTH );
	fgSizer491->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer452;
	sbSizer452 = new wxStaticBoxSizer( new wxStaticBox( m_panelTest, wxID_ANY, _("Static Parameter") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer489;
	fgSizer489 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer489->SetFlexibleDirection( wxBOTH );
	fgSizer489->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTextHDT = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("HDT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextHDT->Wrap( -1 );
	m_staticTextHDT->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextHDT->SetToolTip( _("Vessel Heading True") );

	fgSizer489->Add( m_staticTextHDT, 0, wxALL, 2 );

	m_spS_HDT = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spS_HDT->SetDigits( 1 );
	m_spS_HDT->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_HDT->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_HDT->SetToolTip( _("To adjust HDT 0-359.9º t (true)") );

	fgSizer489->Add( m_spS_HDT, 0, wxALL, 2 );

	m_staticText4201 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg true"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4201->Wrap( -1 );
	m_staticText4201->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText4201, 0, wxALL, 2 );

	m_staticTextSTW = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("STW"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSTW->Wrap( -1 );
	m_staticTextSTW->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextSTW->SetToolTip( _("Vessel Speed \"Through\" (On) Water") );

	fgSizer489->Add( m_staticTextSTW, 0, wxALL, 2 );

	m_spS_STW = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -50, 250, 0.000000, 0.1 );
	m_spS_STW->SetDigits( 1 );
	m_spS_STW->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_STW->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_STW->SetToolTip( _("To adjust STW -50/250 Kts") );

	fgSizer489->Add( m_spS_STW, 0, wxALL, 2 );

	m_staticText43431 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Kts (Speed)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43431->Wrap( -1 );
	m_staticText43431->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText43431, 0, wxALL, 2 );

	m_staticTCOG = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("COG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTCOG->Wrap( -1 );
	m_staticTCOG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTCOG->SetToolTip( _("Vessel Course Over Ground") );

	fgSizer489->Add( m_staticTCOG, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spS_COG = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spS_COG->SetDigits( 1 );
	m_spS_COG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_COG->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_COG->SetToolTip( _("To adjust COG 0-360ºt (true)") );

	fgSizer489->Add( m_spS_COG, 0, wxALL, 2 );

	m_staticText43412 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg true"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43412->Wrap( -1 );
	m_staticText43412->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText43412, 0, wxALL, 2 );

	m_staticTHDM = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("HDM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTHDM->Wrap( -1 );
	m_staticTHDM->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTHDM->SetToolTip( _("Vessel Heading Magnetic") );

	fgSizer489->Add( m_staticTHDM, 0, wxALL, 2 );

	m_spS_HDM = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spS_HDM->SetDigits( 3 );
	m_spS_HDM->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_HDM->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_HDM->SetToolTip( _("To adjust HDM 0-360ºMag") );

	fgSizer489->Add( m_spS_HDM, 0, wxALL, 2 );

	m_staticText43151 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg MAG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43151->Wrap( -1 );
	m_staticText43151->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText43151, 0, wxALL, 2 );

	m_staticTHDG = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("HDG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTHDG->Wrap( -1 );
	m_staticTHDG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTHDG->SetToolTip( _("Heading Magnetic & Variation ?") );

	fgSizer489->Add( m_staticTHDG, 0, wxALL, 2 );

	m_spS_HDG = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -25, 25, 10.749583, 0.1 );
	m_spS_HDG->SetDigits( 6 );
	m_spS_HDG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_HDG->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_HDG->SetToolTip( _("To adjust HDG ± E/W Mag Varº") );

	fgSizer489->Add( m_spS_HDG, 0, wxALL, 2 );

	m_staticText434211 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("MagVar ± E/W"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText434211->Wrap( -1 );
	m_staticText434211->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText434211, 0, wxALL, 2 );

	m_staticTextSOG = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("SOG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextSOG->Wrap( -1 );
	m_staticTextSOG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextSOG->SetToolTip( _("Vessel Speed Over Ground") );

	fgSizer489->Add( m_staticTextSOG, 0, wxALL, 2 );

	m_spS_SOG = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -50, 250, 0.000000, 0.1 );
	m_spS_SOG->SetDigits( 1 );
	m_spS_SOG->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_SOG->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_SOG->SetToolTip( _("To adjust SOG -50/250 Kts") );

	fgSizer489->Add( m_spS_SOG, 0, wxALL, 2 );

	m_staticText41343 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Kts (Speed)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41343->Wrap( -1 );
	m_staticText41343->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText41343, 0, wxALL, 2 );

	m_staticText4132 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("SET"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4132->Wrap( -1 );
	m_staticText4132->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText4132->SetToolTip( _("Set the bearing (direction) the surface current is heading towards") );

	fgSizer489->Add( m_staticText4132, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spCurSet = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxT("144"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spCurSet->SetDigits( 1 );
	m_spCurSet->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spCurSet->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spCurSet->SetToolTip( _("To adjust Set (Drift bearing) 0-360 ºtrue") );

	fgSizer489->Add( m_spCurSet, 0, wxALL, 2 );

	m_staticText41341 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg true"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41341->Wrap( -1 );
	m_staticText41341->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText41341, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticTextDrift = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("DRIFT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextDrift->Wrap( -1 );
	m_staticTextDrift->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticTextDrift->SetToolTip( _("Speed of surface current - how fast you will drift without sail or engines in the direction the current is heading") );

	fgSizer489->Add( m_staticTextDrift, 0, wxALL, 2 );

	m_spCurDrift = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 38, 0.500000, 0.1 );
	m_spCurDrift->SetDigits( 2 );
	m_spCurDrift->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spCurDrift->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spCurDrift->SetToolTip( _("To adjust Drift Speed -38/+38 Kts") );

	fgSizer489->Add( m_spCurDrift, 0, wxALL, 2 );

	m_staticText43434 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Kts (Speed)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43434->Wrap( -1 );
	m_staticText43434->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText43434, 0, wxALL, 2 );

	m_staticText43411 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("TWA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43411->Wrap( -1 );
	m_staticText43411->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText43411->SetToolTip( _("True Wind Angle") );

	fgSizer489->Add( m_staticText43411, 0, wxALL, 2 );

	m_spS_TWA = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spS_TWA->SetDigits( 1 );
	m_spS_TWA->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_TWA->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_TWA->SetToolTip( _("To adjust True Wind Angle 0-360º") );

	fgSizer489->Add( m_spS_TWA, 0, wxALL, 2 );

	m_staticText4342 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4342->Wrap( -1 );
	m_staticText4342->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText4342, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText4133 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("TWS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4133->Wrap( -1 );
	m_staticText4133->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText4133->SetToolTip( _("True Wind Speed") );

	fgSizer489->Add( m_staticText4133, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_spS_TWS = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 230, 0.000000, 0.1 );
	m_spS_TWS->SetDigits( 2 );
	m_spS_TWS->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_TWS->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_TWS->SetToolTip( _("To adjust True Wind Speed 0-230 Kts") );

	fgSizer489->Add( m_spS_TWS, 0, wxALL, 2 );

	m_staticText4134 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Kts (Speed)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4134->Wrap( -1 );
	m_staticText4134->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText4134, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_staticText134111 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("AWA"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134111->Wrap( -1 );
	m_staticText134111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText134111->SetToolTip( _("Apparent Wind Angle") );

	fgSizer489->Add( m_staticText134111, 0, wxALL, 2 );

	m_spiS_AWA = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0.000000, 0.1 );
	m_spiS_AWA->SetDigits( 1 );
	m_spiS_AWA->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spiS_AWA->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spiS_AWA->SetToolTip( _("To adjust Apparent Wind Angle (Relative) -180 / +180") );

	fgSizer489->Add( m_spiS_AWA, 0, wxALL, 2 );

	m_staticText413421 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Deg App"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText413421->Wrap( -1 );
	m_staticText413421->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText413421, 0, wxALL, 2 );

	m_staticText41341111 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("AWS"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41341111->Wrap( -1 );
	m_staticText41341111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_staticText41341111->SetToolTip( _("Apparent Wind Speed") );

	fgSizer489->Add( m_staticText41341111, 0, wxALL, 2 );

	m_spS_AWS = new wxSpinCtrlDouble( sbSizer452->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -230, 230, 0.000000, 0.1 );
	m_spS_AWS->SetDigits( 2 );
	m_spS_AWS->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_spS_AWS->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_spS_AWS->SetToolTip( _("To adjust Apparent Wind Speed") );

	fgSizer489->Add( m_spS_AWS, 0, wxALL, 2 );

	m_staticText4133111 = new wxStaticText( sbSizer452->GetStaticBox(), wxID_ANY, _("Kts App"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4133111->Wrap( -1 );
	m_staticText4133111->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );

	fgSizer489->Add( m_staticText4133111, 0, wxALL, 2 );


	sbSizer452->Add( fgSizer489, 1, wxEXPAND, 2 );


	fgSizer491->Add( sbSizer452, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer453;
	sbSizer453 = new wxStaticBoxSizer( new wxStaticBox( m_panelTest, wxID_ANY, _("Menu Item Not Impl yet Selector") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer4811;
	fgSizer4811 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer4811->SetFlexibleDirection( wxBOTH );
	fgSizer4811->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer453->Add( fgSizer4811, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer4823;
	fgSizer4823 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer4823->SetFlexibleDirection( wxBOTH );
	fgSizer4823->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbSHDT = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Heading True"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSHDT->SetValue(true);
	m_cbSHDT->SetToolTip( _("Tick to select static value ") );

	fgSizer4823->Add( m_cbSHDT, 0, wxALL, 2 );

	m_cbSpare = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Depth Below Txd"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSpare->SetValue(true);
	fgSizer4823->Add( m_cbSpare, 0, wxALL, 2 );

	m_cbSSTW = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Speed Through Water"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSSTW->SetValue(true);
	m_cbSSTW->SetToolTip( _("Tick to select  speed through water") );

	fgSizer4823->Add( m_cbSSTW, 0, wxALL, 2 );

	m_cbSpare2 = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Depth Below Wl"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSpare2->SetValue(true);
	fgSizer4823->Add( m_cbSpare2, 0, wxALL, 2 );

	m_cbSCOG = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Course Over Ground"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSCOG->SetValue(true);
	fgSizer4823->Add( m_cbSCOG, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSHDM = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Heading Magnetic"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSHDM->SetValue(true);
	fgSizer4823->Add( m_cbSHDM, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSHDG = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Magnetic Variation"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSHDG->SetValue(true);
	fgSizer4823->Add( m_cbSHDG, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSSOG = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Speed Over Ground"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSSOG->SetValue(true);
	fgSizer4823->Add( m_cbSSOG, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSSet = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Set current direction"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSSet->SetValue(true);
	fgSizer4823->Add( m_cbSSet, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSDrift = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Drift (current speed)"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSDrift->SetValue(true);
	fgSizer4823->Add( m_cbSDrift, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSTWA = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("True Wind Angle"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSTWA->SetValue(true);
	fgSizer4823->Add( m_cbSTWA, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSTWS = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("True Wind Speed"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSTWS->SetValue(true);
	fgSizer4823->Add( m_cbSTWS, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 5 );

	m_cbSAWA = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Apparent Wind Angle"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSAWA->SetValue(true);
	fgSizer4823->Add( m_cbSAWA, 0, wxALL, 2 );


	fgSizer4823->Add( 0, 0, 1, wxEXPAND, 2 );

	m_cbSAWS = new wxCheckBox( sbSizer453->GetStaticBox(), wxID_ANY, _("Apparent Wind Speed"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbSAWS->SetValue(true);
	fgSizer4823->Add( m_cbSAWS, 0, wxALL, 2 );


	sbSizer453->Add( fgSizer4823, 1, wxEXPAND, 2 );


	fgSizer491->Add( sbSizer453, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer454;
	sbSizer454 = new wxStaticBoxSizer( new wxStaticBox( m_panelTest, wxID_ANY, _("Static parameter") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer48111;
	fgSizer48111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer48111->SetFlexibleDirection( wxBOTH );
	fgSizer48111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticTDBT = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Air"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDBT->Wrap( -1 );
	m_staticTDBT->SetToolTip( _("Depth Below Trasducer (Sounder)") );

	fgSizer48111->Add( m_staticTDBT, 0, wxALL, 2 );

	m_spS_AirT1 = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -38, 55, 24.4, 0.1 );
	m_spS_AirT1->SetDigits( 1 );
	m_spS_AirT1->SetToolTip( _("Set Air Temp") );

	fgSizer48111->Add( m_spS_AirT1, 0, wxALL, 2 );

	m_staticText13431121 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Temp C"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText13431121->Wrap( -1 );
	fgSizer48111->Add( m_staticText13431121, 0, wxALL, 2 );

	m_staticTDBT2 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Water"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDBT2->Wrap( -1 );
	m_staticTDBT2->SetToolTip( _("Depth Below Trasducer (Sounder)") );

	fgSizer48111->Add( m_staticTDBT2, 0, wxALL, 2 );

	m_spS_WaterT1 = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, -38, 55, 18.1, 0.1 );
	m_spS_WaterT1->SetDigits( 1 );
	m_spS_WaterT1->SetToolTip( _("Set Water Temp") );

	fgSizer48111->Add( m_spS_WaterT1, 0, wxALL, 2 );

	m_staticText134311211 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Temp C"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134311211->Wrap( -1 );
	fgSizer48111->Add( m_staticText134311211, 0, wxALL, 2 );

	m_staticTDBT1 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("DBT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDBT1->Wrap( -1 );
	m_staticTDBT1->SetToolTip( _("Depth Below Trasducer (Sounder)") );

	fgSizer48111->Add( m_staticTDBT1, 0, wxALL, 2 );

	m_spDBT = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 13000, 2, 0.1 );
	m_spDBT->SetDigits( 1 );
	m_spDBT->SetToolTip( _("Set Depth Below Transducer ") );

	fgSizer48111->Add( m_spDBT, 0, wxALL, 2 );

	m_staticText1343112 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("ft"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1343112->Wrap( -1 );
	fgSizer48111->Add( m_staticText1343112, 0, wxALL, 2 );

	m_staticTDPT = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("DPT"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDPT->Wrap( -1 );
	m_staticTDPT->SetToolTip( _("Depth of Water from Surface") );

	fgSizer48111->Add( m_staticTDPT, 0, wxALL, 2 );

	m_spDPT = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 90, 3, 0.1 );
	m_spDPT->SetDigits( 1 );
	m_spDPT->SetToolTip( _("Set Water Depth, usually it is really the depth Below Transducer + Fixed Distance from Transduce to waterline") );

	fgSizer48111->Add( m_spDPT, 0, wxALL, 2 );

	m_staticText431111 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("m (SI)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText431111->Wrap( -1 );
	fgSizer48111->Add( m_staticText431111, 0, wxALL, 2 );

	m_staticTDPT1 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Baro"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDPT1->Wrap( -1 );
	m_staticTDPT1->SetToolTip( _("Depth of Water from Surface") );

	fgSizer48111->Add( m_staticTDPT1, 0, wxALL, 2 );

	m_spBarometer = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 660, 1200, 1024, 0.1 );
	m_spBarometer->SetDigits( 1 );
	m_spBarometer->SetToolTip( _("Set Water Depth, usually it is really the depth Below Transducer + Fixed Distance from Transduce to waterline") );

	fgSizer48111->Add( m_spBarometer, 0, wxALL, 2 );

	m_staticText4311111 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("mBa"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4311111->Wrap( -1 );
	fgSizer48111->Add( m_staticText4311111, 0, wxALL, 2 );

	m_staticTDPT11 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Pitch"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDPT11->Wrap( -1 );
	m_staticTDPT11->SetToolTip( _("Depth of Water from Surface") );

	fgSizer48111->Add( m_staticTDPT11, 0, wxALL, 2 );

	m_spPitch = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0.100000, 0.1 );
	m_spPitch->SetDigits( 1 );
	m_spPitch->SetToolTip( _("Set Pitch + is nose up ") );

	fgSizer48111->Add( m_spPitch, 0, wxALL, 2 );

	m_staticText43421 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText43421->Wrap( -1 );
	fgSizer48111->Add( m_staticText43421, 0, wxALL, 2 );

	m_staticTDPT111 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Heel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTDPT111->Wrap( -1 );
	m_staticTDPT111->SetToolTip( _("Depth of Water from Surface") );

	fgSizer48111->Add( m_staticTDPT111, 0, wxALL, 2 );

	m_spHeel = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, -180, 180, 0, 0.1 );
	m_spHeel->SetDigits( 1 );
	m_spHeel->SetToolTip( _("Set Pitch + is nose up ") );

	fgSizer48111->Add( m_spHeel, 0, wxALL, 2 );

	m_staticText434212 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Deg"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText434212->Wrap( -1 );
	fgSizer48111->Add( m_staticText434212, 0, wxALL, 2 );

	m_staticText41321 = new wxStaticText( sbSizer454->GetStaticBox(), wxID_ANY, _("Tmp"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText41321->Wrap( -1 );
	m_staticText41321->SetToolTip( _("Set the bearing (direction) the surface current is heading towards") );

	fgSizer48111->Add( m_staticText41321, 0, wxALL, 2 );

	m_spCurSettmp = new wxSpinCtrlDouble( sbSizer454->GetStaticBox(), wxID_ANY, wxT("144"), wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS|wxSP_WRAP, 0, 359.9, 0.000000, 0.1 );
	m_spCurSettmp->SetDigits( 1 );
	m_spCurSettmp->SetToolTip( _("To adjust Set (Drift bearing) 0-360 ºtrue") );

	fgSizer48111->Add( m_spCurSettmp, 0, wxALL, 2 );


	sbSizer454->Add( fgSizer48111, 1, wxEXPAND, 2 );


	fgSizer491->Add( sbSizer454, 1, wxEXPAND, 2 );


	m_panelTest->SetSizer( fgSizer491 );
	m_panelTest->Layout();
	fgSizer491->Fit( m_panelTest );
	m_notebookSimulator->AddPage( m_panelTest, _("Static"), false );
	m_panelConfigure = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelConfigure->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelConfigure->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelConfigure->SetToolTip( _("Any Other Config") );

	wxStaticBoxSizer* sbSizer511;
	sbSizer511 = new wxStaticBoxSizer( new wxStaticBox( m_panelConfigure, wxID_ANY, _("Selector") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer511;
	fgSizer511 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer511->SetFlexibleDirection( wxBOTH );
	fgSizer511->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer511->Add( fgSizer511, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer521;
	fgSizer521 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer521->SetFlexibleDirection( wxBOTH );
	fgSizer521->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbHDT511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Heading True"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbHDT511->SetValue(true);
	m_cbHDT511->SetToolTip( _("HDT") );

	fgSizer521->Add( m_cbHDT511, 0, wxALL, 2 );

	m_cbDetect521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbDetect521, 0, wxALL, 2 );

	m_cbCOG511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Course Over Ground"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbCOG511->SetValue(true);
	m_cbCOG511->SetToolTip( _("COG") );

	fgSizer521->Add( m_cbCOG511, 0, wxALL, 2 );

	m_cbOptimize531 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize531, 0, wxALL, 2 );

	m_cbHDM511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Heading Magnetic"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbHDM511->SetValue(true);
	m_cbHDM511->SetToolTip( _("HDM") );

	fgSizer521->Add( m_cbHDM511, 0, wxALL, 2 );

	m_cbOptimize51141 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51141, 0, wxALL, 2 );

	m_cbHDG511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Magnetic Variation"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbHDG511->SetValue(true);
	fgSizer521->Add( m_cbHDG511, 0, wxALL, 2 );

	m_cbOptimize51151 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51151, 0, wxALL, 2 );

	m_cbSOG511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Speed Over Ground"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSOG511->SetValue(true);
	fgSizer521->Add( m_cbSOG511, 0, wxALL, 2 );

	m_cbOptimize51221 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51221, 0, wxALL, 2 );

	m_cbSet511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Set"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSet511->SetValue(true);
	m_cbSet511->SetToolTip( _("Surface Current Bearing t ") );

	fgSizer521->Add( m_cbSet511, 0, wxALL, 2 );

	m_cbOptimize51321 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51321, 0, wxALL, 2 );

	m_cbDrift511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Drift"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbDrift511->SetValue(true);
	m_cbDrift511->SetToolTip( _("Surface Current Speed Kts") );

	fgSizer521->Add( m_cbDrift511, 0, wxALL, 2 );

	m_cbOptimize5141 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize5141, 0, wxALL, 2 );

	m_cbTWA511 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("True Wind Angle"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbTWA511->SetValue(true);
	m_cbTWA511->SetToolTip( _("TWA") );

	fgSizer521->Add( m_cbTWA511, 0, wxALL, 2 );

	m_cbOptimize51821 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51821, 0, wxALL, 2 );

	m_cbTWS521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("True Wind Speed"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbTWS521->SetValue(true);
	m_cbTWS521->SetToolTip( _("TWS") );

	fgSizer521->Add( m_cbTWS521, 0, wxALL, 2 );

	m_cbOptimize51521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51521, 0, wxALL, 2 );

	m_cbAWA521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Apparent Wind Angle"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAWA521->SetValue(true);
	m_cbAWA521->SetToolTip( _("AWA") );

	fgSizer521->Add( m_cbAWA521, 0, wxALL, 2 );

	m_cbOptimize51921 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51921, 0, wxALL, 2 );

	m_cbAWS521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Apparent Wind Speed"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAWS521->SetValue(true);
	m_cbAWS521->SetToolTip( _("AWS") );

	fgSizer521->Add( m_cbAWS521, 0, wxALL, 2 );

	m_cbOptimize51621 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51621, 0, wxALL, 2 );

	m_cbSpare541 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Depth Below Txd"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSpare541->SetValue(true);
	m_cbSpare541->SetToolTip( _("Depth below Transducer") );

	fgSizer521->Add( m_cbSpare541, 0, wxALL, 2 );

	m_cbOptimize51721 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize51721, 0, wxALL, 2 );

	m_cbSpare521 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Depth Below Surface"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbSpare521->SetValue(true);
	m_cbSpare521->SetToolTip( _("Depth from waterline") );

	fgSizer521->Add( m_cbSpare521, 0, wxALL, 2 );

	m_cbOptimize511021 = new wxCheckBox( sbSizer511->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer521->Add( m_cbOptimize511021, 0, wxALL, 2 );

	m_sdbSizer51 = new wxStdDialogButtonSizer();
	m_sdbSizer51OK = new wxButton( sbSizer511->GetStaticBox(), wxID_OK );
	m_sdbSizer51->AddButton( m_sdbSizer51OK );
	m_sdbSizer51Apply = new wxButton( sbSizer511->GetStaticBox(), wxID_APPLY );
	m_sdbSizer51->AddButton( m_sdbSizer51Apply );
	m_sdbSizer51Cancel = new wxButton( sbSizer511->GetStaticBox(), wxID_CANCEL );
	m_sdbSizer51->AddButton( m_sdbSizer51Cancel );
	m_sdbSizer51->Realize();

	fgSizer521->Add( m_sdbSizer51, 1, wxEXPAND, 2 );


	sbSizer511->Add( fgSizer521, 1, wxEXPAND, 2 );


	m_panelConfigure->SetSizer( sbSizer511 );
	m_panelConfigure->Layout();
	sbSizer511->Fit( m_panelConfigure );
	m_notebookSimulator->AddPage( m_panelConfigure, _("Dynamic Config"), false );
	m_panelData1 = new wxPanel( m_notebookSimulator, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelData1->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_panelData1->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_panelData1->SetToolTip( _("Data Display") );

	wxFlexGridSizer* fgSizer108132;
	fgSizer108132 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer108132->SetFlexibleDirection( wxBOTH );
	fgSizer108132->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer631;
	sbSizer631 = new wxStaticBoxSizer( new wxStaticBox( m_panelData1, wxID_ANY, _("GPS Constillation + Parameters") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer1081311;
	fgSizer1081311 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer1081311->SetFlexibleDirection( wxBOTH );
	fgSizer1081311->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer2031;
	fgSizer2031 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer2031->SetFlexibleDirection( wxBOTH );
	fgSizer2031->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	fgSizer1081311->Add( fgSizer2031, 1, wxEXPAND, 5 );


	sbSizer631->Add( fgSizer1081311, 1, wxEXPAND, 5 );


	fgSizer108132->Add( sbSizer631, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer28811;
	fgSizer28811 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer28811->SetFlexibleDirection( wxBOTH );
	fgSizer28811->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbLongS21;
	sbLongS21 = new wxStaticBoxSizer( new wxStaticBox( m_panelData1, wxID_ANY, _("COG Bearing  / SOG Speed") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer22111121;
	fgSizer22111121 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer22111121->SetFlexibleDirection( wxBOTH );
	fgSizer22111121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stGPSHeading1 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSHeading1->Wrap( -1 );
	m_stGPSHeading1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSHeading1->SetToolTip( _("Vessel Heading") );

	fgSizer22111121->Add( m_stGPSHeading1, 0, wxALL, 1 );

	m_staticTextKnots1221111111 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("Deg t"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1221111111->Wrap( -1 );
	m_staticTextKnots1221111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer22111121->Add( m_staticTextKnots1221111111, 0, wxALL, 1 );

	m_stGPSSpeed1 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSSpeed1->Wrap( -1 );
	m_stGPSSpeed1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSSpeed1->SetToolTip( _("Log Speed") );

	fgSizer22111121->Add( m_stGPSSpeed1, 0, wxALL, 1 );

	m_staticText811111111 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("Kts "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText811111111->Wrap( -1 );
	m_staticText811111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer22111121->Add( m_staticText811111111, 0, wxALL, 1 );

	m_stGPSETA1 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSETA1->Wrap( -1 );
	m_stGPSETA1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSETA1->SetToolTip( _("ETA") );

	fgSizer22111121->Add( m_stGPSETA1, 0, wxALL, 1 );

	m_staticTextKnots1111111111 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("ETA "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1111111111->Wrap( -1 );
	m_staticTextKnots1111111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer22111121->Add( m_staticTextKnots1111111111, 0, wxALL, 1 );

	m_stGPSDistance1 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSDistance1->Wrap( -1 );
	m_stGPSDistance1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSDistance1->SetToolTip( _("Log Speed") );

	fgSizer22111121->Add( m_stGPSDistance1, 0, wxALL, 1 );

	m_staticText181211111 = new wxStaticText( sbLongS21->GetStaticBox(), wxID_ANY, _("N Mi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText181211111->Wrap( -1 );
	m_staticText181211111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer22111121->Add( m_staticText181211111, 0, wxALL, 1 );


	sbLongS21->Add( fgSizer22111121, 1, wxEXPAND, 5 );


	fgSizer28811->Add( sbLongS21, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbLongS121;
	sbLongS121 = new wxStaticBoxSizer( new wxStaticBox( m_panelData1, wxID_ANY, _("Position") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer221111121;
	fgSizer221111121 = new wxFlexGridSizer( 0, 8, 0, 0 );
	fgSizer221111121->SetFlexibleDirection( wxBOTH );
	fgSizer221111121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stGPSLatD11 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLatD11->Wrap( -1 );
	m_stGPSLatD11->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLatD11->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLatD11, 0, wxALL, 1 );

	m_stGPSLatD1m1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLatD1m1->Wrap( -1 );
	m_stGPSLatD1m1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLatD1m1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLatD1m1, 0, wxALL, 1 );

	m_stGPDLatD1s1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPDLatD1s1->Wrap( -1 );
	m_stGPDLatD1s1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPDLatD1s1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPDLatD1s1, 0, wxALL, 1 );

	m_staticTextKnots111111111321 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots111111111321->Wrap( -1 );
	m_staticTextKnots111111111321->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots111111111321, 0, wxALL, 1 );

	m_stGPSLongD11 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongD11->Wrap( -1 );
	m_stGPSLongD11->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongD11->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongD11, 0, wxALL, 1 );

	m_stGPSLongD1m1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongD1m1->Wrap( -1 );
	m_stGPSLongD1m1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongD1m1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongD1m1, 0, wxALL, 1 );

	m_stGPSLongD1s1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongD1s1->Wrap( -1 );
	m_stGPSLongD1s1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongD1s1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongD1s1, 0, wxALL, 1 );

	m_staticTextKnots1111111111221 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1111111111221->Wrap( -1 );
	m_staticTextKnots1111111111221->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots1111111111221, 0, wxALL, 1 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stGPSLatD21 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLatD21->Wrap( -1 );
	m_stGPSLatD21->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLatD21->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLatD21, 0, wxALL, 1 );

	m_stGPSLatD2m1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLatD2m1->Wrap( -1 );
	m_stGPSLatD2m1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLatD2m1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLatD2m1, 0, wxALL, 1 );

	m_staticTextKnots1111111112221 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots1111111112221->Wrap( -1 );
	m_staticTextKnots1111111112221->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots1111111112221, 0, wxALL, 1 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stGPSLongD21 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongD21->Wrap( -1 );
	m_stGPSLongD21->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongD21->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongD21, 0, wxALL, 1 );

	m_stGPSLongDm1 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("00.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongDm1->Wrap( -1 );
	m_stGPSLongDm1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongDm1->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongDm1, 0, wxALL, 1 );

	m_staticTextKnots11111111111221 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots11111111111221->Wrap( -1 );
	m_staticTextKnots11111111111221->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots11111111111221, 0, wxALL, 1 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stGPSLatD31 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLatD31->Wrap( -1 );
	m_stGPSLatD31->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLatD31->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLatD31, 0, wxALL, 1 );

	m_staticTextKnots11111111121121 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Lat. "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots11111111121121->Wrap( -1 );
	m_staticTextKnots11111111121121->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots11111111121121, 0, wxALL, 1 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer221111121->Add( 0, 0, 1, wxEXPAND, 5 );

	m_stGPSLongD31 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("000.000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stGPSLongD31->Wrap( -1 );
	m_stGPSLongD31->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stGPSLongD31->SetToolTip( _("Vessel Heading") );

	fgSizer221111121->Add( m_stGPSLongD31, 0, wxALL, 1 );

	m_staticTextKnots111111111111121 = new wxStaticText( sbLongS121->GetStaticBox(), wxID_ANY, _("Long."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots111111111111121->Wrap( -1 );
	m_staticTextKnots111111111111121->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer221111121->Add( m_staticTextKnots111111111111121, 0, wxALL, 1 );


	sbLongS121->Add( fgSizer221111121, 1, wxEXPAND, 5 );


	fgSizer28811->Add( sbLongS121, 1, wxEXPAND, 2 );


	fgSizer108132->Add( fgSizer28811, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer533111;
	sbSizer533111 = new wxStaticBoxSizer( new wxStaticBox( m_panelData1, wxID_ANY, _("Message Selection") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer108113111;
	fgSizer108113111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer108113111->SetFlexibleDirection( wxBOTH );
	fgSizer108113111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer533111->Add( fgSizer108113111, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer232111;
	fgSizer232111 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer232111->SetFlexibleDirection( wxBOTH );
	fgSizer232111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer533111->Add( fgSizer232111, 1, wxEXPAND, 2 );


	fgSizer108132->Add( sbSizer533111, 1, wxEXPAND, 2 );


	m_panelData1->SetSizer( fgSizer108132 );
	m_panelData1->Layout();
	fgSizer108132->Fit( m_panelData1 );
	m_notebookSimulator->AddPage( m_panelData1, _("Data Display 1"), false );

	fgSizer4->Add( m_notebookSimulator, 1, wxEXPAND | wxALL, 2 );


	bSizer1->Add( fgSizer4, 1, wxEXPAND, 2 );


	this->SetSizer( bSizer1 );
	this->Layout();
	m_timer.SetOwner( this, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SimulatorBase::OnClose ) );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( SimulatorBase::OnSize ) );
	m_bpPlay->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStart ), NULL, this );
	m_bpStop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStop ), NULL, this );
	m_buttonAuto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnAuto ), NULL, this );
	m_buttonStandby->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStandby ), NULL, this );
	m_buttonStandby1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStandby ), NULL, this );
	m_buttonWind->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnWind ), NULL, this );
	m_button6->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus1 ), NULL, this );
	m_buttonMinus1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMinus1 ), NULL, this );
	m_buttonMinus10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMinus10 ), NULL, this );
	m_buttonPlus10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus10 ), NULL, this );
	m_buttonPlus1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus1 ), NULL, this );
	m_buttonMid->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMidships ), NULL, this );
	m_cbAISLat->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISLong->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISSOG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISHDT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISCOG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISROT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISAIVDO->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISAIVDM->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTransmitAis1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAisToFile1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISETA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_dpAISETADate->Connect( wxEVT_DATE_CHANGED, wxDateEventHandler( SimulatorBase::OnUpdateDate ), NULL, this );
	m_tpAISETATime->Connect( wxEVT_TIME_CHANGED, wxDateEventHandler( SimulatorBase::OnUpdateTime ), NULL, this );
	m_cbAISNavS->Connect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( SimulatorBase::OnMode ), NULL, this );
	m_cbAISNavSelect->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRBAR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDetect61->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRATemp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize62->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRWTemp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize112->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVPitch->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize113->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVRoll->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize121->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVHeel->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize131->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDREngT1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize141->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDREngT2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize181->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWS1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize151->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWA1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize191->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWS1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize161->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize171->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare11->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize1101->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare21->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize1111->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMTW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVLW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMWD->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMWV->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRRSA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVHW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVTG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVWR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVWT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRXDR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbMode->Connect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( SimulatorBase::OnMode ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnOk ), NULL, this );
	m_cbSHDT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSTW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSCOG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSHDM->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSHDG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSOG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSet->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSDrift->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSTWA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSTWS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSAWA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSAWS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDT511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDetect521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbCOG511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize531->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDM511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51141->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDG511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51151->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSOG511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51221->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSet511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51321->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDrift511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize5141->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWA511->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51821->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWS521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWA521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51921->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWS521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51621->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare541->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51721->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare521->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize511021->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( SimulatorBase::OnTimer ) );
}

SimulatorBase::~SimulatorBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( SimulatorBase::OnClose ) );
	this->Disconnect( wxEVT_SIZE, wxSizeEventHandler( SimulatorBase::OnSize ) );
	m_bpPlay->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStart ), NULL, this );
	m_bpStop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStop ), NULL, this );
	m_buttonAuto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnAuto ), NULL, this );
	m_buttonStandby->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStandby ), NULL, this );
	m_buttonStandby1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnStandby ), NULL, this );
	m_buttonWind->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnWind ), NULL, this );
	m_button6->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus1 ), NULL, this );
	m_buttonMinus1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMinus1 ), NULL, this );
	m_buttonMinus10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMinus10 ), NULL, this );
	m_buttonPlus10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus10 ), NULL, this );
	m_buttonPlus1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnPlus1 ), NULL, this );
	m_buttonMid->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnMidships ), NULL, this );
	m_cbAISLat->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISLong->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISSOG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISHDT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISCOG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISROT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISAIVDO->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISAIVDM->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTransmitAis1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAisToFile1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAISETA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_dpAISETADate->Disconnect( wxEVT_DATE_CHANGED, wxDateEventHandler( SimulatorBase::OnUpdateDate ), NULL, this );
	m_tpAISETATime->Disconnect( wxEVT_TIME_CHANGED, wxDateEventHandler( SimulatorBase::OnUpdateTime ), NULL, this );
	m_cbAISNavS->Disconnect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( SimulatorBase::OnMode ), NULL, this );
	m_cbAISNavSelect->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRBAR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDetect61->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRATemp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize62->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRWTemp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize112->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVPitch->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize113->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVRoll->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize121->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVHeel->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize131->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDREngT1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize141->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDREngT2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize181->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWS1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize151->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWA1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize191->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWS1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize161->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize171->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare11->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize1101->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare21->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize1111->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMTW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVLW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMWD->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRMWV->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRRSA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVHW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVTG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVWR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRVWT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbXDRXDR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbMode->Disconnect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( SimulatorBase::OnMode ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorBase::OnOk ), NULL, this );
	m_cbSHDT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSTW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSCOG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSHDM->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSHDG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSOG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSSet->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSDrift->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSTWA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSTWS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSAWA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSAWS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDT511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDetect521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbCOG511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize531->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDM511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51141->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbHDG511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51151->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSOG511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51221->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSet511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51321->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbDrift511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize5141->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWA511->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51821->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbTWS521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWA521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51921->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbAWS521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51621->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare541->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize51721->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbSpare521->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	m_cbOptimize511021->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorBase::OnUpdate ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( SimulatorBase::OnTimer ) );

}

SimulatorPreferences::SimulatorPreferences( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );

	wxStaticBoxSizer* sbSizer50;
	sbSizer50 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Message Selection AIS") ), wxVERTICAL );

	wxStaticBoxSizer* sbSizer52;
	sbSizer52 = new wxStaticBoxSizer( new wxStaticBox( sbSizer50->GetStaticBox(), wxID_ANY, _("MMSI") ), wxVERTICAL );

	m_textCtrlMMSI = new wxTextCtrl( sbSizer52->GetStaticBox(), wxID_ANY, _("000012345"), wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrlMMSI->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_textCtrlMMSI->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_textCtrlMMSI->SetToolTip( _("Enter your Own Ship MMSI") );

	sbSizer52->Add( m_textCtrlMMSI, 0, wxALL, 5 );


	sbSizer50->Add( sbSizer52, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer533111;
	sbSizer533111 = new wxStaticBoxSizer( new wxStaticBox( sbSizer50->GetStaticBox(), wxID_ANY, _("AIS and File Selection Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer108113111;
	fgSizer108113111 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer108113111->SetFlexibleDirection( wxBOTH );
	fgSizer108113111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer533111->Add( fgSizer108113111, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer232111;
	fgSizer232111 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer232111->SetFlexibleDirection( wxBOTH );
	fgSizer232111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbTransmitAis = new wxCheckBox( sbSizer533111->GetStaticBox(), wxID_ANY, _("AIS On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbTransmitAis->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_cbTransmitAis->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_cbTransmitAis->SetToolTip( _("Turn On/Off AIS messages") );

	fgSizer232111->Add( m_cbTransmitAis, 0, wxALL, 2 );

	wxStaticBoxSizer* sbSizer106;
	sbSizer106 = new wxStaticBoxSizer( new wxStaticBox( sbSizer533111->GetStaticBox(), wxID_ANY, _("File Operations") ), wxVERTICAL );

	sbSizer106->SetMinSize( wxSize( 30,300 ) );
	wxFlexGridSizer* fgSizer6711;
	fgSizer6711 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer6711->SetFlexibleDirection( wxBOTH );
	fgSizer6711->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbAisToFile = new wxCheckBox( sbSizer106->GetStaticBox(), wxID_ANY, _("Save stream to file"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbAisToFile->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNTEXT ) );
	m_cbAisToFile->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_APPWORKSPACE ) );
	m_cbAisToFile->SetToolTip( _("Save Streamed Data to a file") );

	fgSizer6711->Add( m_cbAisToFile, 0, wxALL, 2 );


	sbSizer106->Add( fgSizer6711, 1, wxEXPAND, 5 );


	fgSizer232111->Add( sbSizer106, 1, wxEXPAND, 5 );


	sbSizer533111->Add( fgSizer232111, 1, wxEXPAND, 2 );


	fgSizer52->Add( sbSizer533111, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer53311;
	sbSizer53311 = new wxStaticBoxSizer( new wxStaticBox( sbSizer50->GetStaticBox(), wxID_ANY, _("GPS Message Selection Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer10811311;
	fgSizer10811311 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer10811311->SetFlexibleDirection( wxBOTH );
	fgSizer10811311->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer53311->Add( fgSizer10811311, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer23211;
	fgSizer23211 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer23211->SetFlexibleDirection( wxBOTH );
	fgSizer23211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bUseGSV = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPGSV On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseGSV->SetValue(true);
	m_bUseGSV->SetToolTip( _("Satellites in view ") );

	fgSizer23211->Add( m_bUseGSV, 0, wxALL, 2 );

	m_bUseGLL = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPGLL On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseGLL->SetValue(true);
	m_bUseGLL->SetToolTip( _("$GPGLL Lat Long & UTC Time") );

	fgSizer23211->Add( m_bUseGLL, 0, wxALL, 2 );

	m_bUseHDT = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPHDT On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseHDT->SetValue(true);
	m_bUseHDT->SetToolTip( _("$HCHDT True Heading") );

	fgSizer23211->Add( m_bUseHDT, 0, wxALL, 2 );

	m_bUseHDM = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPHDM On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseHDM->SetValue(true);
	m_bUseHDM->SetToolTip( _("$HCHDM Magnetic Heading") );

	fgSizer23211->Add( m_bUseHDM, 0, wxALL, 2 );

	m_bUseVTG = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPVTG On/Off"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_bUseVTG->SetValue(true);
	m_bUseVTG->SetToolTip( _("Track Made Good and Speed Over Ground") );

	fgSizer23211->Add( m_bUseVTG, 0, wxALL, 2 );

	m_bUseRMC = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPRMC On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseRMC->SetValue(true);
	m_bUseRMC->SetToolTip( _("Minimum GPS sentence type C") );

	fgSizer23211->Add( m_bUseRMC, 0, wxALL, 2 );

	m_bUseVHW = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPVHW On/Off"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_bUseVHW->SetValue(true);
	m_bUseVHW->SetToolTip( _("Water Speed and Heading (STW)") );

	fgSizer23211->Add( m_bUseVHW, 0, wxALL, 2 );

	m_bUseVDR = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPVDR On/Off"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_bUseVDR->SetValue(true);
	m_bUseVDR->SetToolTip( _("Surface current (Set and Drift) ") );

	fgSizer23211->Add( m_bUseVDR, 0, wxALL, 2 );

	m_bUseGGA = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("GPGGA On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseGGA->SetValue(true);
	m_bUseGGA->SetToolTip( _("Global Positioning System Fix Data") );

	fgSizer23211->Add( m_bUseGGA, 0, wxALL, 2 );

	m_cbSpare1211 = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer23211->Add( m_cbSpare1211, 0, wxALL, 2 );

	m_cbUseMWVA = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("MWVA"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbUseMWVA->SetToolTip( _("$MWVA") );

	fgSizer23211->Add( m_cbUseMWVA, 0, wxALL, 2 );

	m_cbUseMWVT = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("MWVT"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbUseMWVT->SetToolTip( _("$MWVT") );

	fgSizer23211->Add( m_cbUseMWVT, 0, wxALL, 2 );

	m_cbUseMWD = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("MWD"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer23211->Add( m_cbUseMWD, 0, wxALL, 2 );

	m_cbSpare12111 = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer23211->Add( m_cbSpare12111, 0, wxALL, 2 );

	m_cbXDRVLW = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("VLW"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVLW->SetToolTip( _("$MTW") );

	fgSizer23211->Add( m_cbXDRVLW, 0, wxALL, 2 );

	m_cbXDRVWR = new wxCheckBox( sbSizer53311->GetStaticBox(), wxID_ANY, _("VWR"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbXDRVWR->SetToolTip( _("$MTW") );

	fgSizer23211->Add( m_cbXDRVWR, 0, wxALL, 2 );


	sbSizer53311->Add( fgSizer23211, 1, wxEXPAND, 2 );


	fgSizer52->Add( sbSizer53311, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer621;
	fgSizer621 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer621->AddGrowableCol( 0 );
	fgSizer621->AddGrowableRow( 0 );
	fgSizer621->SetFlexibleDirection( wxBOTH );
	fgSizer621->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer6532;
	sbSizer6532 = new wxStaticBoxSizer( new wxStaticBox( sbSizer50->GetStaticBox(), wxID_ANY, _("Not Implemented Selector") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer108112;
	fgSizer108112 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer108112->SetFlexibleDirection( wxBOTH );
	fgSizer108112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer6532->Add( fgSizer108112, 1, wxEXPAND, 2 );

	wxFlexGridSizer* fgSizer231;
	fgSizer231 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer231->SetFlexibleDirection( wxBOTH );
	fgSizer231->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbRSAPort = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Port Sensor"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbRSAPort, 0, wxALL, 2 );

	m_cbRSAStarboard = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Starboard Sensor"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbRSAStarboard, 0, wxALL, 2 );

	m_cbXDRVPitch = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Vessel Pitch"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDRVPitch, 0, wxALL, 2 );

	m_cbXDRVHeel = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Vessel Heel"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDRVHeel, 0, wxALL, 2 );

	m_cbTWA = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("True Wind Angle"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbTWA, 0, wxALL, 2 );

	m_cbOptimize62 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize62, 0, wxALL, 2 );

	m_cbTWS = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("True Wind Speed"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbTWS, 0, wxALL, 2 );

	m_cbOptimize112 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize112, 0, wxALL, 2 );

	m_cbXDRWTemp = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Water Temp"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDRWTemp, 0, wxALL, 2 );

	m_cbXDRATemp = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Air Temp"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDRATemp, 0, wxALL, 2 );

	m_cbXDRBAR = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Barometer"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDRBAR, 0, wxALL, 2 );

	m_cbOptimize131 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize131, 0, wxALL, 2 );

	m_cbSounder = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Sounder"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbSounder, 0, wxALL, 2 );

	m_cbTWS1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbTWS1, 0, wxALL, 2 );

	m_cbAWA1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWA1, 0, wxALL, 2 );

	m_cbAWA12 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWA12, 0, wxALL, 2 );

	m_cbAWA121 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWA121, 0, wxALL, 2 );

	m_cbAWA11 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWA11, 0, wxALL, 2 );

	m_cbXDREngT1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Engine Temp1"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDREngT1, 0, wxALL, 2 );

	m_cbOptimize141 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize141, 0, wxALL, 2 );

	m_cbXDREngT2 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Engine Temp2"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbXDREngT2, 0, wxALL, 2 );

	m_cbAWA112 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWA112, 0, wxALL, 2 );

	m_cbOptimize181 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize181, 0, wxALL, 2 );

	m_cbOptimize151 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize151, 0, wxALL, 2 );

	m_cbOptimize191 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize191, 0, wxALL, 2 );

	m_cbAWS1 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbAWS1, 0, wxALL, 2 );

	m_cbOptimize161 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize161, 0, wxALL, 2 );

	m_cbSpare3 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbSpare3, 0, wxALL, 2 );

	m_cbOptimize171 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize171, 0, wxALL, 2 );

	m_cbSpare11 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbSpare11, 0, wxALL, 2 );

	m_cbOptimize1101 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize1101, 0, wxALL, 2 );

	m_cbSpare21 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbSpare21, 0, wxALL, 2 );

	m_cbOptimize1111 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Optimize"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT|wxCHK_3STATE );
	fgSizer231->Add( m_cbOptimize1111, 0, wxALL, 2 );

	m_cbSpare211 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("Spare"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer231->Add( m_cbSpare211, 0, wxALL, 5 );

	m_cbTWS211 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("T"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbTWS211, 0, wxALL, 5 );

	m_cbAWA211 = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("App"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbAWA211, 0, wxALL, 5 );

	m_cbGPSAntP = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("ANTP"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_cbGPSAntP->SetToolTip( _("Ant Port") );

	fgSizer231->Add( m_cbGPSAntP, 0, wxALL, 5 );

	m_cbGPSAntS = new wxCheckBox( sbSizer6532->GetStaticBox(), wxID_ANY, _("ANTS"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	fgSizer231->Add( m_cbGPSAntS, 0, wxALL, 5 );


	sbSizer6532->Add( fgSizer231, 1, wxEXPAND, 2 );


	fgSizer621->Add( sbSizer6532, 1, wxEXPAND, 2 );

	wxStaticBoxSizer* sbSizer6111;
	sbSizer6111 = new wxStaticBoxSizer( new wxStaticBox( sbSizer50->GetStaticBox(), wxID_ANY, _("Non GPS Messages") ), wxVERTICAL );

	sbSizer6111->SetMinSize( wxSize( 300,-1 ) );
	wxFlexGridSizer* fgSizer6411;
	fgSizer6411 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6411->AddGrowableCol( 0 );
	fgSizer6411->AddGrowableCol( 1 );
	fgSizer6411->AddGrowableRow( 0 );
	fgSizer6411->SetFlexibleDirection( wxBOTH );
	fgSizer6411->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer6611;
	fgSizer6611 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6611->AddGrowableCol( 0 );
	fgSizer6611->AddGrowableRow( 0 );
	fgSizer6611->SetFlexibleDirection( wxBOTH );
	fgSizer6611->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bUseRSA = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("TIRSA On/Off"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_bUseRSA->SetValue(true);
	m_bUseRSA->SetToolTip( _("Rudder Angle Sensor Message") );

	fgSizer6611->Add( m_bUseRSA, 0, wxALL, 2 );

	m_bUseXDRPR = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("IIXDR Pitch + Heel On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseXDRPR->SetValue(true);
	m_bUseXDRPR->SetToolTip( _("Pitch and Heel Message") );

	fgSizer6611->Add( m_bUseXDRPR, 0, wxALL, 2 );

	m_bUseMWVT = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("IIMWV(T) On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseMWVT->SetValue(true);
	m_bUseMWVT->SetToolTip( _("True Wind Message") );

	fgSizer6611->Add( m_bUseMWVT, 0, wxALL, 2 );

	m_bUseMWVA = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("IIMWV(A) On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseMWVA->SetValue(true);
	m_bUseMWVA->SetToolTip( _("Applied Wind Message") );

	fgSizer6611->Add( m_bUseMWVA, 0, wxALL, 2 );

	m_bUseXDRAW = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("IIXDR Water + Air Temp  On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseXDRAW->SetValue(true);
	m_bUseXDRAW->SetToolTip( _("Water and Air Temp Message") );

	fgSizer6611->Add( m_bUseXDRAW, 0, wxALL, 2 );

	m_bUseXDRMB = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("IIXDR Barometer On/Off"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bUseXDRMB->SetValue(true);
	m_bUseXDRMB->SetToolTip( _("$IIXDR Barometer") );

	fgSizer6611->Add( m_bUseXDRMB, 0, wxALL, 2 );

	m_bUseDBT = new wxCheckBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("DBT  (Sounding) On/Off"), wxDefaultPosition, wxDefaultSize, wxCHK_2STATE );
	m_bUseDBT->SetValue(true);
	m_bUseDBT->SetToolTip( _("Depth Sounding below transducer value") );

	fgSizer6611->Add( m_bUseDBT, 0, wxALL, 2 );

	wxStaticBoxSizer* sbSizer1061;
	sbSizer1061 = new wxStaticBoxSizer( new wxStaticBox( sbSizer6111->GetStaticBox(), wxID_ANY, _("Grouping") ), wxVERTICAL );

	sbSizer1061->SetMinSize( wxSize( 30,300 ) );
	wxFlexGridSizer* fgSizer67111;
	fgSizer67111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer67111->SetFlexibleDirection( wxBOTH );
	fgSizer67111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	sbSizer1061->Add( fgSizer67111, 1, wxEXPAND, 5 );


	fgSizer6611->Add( sbSizer1061, 1, wxEXPAND, 5 );


	fgSizer6411->Add( fgSizer6611, 1, wxEXPAND, 5 );


	sbSizer6111->Add( fgSizer6411, 1, wxEXPAND, 2 );


	fgSizer621->Add( sbSizer6111, 1, wxEXPAND, 2 );


	fgSizer52->Add( fgSizer621, 1, wxEXPAND, 5 );


	sbSizer50->Add( fgSizer52, 1, wxEXPAND, 5 );

	m_sdbSizer = new wxStdDialogButtonSizer();
	m_sdbSizerOK = new wxButton( sbSizer50->GetStaticBox(), wxID_OK );
	m_sdbSizer->AddButton( m_sdbSizerOK );
	m_sdbSizerCancel = new wxButton( sbSizer50->GetStaticBox(), wxID_CANCEL );
	m_sdbSizer->AddButton( m_sdbSizerCancel );
	m_sdbSizer->Realize();

	sbSizer50->Add( m_sdbSizer, 1, wxEXPAND, 5 );


	this->SetSizer( sbSizer50 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_bUseGSV->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseGLL->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseHDT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseHDM->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVTG->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseRMC->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVHW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVDR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseGGA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare1211->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWVA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWVT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWD->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare12111->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVLW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVWR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbRSAPort->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbRSAStarboard->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVPitch->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVHeel->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize62->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize112->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRWTemp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRATemp->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRBAR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize131->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSounder->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA12->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA121->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA11->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDREngT1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize141->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDREngT2->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA112->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize181->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize151->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize191->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWS1->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize161->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare3->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize171->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare11->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize1101->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare21->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize1111->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare211->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS211->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA211->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbGPSAntP->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbGPSAntS->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseRSA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRPR->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseMWVT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseMWVA->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRAW->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRMB->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseDBT->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
}

SimulatorPreferences::~SimulatorPreferences()
{
	// Disconnect Events
	m_bUseGSV->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseGLL->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseHDT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseHDM->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVTG->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseRMC->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVHW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseVDR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseGGA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare1211->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWVA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWVT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbUseMWD->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare12111->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVLW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVWR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbRSAPort->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbRSAStarboard->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVPitch->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRVHeel->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize62->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize112->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRWTemp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRATemp->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDRBAR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize131->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSounder->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA12->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA121->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA11->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDREngT1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize141->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbXDREngT2->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA112->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize181->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize151->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize191->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWS1->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize161->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare3->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize171->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare11->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize1101->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare21->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbOptimize1111->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbSpare211->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbTWS211->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbAWA211->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbGPSAntP->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_cbGPSAntS->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseRSA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRPR->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseMWVT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseMWVA->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRAW->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseXDRMB->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );
	m_bUseDBT->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences::OnUpdate ), NULL, this );

}

SimulatorPreferences1::SimulatorPreferences1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer92;
	fgSizer92 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer92->AddGrowableCol( 0 );
	fgSizer92->AddGrowableRow( 0 );
	fgSizer92->SetFlexibleDirection( wxBOTH );
	fgSizer92->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer100;
	fgSizer100 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer100->AddGrowableCol( 1 );
	fgSizer100->AddGrowableRow( 0 );
	fgSizer100->SetFlexibleDirection( wxBOTH );
	fgSizer100->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25;
	sbSizer25 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Display") ), wxVERTICAL );

	m_scrolledWindow4 = new wxScrolledWindow( sbSizer25->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow4->SetScrollRate( 5, 5 );
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_NONE );

	wxFlexGridSizer* fgSizer42;
	fgSizer42 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer42->SetFlexibleDirection( wxBOTH );
	fgSizer42->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText74 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Cursor Route Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer42->Add( m_staticText74, 0, wxALL, 5 );

	m_cpCursorRoute = new wxColourPickerCtrl( m_scrolledWindow4, wxID_ANY, wxColour( 255, 255, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer42->Add( m_cpCursorRoute, 0, wxALL, 5 );

	m_staticText73 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Destination Route Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	fgSizer42->Add( m_staticText73, 0, wxALL, 5 );

	m_cpDestinationRoute = new wxColourPickerCtrl( m_scrolledWindow4, wxID_ANY, wxColour( 255, 0, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer42->Add( m_cpDestinationRoute, 0, wxALL, 5 );

	m_staticText75 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Route Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	fgSizer42->Add( m_staticText75, 0, wxALL, 5 );

	m_sRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 4 );
	fgSizer42->Add( m_sRouteThickness, 0, wxALL, 5 );

	m_staticText70 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Iso Chron Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer42->Add( m_staticText70, 0, wxALL, 5 );

	m_sIsoChronThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 2 );
	fgSizer42->Add( m_sIsoChronThickness, 0, wxALL, 5 );

	m_staticText71 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Alternate Routes Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer42->Add( m_staticText71, 0, wxALL, 5 );

	m_sAlternateRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizer42->Add( m_sAlternateRouteThickness, 0, wxALL, 5 );

	m_staticText711 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Wind Barbs On Route Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText711->Wrap( -1 );
	fgSizer42->Add( m_staticText711, 0, wxALL, 5 );

	m_sWindBarbsOnRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 6, 2 );
	fgSizer42->Add( m_sWindBarbsOnRouteThickness, 0, wxALL, 5 );


	fgSizer18->Add( fgSizer42, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer82;
	fgSizer82 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer82->SetFlexibleDirection( wxBOTH );
	fgSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_textCtrlMMSI = new wxTextCtrl( m_scrolledWindow4, wxID_ANY, _("000012345"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_textCtrlMMSI, 0, wxALL, 5 );

	m_staticText731 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("MMSI *** This is a nine digit number "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText731->Wrap( -1 );
	fgSizer82->Add( m_staticText731, 0, wxALL, 5 );

	m_cbDisplayCursorRoute = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display Cursor Route"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbDisplayCursorRoute->SetValue(true);
	fgSizer82->Add( m_cbDisplayCursorRoute, 0, wxALL, 5 );

	m_cbMarkAtPolarChange = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display mark when Polar changes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbMarkAtPolarChange->SetValue(true);
	fgSizer82->Add( m_cbMarkAtPolarChange, 0, wxALL, 5 );

	m_cbDisplayCurrent = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display current"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbDisplayCurrent->SetValue(true);
	fgSizer82->Add( m_cbDisplayCurrent, 0, wxALL, 5 );

	m_cbDisplayWindBarbs = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display Wind Barbs"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbDisplayWindBarbs, 0, wxALL, 5 );

	m_cbDisplayApparentWindBarbs = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Apparent Wind for Barbs On Route (not True Wind)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbDisplayApparentWindBarbs, 0, wxALL, 5 );

	m_cbTransmitAis = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Transmit AIS"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbTransmitAis, 0, wxALL, 5 );

	m_cbAisToFile = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Save AIS data generated to File"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbAisToFile, 0, wxALL, 5 );


	fgSizer18->Add( fgSizer82, 1, wxEXPAND, 5 );


	m_scrolledWindow4->SetSizer( fgSizer18 );
	m_scrolledWindow4->Layout();
	fgSizer18->Fit( m_scrolledWindow4 );
	sbSizer25->Add( m_scrolledWindow4, 1, wxEXPAND | wxALL, 5 );


	fgSizer100->Add( sbSizer25, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer101->AddGrowableCol( 0 );
	fgSizer101->AddGrowableRow( 1 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer26;
	sbSizer26 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Computation") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText115 = new wxStaticText( sbSizer26->GetStaticBox(), wxID_ANY, _("Number of Concurrent threads"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	fgSizer93->Add( m_staticText115, 0, wxALL, 5 );

	m_sConcurrentThreads = new wxSpinCtrl( sbSizer26->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 64, 1 );
	fgSizer93->Add( m_sConcurrentThreads, 0, wxALL, 5 );


	sbSizer26->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer101->Add( sbSizer26, 1, wxEXPAND, 5 );

	wxArrayString m_cblFieldsChoices;
	m_cblFields = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cblFieldsChoices, 0 );
	fgSizer101->Add( m_cblFields, 0, wxALL|wxEXPAND, 5 );

	m_cbUseLocalTime = new wxCheckBox( this, wxID_ANY, _("Use Local Time"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_cbUseLocalTime, 0, wxALL, 5 );


	fgSizer100->Add( fgSizer101, 1, wxEXPAND, 5 );


	fgSizer92->Add( fgSizer100, 1, wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Help = new wxButton( this, wxID_HELP );
	m_sdbSizer1->AddButton( m_sdbSizer1Help );
	m_sdbSizer1->Realize();

	fgSizer92->Add( m_sdbSizer1, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer92 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_cpCursorRoute->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SimulatorPreferences1::OnUpdateColor ), NULL, this );
	m_cpDestinationRoute->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SimulatorPreferences1::OnUpdateColor ), NULL, this );
	m_sRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sIsoChronThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sAlternateRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sWindBarbsOnRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_cbDisplayCursorRoute->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbMarkAtPolarChange->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayCurrent->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayWindBarbs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayApparentWindBarbs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbTransmitAis->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbAisToFile->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cblFields->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( SimulatorPreferences1::OnUpdateColumns ), NULL, this );
	m_cbUseLocalTime->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdateColumns ), NULL, this );
	m_sdbSizer1Help->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnHelp ), NULL, this );
}

SimulatorPreferences1::~SimulatorPreferences1()
{
	// Disconnect Events
	m_cpCursorRoute->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SimulatorPreferences1::OnUpdateColor ), NULL, this );
	m_cpDestinationRoute->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SimulatorPreferences1::OnUpdateColor ), NULL, this );
	m_sRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sIsoChronThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sAlternateRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_sWindBarbsOnRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SimulatorPreferences1::OnUpdateSpin ), NULL, this );
	m_cbDisplayCursorRoute->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbMarkAtPolarChange->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayCurrent->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayWindBarbs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbDisplayApparentWindBarbs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbTransmitAis->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cbAisToFile->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdate ), NULL, this );
	m_cblFields->Disconnect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( SimulatorPreferences1::OnUpdateColumns ), NULL, this );
	m_cbUseLocalTime->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnUpdateColumns ), NULL, this );
	m_sdbSizer1Help->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorPreferences1::OnHelp ), NULL, this );

}

CursorPositionDialog::CursorPositionDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,-1 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer90;
	fgSizer90 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer90->SetFlexibleDirection( wxBOTH );
	fgSizer90->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer91->AddGrowableCol( 1 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText134 = new wxStaticText( this, wxID_ANY, _("Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	fgSizer91->Add( m_staticText134, 0, wxALL, 5 );

	m_stTime = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stTime->Wrap( -1 );
	fgSizer91->Add( m_stTime, 0, wxALL|wxEXPAND, 5 );

	m_staticText128 = new wxStaticText( this, wxID_ANY, _("Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText128->Wrap( -1 );
	fgSizer91->Add( m_staticText128, 0, wxALL, 5 );

	m_stPosition = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stPosition->Wrap( 120 );
	fgSizer91->Add( m_stPosition, 0, wxALL|wxEXPAND, 5 );

	m_staticText124 = new wxStaticText( this, wxID_ANY, _("Polar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText124->Wrap( -1 );
	fgSizer91->Add( m_staticText124, 0, wxALL, 5 );

	m_stPolar = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stPolar->Wrap( -1 );
	fgSizer91->Add( m_stPolar, 0, wxALL|wxEXPAND, 5 );

	m_staticText130 = new wxStaticText( this, wxID_ANY, _("Sail Changes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText130->Wrap( -1 );
	fgSizer91->Add( m_staticText130, 0, wxALL, 5 );

	m_stSailChanges = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stSailChanges->Wrap( -1 );
	fgSizer91->Add( m_stSailChanges, 0, wxALL|wxEXPAND, 5 );

	m_staticText126 = new wxStaticText( this, wxID_ANY, _("Tacks"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText126->Wrap( -1 );
	fgSizer91->Add( m_staticText126, 0, wxALL, 5 );

	m_stTacks = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stTacks->Wrap( -1 );
	fgSizer91->Add( m_stTacks, 0, wxALL|wxEXPAND, 5 );

	m_staticText122 = new wxStaticText( this, wxID_ANY, _("Weather Data"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText122->Wrap( -1 );
	fgSizer91->Add( m_staticText122, 0, wxALL, 5 );

	m_stWeatherData = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stWeatherData->Wrap( -1 );
	fgSizer91->Add( m_stWeatherData, 0, wxALL|wxEXPAND, 5 );


	fgSizer90->Add( fgSizer91, 1, wxEXPAND, 5 );

	m_sdbSizer5 = new wxStdDialogButtonSizer();
	m_sdbSizer5OK = new wxButton( this, wxID_OK );
	m_sdbSizer5->AddButton( m_sdbSizer5OK );
	m_sdbSizer5->Realize();

	fgSizer90->Add( m_sdbSizer5, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer661;
	sbSizer661 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("label") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2211;
	fgSizer2211 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer2211->SetFlexibleDirection( wxBOTH );
	fgSizer2211->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_stHeading11 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stHeading11->Wrap( -1 );
	m_stHeading11->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stHeading11->SetToolTip( _("Vessel Heading") );

	fgSizer2211->Add( m_stHeading11, 0, wxALL, 5 );

	m_staticTextKnots122111 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("ºTrue"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots122111->Wrap( -1 );
	m_staticTextKnots122111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer2211->Add( m_staticTextKnots122111, 0, wxALL, 5 );

	m_stSpeed11 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stSpeed11->Wrap( -1 );
	m_stSpeed11->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stSpeed11->SetToolTip( _("Log Speed") );

	fgSizer2211->Add( m_stSpeed11, 0, wxALL, 5 );

	m_staticText81111 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("Kts "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81111->Wrap( -1 );
	m_staticText81111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer2211->Add( m_staticText81111, 0, wxALL, 5 );

	m_stHeading221 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stHeading221->Wrap( -1 );
	m_stHeading221->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stHeading221->SetToolTip( _("ETA") );

	fgSizer2211->Add( m_stHeading221, 0, wxALL, 5 );

	m_staticTextKnots111111 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("ETA "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots111111->Wrap( -1 );
	m_staticTextKnots111111->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer2211->Add( m_staticTextKnots111111, 0, wxALL, 5 );

	m_stSpeed211 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("000.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stSpeed211->Wrap( -1 );
	m_stSpeed211->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stSpeed211->SetToolTip( _("Log Speed") );

	fgSizer2211->Add( m_stSpeed211, 0, wxALL, 5 );

	m_staticText18121 = new wxStaticText( sbSizer661->GetStaticBox(), wxID_ANY, _("N Mi"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText18121->Wrap( -1 );
	m_staticText18121->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	fgSizer2211->Add( m_staticText18121, 0, wxALL, 5 );


	sbSizer661->Add( fgSizer2211, 1, wxEXPAND, 5 );


	fgSizer90->Add( sbSizer661, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer90 );
	this->Layout();

	this->Centre( wxBOTH );
}

CursorPositionDialog::~CursorPositionDialog()
{
}

NewPositionDialog::NewPositionDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer129;
	fgSizer129 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer129->SetFlexibleDirection( wxBOTH );
	fgSizer129->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer119;
	fgSizer119 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer119->AddGrowableCol( 1 );
	fgSizer119->SetFlexibleDirection( wxBOTH );
	fgSizer119->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText140 = new wxStaticText( this, wxID_ANY, _("name"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText140->Wrap( -1 );
	fgSizer119->Add( m_staticText140, 0, wxALL, 5 );

	m_tName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer119->Add( m_tName, 0, wxALL|wxEXPAND, 5 );


	fgSizer129->Add( fgSizer119, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer122;
	fgSizer122 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer122->SetFlexibleDirection( wxBOTH );
	fgSizer122->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText142 = new wxStaticText( this, wxID_ANY, _("latitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText142->Wrap( -1 );
	fgSizer122->Add( m_staticText142, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tLatitudeDegrees = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer122->Add( m_tLatitudeDegrees, 0, wxALL, 5 );

	m_staticText143 = new wxStaticText( this, wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText143->Wrap( -1 );
	fgSizer122->Add( m_staticText143, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tLatitudeMinutes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer122->Add( m_tLatitudeMinutes, 0, wxALL, 5 );

	m_staticText144 = new wxStaticText( this, wxID_ANY, _("minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText144->Wrap( -1 );
	fgSizer122->Add( m_staticText144, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText145 = new wxStaticText( this, wxID_ANY, _("longitude"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	fgSizer122->Add( m_staticText145, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tLongitudeDegrees = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer122->Add( m_tLongitudeDegrees, 0, wxALL, 5 );

	m_staticText146 = new wxStaticText( this, wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText146->Wrap( -1 );
	fgSizer122->Add( m_staticText146, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tLongitudeMinutes = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer122->Add( m_tLongitudeMinutes, 0, wxALL, 5 );

	m_staticText147 = new wxStaticText( this, wxID_ANY, _("minutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText147->Wrap( -1 );
	fgSizer122->Add( m_staticText147, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer129->Add( fgSizer122, 1, wxEXPAND, 5 );

	m_sdbSizer4 = new wxStdDialogButtonSizer();
	m_sdbSizer4OK = new wxButton( this, wxID_OK );
	m_sdbSizer4->AddButton( m_sdbSizer4OK );
	m_sdbSizer4Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer4->AddButton( m_sdbSizer4Cancel );
	m_sdbSizer4->Realize();

	fgSizer129->Add( m_sdbSizer4, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer129 );
	this->Layout();

	this->Centre( wxBOTH );
}

NewPositionDialog::~NewPositionDialog()
{
}

ConfigurationDialogBase::ConfigurationDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer95->AddGrowableCol( 0 );
	fgSizer95->AddGrowableCol( 1 );
	fgSizer95->AddGrowableRow( 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_notebook7 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel24 = new wxPanel( m_notebook7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer106;
	fgSizer106 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer106->AddGrowableCol( 0 );
	fgSizer106->AddGrowableCol( 1 );
	fgSizer106->SetFlexibleDirection( wxBOTH );
	fgSizer106->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer83;
	fgSizer83 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer83->AddGrowableCol( 0 );
	fgSizer83->SetFlexibleDirection( wxBOTH );
	fgSizer83->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Start") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer60;
	fgSizer60 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer60->AddGrowableCol( 0 );
	fgSizer60->SetFlexibleDirection( wxBOTH );
	fgSizer60->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer6;
	fgSizer6 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer6->AddGrowableCol( 0 );
	fgSizer6->SetFlexibleDirection( wxBOTH );
	fgSizer6->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cStart = new wxComboBox( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	fgSizer6->Add( m_cStart, 0, wxALL|wxEXPAND, 5 );


	fgSizer60->Add( fgSizer6, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer111;
	fgSizer111 = new wxFlexGridSizer( 2, 3, 0, 0 );
	fgSizer111->SetFlexibleDirection( wxBOTH );
	fgSizer111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText28 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, _("Date"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText28->Wrap( -1 );
	fgSizer111->Add( m_staticText28, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_dpStartDate = new wxDatePickerCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_ALLOWNONE|wxDP_DEFAULT );
	fgSizer111->Add( m_dpStartDate, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_bGribTime = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, _("Grib Time"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer111->Add( m_bGribTime, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );

	m_staticText30 = new wxStaticText( sbSizer3->GetStaticBox(), wxID_ANY, _("Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer111->Add( m_staticText30, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tpTime = new wxTimePickerCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxDefaultDateTime, wxDefaultPosition, wxDefaultSize, wxDP_DEFAULT );
	fgSizer111->Add( m_tpTime, 0, wxALIGN_CENTER_VERTICAL|wxALL|wxEXPAND, 5 );

	m_bCurrentTime = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, _("Current Time"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer111->Add( m_bCurrentTime, 0, wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 5 );


	fgSizer94->Add( fgSizer111, 1, wxEXPAND, 5 );


	fgSizer60->Add( fgSizer94, 1, wxEXPAND, 5 );


	sbSizer3->Add( fgSizer60, 1, wxEXPAND, 5 );


	fgSizer83->Add( sbSizer3, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer24;
	sbSizer24 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Boat") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer98;
	fgSizer98 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer98->AddGrowableCol( 0 );
	fgSizer98->SetFlexibleDirection( wxBOTH );
	fgSizer98->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_tBoat = new wxTextCtrl( sbSizer24->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer98->Add( m_tBoat, 0, wxALL|wxEXPAND, 5 );

	m_bBoatFilename = new wxButton( sbSizer24->GetStaticBox(), wxID_ANY, _("..."), wxDefaultPosition, wxSize( 30,-1 ), 0 );
	fgSizer98->Add( m_bBoatFilename, 0, wxALL, 5 );

	m_bEditBoat = new wxButton( sbSizer24->GetStaticBox(), wxID_ANY, _("Edit"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	fgSizer98->Add( m_bEditBoat, 0, wxALL, 5 );


	sbSizer24->Add( fgSizer98, 1, wxEXPAND, 5 );


	fgSizer83->Add( sbSizer24, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer23;
	sbSizer23 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Constraints") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer110;
	fgSizer110 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer110->SetFlexibleDirection( wxBOTH );
	fgSizer110->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText20 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("Max Diverted Course"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	fgSizer110->Add( m_staticText20, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxDivertedCourse = new wxSpinCtrl( sbSizer23->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 180, 180 );
	fgSizer110->Add( m_sMaxDivertedCourse, 0, wxALL, 3 );

	m_staticText1181 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1181->Wrap( -1 );
	fgSizer110->Add( m_staticText1181, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText23 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("Max True Wind"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	fgSizer110->Add( m_staticText23, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxTrueWindKnots = new wxSpinCtrl( sbSizer23->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 200, 60 );
	fgSizer110->Add( m_sMaxTrueWindKnots, 0, wxALL, 3 );

	m_staticText128 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("knots"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText128->Wrap( -1 );
	fgSizer110->Add( m_staticText128, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText136 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("Max Apparent Wind"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText136->Wrap( -1 );
	fgSizer110->Add( m_staticText136, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxApparentWindKnots = new wxSpinCtrl( sbSizer23->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 200, 60 );
	fgSizer110->Add( m_sMaxApparentWindKnots, 0, wxALL, 3 );

	m_staticText1282 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("knots"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1282->Wrap( -1 );
	fgSizer110->Add( m_staticText1282, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText27 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("Max Swell"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer110->Add( m_staticText27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxSwellMeters = new wxSpinCtrl( sbSizer23->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 100, 20 );
	fgSizer110->Add( m_sMaxSwellMeters, 0, wxALL, 5 );

	m_staticText129 = new wxStaticText( sbSizer23->GetStaticBox(), wxID_ANY, _("meters"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText129->Wrap( -1 );
	fgSizer110->Add( m_staticText129, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer23->Add( fgSizer110, 1, wxEXPAND, 5 );


	fgSizer83->Add( sbSizer23, 1, wxEXPAND, 5 );


	fgSizer106->Add( fgSizer83, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer112;
	fgSizer112 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer112->AddGrowableCol( 0 );
	fgSizer112->SetFlexibleDirection( wxBOTH );
	fgSizer112->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("End") ), wxVERTICAL );

	m_cEnd = new wxComboBox( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	sbSizer5->Add( m_cEnd, 0, wxALL|wxEXPAND, 5 );


	fgSizer112->Add( sbSizer5, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer251;
	sbSizer251 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Time Step") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer921;
	fgSizer921 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer921->SetFlexibleDirection( wxBOTH );
	fgSizer921->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sTimeStepHours = new wxSpinCtrl( sbSizer251->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 1000, 1 );
	fgSizer921->Add( m_sTimeStepHours, 0, wxALL, 5 );

	m_staticText110 = new wxStaticText( sbSizer251->GetStaticBox(), wxID_ANY, _("h"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText110->Wrap( -1 );
	fgSizer921->Add( m_staticText110, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sTimeStepMinutes = new wxSpinCtrl( sbSizer251->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 60, 1 );
	fgSizer921->Add( m_sTimeStepMinutes, 0, wxALL, 5 );

	m_staticText111 = new wxStaticText( sbSizer251->GetStaticBox(), wxID_ANY, _("m"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText111->Wrap( -1 );
	fgSizer921->Add( m_staticText111, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sTimeStepSeconds = new wxSpinCtrl( sbSizer251->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 60, 0 );
	fgSizer921->Add( m_sTimeStepSeconds, 0, wxALL, 5 );

	m_staticText112 = new wxStaticText( sbSizer251->GetStaticBox(), wxID_ANY, _("s"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText112->Wrap( -1 );
	fgSizer921->Add( m_staticText112, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer251->Add( fgSizer921, 1, wxEXPAND, 5 );


	fgSizer112->Add( sbSizer251, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer117;
	fgSizer117 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer117->SetFlexibleDirection( wxBOTH );
	fgSizer117->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer23;
	fgSizer23 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer23->SetFlexibleDirection( wxBOTH );
	fgSizer23->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbDetectLand = new wxCheckBox( sbSizer28->GetStaticBox(), wxID_ANY, _("Detect Land"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbDetectLand->SetValue(true);
	fgSizer23->Add( m_cbDetectLand, 0, wxALL, 5 );

	m_cbDetectBoundary = new wxCheckBox( sbSizer28->GetStaticBox(), wxID_ANY, _("Detect Boundary"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer23->Add( m_cbDetectBoundary, 0, wxALL, 5 );

	m_cbCurrents = new wxCheckBox( sbSizer28->GetStaticBox(), wxID_ANY, _("Currents"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbCurrents->SetValue(true);
	fgSizer23->Add( m_cbCurrents, 0, wxALL, 5 );

	m_cbOptimizeTacking = new wxCheckBox( sbSizer28->GetStaticBox(), wxID_ANY, _("Optimize Tacking"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer23->Add( m_cbOptimizeTacking, 0, wxALL, 5 );


	fgSizer117->Add( fgSizer23, 1, wxEXPAND, 5 );


	sbSizer28->Add( fgSizer117, 1, wxEXPAND, 5 );


	fgSizer112->Add( sbSizer28, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer15;
	sbSizer15 = new wxStaticBoxSizer( new wxStaticBox( m_panel24, wxID_ANY, _("Data Source") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer58;
	fgSizer58 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer58->SetFlexibleDirection( wxBOTH );
	fgSizer58->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer59;
	fgSizer59 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer59->SetFlexibleDirection( wxBOTH );
	fgSizer59->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbUseGrib = new wxCheckBox( sbSizer15->GetStaticBox(), wxID_ANY, _("Grib"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbUseGrib->SetValue(true);
	fgSizer59->Add( m_cbUseGrib, 0, wxALL, 5 );

	wxStaticBoxSizer* sbSizer34;
	sbSizer34 = new wxStaticBoxSizer( new wxStaticBox( sbSizer15->GetStaticBox(), wxID_ANY, _("Climatology") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer961;
	fgSizer961 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer961->AddGrowableCol( 1 );
	fgSizer961->SetFlexibleDirection( wxBOTH );
	fgSizer961->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxString m_cClimatologyTypeChoices[] = { _("Disable"), _("Currents Only"), _("Cumulative Map"), _("Cumulative - Calms"), _("Most Likely"), _("Average") };
	int m_cClimatologyTypeNChoices = sizeof( m_cClimatologyTypeChoices ) / sizeof( wxString );
	m_cClimatologyType = new wxChoice( sbSizer34->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cClimatologyTypeNChoices, m_cClimatologyTypeChoices, 0 );
	m_cClimatologyType->SetSelection( 1 );
	m_cClimatologyType->Enable( false );

	fgSizer961->Add( m_cClimatologyType, 0, wxALL|wxEXPAND, 5 );


	sbSizer34->Add( fgSizer961, 1, wxEXPAND, 5 );


	fgSizer59->Add( sbSizer34, 1, wxEXPAND, 5 );


	fgSizer58->Add( fgSizer59, 1, wxEXPAND, 5 );

	m_cbAllowDataDeficient = new wxCheckBox( sbSizer15->GetStaticBox(), wxID_ANY, _("Last Valid if Data Deficient"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer58->Add( m_cbAllowDataDeficient, 0, wxALL, 5 );


	sbSizer15->Add( fgSizer58, 1, wxEXPAND, 5 );


	fgSizer112->Add( sbSizer15, 1, wxEXPAND, 5 );

	m_bClose = new wxButton( m_panel24, wxID_ANY, _(" Close"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer112->Add( m_bClose, 0, wxALIGN_RIGHT|wxALL, 5 );


	fgSizer106->Add( fgSizer112, 1, wxEXPAND, 5 );


	m_panel24->SetSizer( fgSizer106 );
	m_panel24->Layout();
	fgSizer106->Fit( m_panel24 );
	m_notebook7->AddPage( m_panel24, _("Basic"), true );
	m_panel25 = new wxPanel( m_notebook7, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1072;
	fgSizer1072 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1072->AddGrowableCol( 0 );
	fgSizer1072->AddGrowableCol( 1 );
	fgSizer1072->SetFlexibleDirection( wxBOTH );
	fgSizer1072->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer108;
	fgSizer108 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer108->AddGrowableCol( 0 );
	fgSizer108->SetFlexibleDirection( wxBOTH );
	fgSizer108->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer281;
	sbSizer281 = new wxStaticBoxSizer( new wxStaticBox( m_panel25, wxID_ANY, _("Constraints") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer951;
	fgSizer951 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer951->SetFlexibleDirection( wxBOTH );
	fgSizer951->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText26 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Max Latitude +-"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	fgSizer951->Add( m_staticText26, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxLatitude = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 90, 90 );
	fgSizer951->Add( m_sMaxLatitude, 0, wxALL, 5 );

	m_staticText131 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	fgSizer951->Add( m_staticText131, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText120 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Wind vs Current"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText120->Wrap( -1 );
	fgSizer951->Add( m_staticText120, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sWindVSCurrent = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer951->Add( m_sWindVSCurrent, 0, wxALL, 5 );


	fgSizer951->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText119 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Max Course Angle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText119->Wrap( -1 );
	fgSizer951->Add( m_staticText119, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxCourseAngle = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 180, 180 );
	fgSizer951->Add( m_sMaxCourseAngle, 0, wxALL, 3 );

	m_staticText1251 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1251->Wrap( -1 );
	fgSizer951->Add( m_staticText1251, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText124 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Max Search Angle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText124->Wrap( -1 );
	fgSizer951->Add( m_staticText124, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sMaxSearchAngle = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 180, 120 );
	fgSizer951->Add( m_sMaxSearchAngle, 0, wxALL, 3 );

	m_staticText125 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText125->Wrap( -1 );
	fgSizer951->Add( m_staticText125, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer281->Add( fgSizer951, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer941;
	fgSizer941 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer941->SetFlexibleDirection( wxBOTH );
	fgSizer941->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbAvoidCycloneTracks = new wxCheckBox( sbSizer281->GetStaticBox(), wxID_ANY, _("Avoid cyclone tracks (climatology)"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	m_cbAvoidCycloneTracks->SetValue(true);
	fgSizer941->Add( m_cbAvoidCycloneTracks, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer952;
	fgSizer952 = new wxFlexGridSizer( 0, 5, 0, 0 );
	fgSizer952->SetFlexibleDirection( wxBOTH );
	fgSizer952->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1281 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("within"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1281->Wrap( -1 );
	fgSizer952->Add( m_staticText1281, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sCycloneMonths = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 6, 3 );
	fgSizer952->Add( m_sCycloneMonths, 0, wxALL, 5 );

	m_staticText1291 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Months"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1291->Wrap( -1 );
	fgSizer952->Add( m_staticText1291, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sCycloneDays = new wxSpinCtrl( sbSizer281->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 183, 0 );
	fgSizer952->Add( m_sCycloneDays, 0, wxALL, 5 );

	m_staticText130 = new wxStaticText( sbSizer281->GetStaticBox(), wxID_ANY, _("Days"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText130->Wrap( -1 );
	fgSizer952->Add( m_staticText130, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer941->Add( fgSizer952, 1, wxEXPAND, 5 );


	sbSizer281->Add( fgSizer941, 1, wxEXPAND, 5 );


	fgSizer108->Add( sbSizer281, 1, wxEXPAND, 5 );


	fgSizer1072->Add( fgSizer108, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer109;
	fgSizer109 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer109->AddGrowableCol( 0 );
	fgSizer109->SetFlexibleDirection( wxBOTH );
	fgSizer109->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer29;
	sbSizer29 = new wxStaticBoxSizer( new wxStaticBox( m_panel25, wxID_ANY, _("Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer113;
	fgSizer113 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer113->SetFlexibleDirection( wxBOTH );
	fgSizer113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1121;
	fgSizer1121 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1121->SetFlexibleDirection( wxBOTH );
	fgSizer1121->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbInvertedRegions = new wxCheckBox( sbSizer29->GetStaticBox(), wxID_ANY, _("Inverted Regions"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer1121->Add( m_cbInvertedRegions, 0, wxALL, 5 );

	m_cbAnchoring = new wxCheckBox( sbSizer29->GetStaticBox(), wxID_ANY, _("Anchoring"), wxDefaultPosition, wxDefaultSize, wxCHK_3STATE );
	fgSizer1121->Add( m_cbAnchoring, 0, wxALL, 5 );


	fgSizer113->Add( fgSizer1121, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer115;
	fgSizer115 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer115->SetFlexibleDirection( wxBOTH );
	fgSizer115->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText139 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("Integrator"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText139->Wrap( -1 );
	fgSizer115->Add( m_staticText139, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_cIntegrator = new wxComboBox( sbSizer29->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	m_cIntegrator->Append( _("Newton") );
	m_cIntegrator->Append( _("Runge Kutta") );
	fgSizer115->Add( m_cIntegrator, 0, wxALL, 5 );


	fgSizer113->Add( fgSizer115, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1071;
	fgSizer1071 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer1071->SetFlexibleDirection( wxBOTH );
	fgSizer1071->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1292 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("Wind strength is"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1292->Wrap( -1 );
	fgSizer1071->Add( m_staticText1292, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sWindStrength = new wxSpinCtrl( sbSizer29->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 999, 100 );
	fgSizer1071->Add( m_sWindStrength, 0, wxALL, 5 );

	m_staticText1301 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("percent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1301->Wrap( -1 );
	fgSizer1071->Add( m_staticText1301, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer113->Add( fgSizer1071, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1151;
	fgSizer1151 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer1151->SetFlexibleDirection( wxBOTH );
	fgSizer1151->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText24 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("Tacking Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	fgSizer1151->Add( m_staticText24, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sTackingTime = new wxSpinCtrl( sbSizer29->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 1000, 1 );
	fgSizer1151->Add( m_sTackingTime, 0, wxALL, 5 );

	m_staticText121 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	fgSizer1151->Add( m_staticText121, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer113->Add( fgSizer1151, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer11511;
	fgSizer11511 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer11511->SetFlexibleDirection( wxBOTH );
	fgSizer11511->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText241 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("Safety Margin From Land"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText241->Wrap( -1 );
	fgSizer11511->Add( m_staticText241, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sSafetyMarginLand = new wxSpinCtrl( sbSizer29->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer11511->Add( m_sSafetyMarginLand, 0, wxALL, 5 );

	m_staticText1211 = new wxStaticText( sbSizer29->GetStaticBox(), wxID_ANY, _("NM"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1211->Wrap( -1 );
	fgSizer11511->Add( m_staticText1211, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer113->Add( fgSizer11511, 1, wxEXPAND, 5 );


	sbSizer29->Add( fgSizer113, 1, wxEXPAND, 5 );


	fgSizer109->Add( sbSizer29, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( m_panel25, wxID_ANY, _("Courses (relative to true wind)") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer107;
	fgSizer107 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer107->SetFlexibleDirection( wxBOTH );
	fgSizer107->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText113 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText113->Wrap( -1 );
	fgSizer107->Add( m_staticText113, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sFromDegree = new wxSpinCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 180, 0 );
	fgSizer107->Add( m_sFromDegree, 0, wxALL, 5 );

	m_staticText115 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("To"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	fgSizer107->Add( m_staticText115, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sToDegree = new wxSpinCtrl( sbSizer7->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 180, 180 );
	fgSizer107->Add( m_sToDegree, 0, wxALL, 5 );

	m_staticText117 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("By"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText117->Wrap( -1 );
	fgSizer107->Add( m_staticText117, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tByDegrees = new wxTextCtrl( sbSizer7->GetStaticBox(), wxID_ANY, _("5"), wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer107->Add( m_tByDegrees, 0, wxALL, 5 );

	m_staticText118 = new wxStaticText( sbSizer7->GetStaticBox(), wxID_ANY, _("Degrees"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText118->Wrap( -1 );
	fgSizer107->Add( m_staticText118, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	sbSizer7->Add( fgSizer107, 1, wxEXPAND, 5 );


	fgSizer109->Add( sbSizer7, 1, wxEXPAND, 5 );

	m_bResetAdvanced = new wxButton( m_panel25, wxID_ANY, _("Reset all Advanced Parameters"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer109->Add( m_bResetAdvanced, 0, wxALL, 5 );


	fgSizer1072->Add( fgSizer109, 1, wxEXPAND, 5 );


	m_panel25->SetSizer( fgSizer1072 );
	m_panel25->Layout();
	fgSizer1072->Fit( m_panel25 );
	m_notebook7->AddPage( m_panel25, _("Advanced"), false );

	fgSizer95->Add( m_notebook7, 1, wxEXPAND | wxALL, 5 );


	this->SetSizer( fgSizer95 );
	this->Layout();
	fgSizer95->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cStart->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cStart->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_dpStartDate->Connect( wxEVT_DATE_CHANGED, wxDateEventHandler( ConfigurationDialogBase::OnUpdateDate ), NULL, this );
	m_bGribTime->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnGribTime ), NULL, this );
	m_tpTime->Connect( wxEVT_TIME_CHANGED, wxDateEventHandler( ConfigurationDialogBase::OnUpdateTime ), NULL, this );
	m_bCurrentTime->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnCurrentTime ), NULL, this );
	m_tBoat->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bBoatFilename->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnBoatFilename ), NULL, this );
	m_bEditBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnEditBoat ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxTrueWindKnots->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxTrueWindKnots->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxApparentWindKnots->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxApparentWindKnots->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cEnd->Connect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cEnd->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_sTimeStepHours->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepHours->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTimeStepMinutes->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepMinutes->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTimeStepSeconds->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepSeconds->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbDetectLand->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbDetectBoundary->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbCurrents->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbOptimizeTacking->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbUseGrib->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cClimatologyType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbAllowDataDeficient->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnClose ), NULL, this );
	m_sMaxLatitude->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxLatitude->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sWindVSCurrent->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sWindVSCurrent->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbAvoidCycloneTracks->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnAvoidCyclones ), NULL, this );
	m_sCycloneMonths->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sCycloneMonths->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sCycloneDays->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sCycloneDays->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbInvertedRegions->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbAnchoring->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cIntegrator->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_sWindStrength->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sSafetyMarginLand->Connect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sSafetyMarginLand->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sFromDegree->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sToDegree->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_tByDegrees->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bResetAdvanced->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnResetAdvanced ), NULL, this );
}

ConfigurationDialogBase::~ConfigurationDialogBase()
{
	// Disconnect Events
	m_cStart->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cStart->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_dpStartDate->Disconnect( wxEVT_DATE_CHANGED, wxDateEventHandler( ConfigurationDialogBase::OnUpdateDate ), NULL, this );
	m_bGribTime->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnGribTime ), NULL, this );
	m_tpTime->Disconnect( wxEVT_TIME_CHANGED, wxDateEventHandler( ConfigurationDialogBase::OnUpdateTime ), NULL, this );
	m_bCurrentTime->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnCurrentTime ), NULL, this );
	m_tBoat->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bBoatFilename->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnBoatFilename ), NULL, this );
	m_bEditBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnEditBoat ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxDivertedCourse->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxTrueWindKnots->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxTrueWindKnots->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxApparentWindKnots->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxApparentWindKnots->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSwellMeters->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cEnd->Disconnect( wxEVT_COMMAND_COMBOBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cEnd->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_sTimeStepHours->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepHours->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTimeStepMinutes->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepMinutes->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTimeStepSeconds->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTimeStepSeconds->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbDetectLand->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbDetectBoundary->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbCurrents->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbOptimizeTacking->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbUseGrib->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cClimatologyType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbAllowDataDeficient->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnClose ), NULL, this );
	m_sMaxLatitude->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxLatitude->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sWindVSCurrent->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sWindVSCurrent->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxCourseAngle->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sMaxSearchAngle->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbAvoidCycloneTracks->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnAvoidCyclones ), NULL, this );
	m_sCycloneMonths->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sCycloneMonths->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sCycloneDays->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sCycloneDays->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_cbInvertedRegions->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cbAnchoring->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_cIntegrator->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_sWindStrength->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sTackingTime->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sSafetyMarginLand->Disconnect( wxEVT_MOTION, wxMouseEventHandler( ConfigurationDialogBase::EnableSpin ), NULL, this );
	m_sSafetyMarginLand->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sFromDegree->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_sToDegree->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( ConfigurationDialogBase::OnUpdateSpin ), NULL, this );
	m_tByDegrees->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( ConfigurationDialogBase::OnUpdate ), NULL, this );
	m_bResetAdvanced->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase::OnResetAdvanced ), NULL, this );

}

ConfigurationDialogBase2::ConfigurationDialogBase2( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer76;
	fgSizer76 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer76->AddGrowableCol( 0 );
	fgSizer76->AddGrowableRow( 0 );
	fgSizer76->SetFlexibleDirection( wxBOTH );
	fgSizer76->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_notebookConfigurations = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel8 = new wxPanel( m_notebookConfigurations, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer98;
	fgSizer98 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer98->SetFlexibleDirection( wxBOTH );
	fgSizer98->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer77;
	fgSizer77 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer77->SetFlexibleDirection( wxBOTH );
	fgSizer77->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText108 = new wxStaticText( m_panel8, wxID_ANY, _("Starting"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText108->Wrap( -1 );
	fgSizer77->Add( m_staticText108, 0, wxALL, 5 );

	m_stStartDateTime = new wxStaticText( m_panel8, wxID_ANY, _("N/A"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stStartDateTime->Wrap( -1 );
	fgSizer77->Add( m_stStartDateTime, 0, wxALL, 5 );


	fgSizer77->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText121 = new wxStaticText( m_panel8, wxID_ANY, _("For"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	fgSizer77->Add( m_staticText121, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tStartDays = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer77->Add( m_tStartDays, 0, wxALL, 5 );

	m_staticText122 = new wxStaticText( m_panel8, wxID_ANY, _("day(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText122->Wrap( -1 );
	fgSizer77->Add( m_staticText122, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer77->Add( 0, 0, 1, wxEXPAND, 5 );

	m_tStartHours = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer77->Add( m_tStartHours, 0, wxALL, 5 );

	m_staticText123 = new wxStaticText( m_panel8, wxID_ANY, _("hour(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText123->Wrap( -1 );
	fgSizer77->Add( m_staticText123, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText124 = new wxStaticText( m_panel8, wxID_ANY, _("Spaced"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText124->Wrap( -1 );
	fgSizer77->Add( m_staticText124, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tStartSpacingDays = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer77->Add( m_tStartSpacingDays, 0, wxALL, 5 );

	m_staticText125 = new wxStaticText( m_panel8, wxID_ANY, _("day(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText125->Wrap( -1 );
	fgSizer77->Add( m_staticText125, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer77->Add( 0, 0, 1, wxEXPAND, 5 );

	m_tStartSpacingHours = new wxTextCtrl( m_panel8, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 40,-1 ), 0 );
	fgSizer77->Add( m_tStartSpacingHours, 0, wxALL, 5 );

	m_staticText126 = new wxStaticText( m_panel8, wxID_ANY, _("Hour(s)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText126->Wrap( -1 );
	fgSizer77->Add( m_staticText126, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer98->Add( fgSizer77, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button41 = new wxButton( m_panel8, wxID_ANY, _("Once"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_button41, 0, wxALL, 5 );

	m_button38 = new wxButton( m_panel8, wxID_ANY, _("Daily"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_button38, 0, wxALL, 5 );

	m_button39 = new wxButton( m_panel8, wxID_ANY, _("Weekly"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_button39, 0, wxALL, 5 );

	m_button40 = new wxButton( m_panel8, wxID_ANY, _("Monthly"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_button40, 0, wxALL, 5 );


	fgSizer98->Add( fgSizer101, 1, wxEXPAND, 5 );


	m_panel8->SetSizer( fgSizer98 );
	m_panel8->Layout();
	fgSizer98->Fit( m_panel8 );
	m_notebookConfigurations->AddPage( m_panel8, _("Start Time"), true );
	m_pRoutes = new wxPanel( m_notebookConfigurations, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer62;
	fgSizer62 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer62->AddGrowableCol( 0 );
	fgSizer62->AddGrowableRow( 0 );
	fgSizer62->SetFlexibleDirection( wxBOTH );
	fgSizer62->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer11;
	sbSizer11 = new wxStaticBoxSizer( new wxStaticBox( m_pRoutes, wxID_ANY, _("Sources") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer64;
	fgSizer64 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer64->AddGrowableCol( 0 );
	fgSizer64->AddGrowableCol( 1 );
	fgSizer64->AddGrowableRow( 0 );
	fgSizer64->SetFlexibleDirection( wxBOTH );
	fgSizer64->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer66;
	fgSizer66 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer66->AddGrowableCol( 0 );
	fgSizer66->AddGrowableRow( 0 );
	fgSizer66->SetFlexibleDirection( wxBOTH );
	fgSizer66->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lSources = new wxListBox( sbSizer11->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer66->Add( m_lSources, 0, wxALL|wxEXPAND, 5 );


	fgSizer64->Add( fgSizer66, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer19;
	sbSizer19 = new wxStaticBoxSizer( new wxStaticBox( sbSizer11->GetStaticBox(), wxID_ANY, _("Destinations") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer72;
	fgSizer72 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer72->AddGrowableCol( 0 );
	fgSizer72->AddGrowableRow( 0 );
	fgSizer72->SetFlexibleDirection( wxBOTH );
	fgSizer72->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lDestinations = new wxListBox( sbSizer19->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, wxLB_MULTIPLE );
	m_lDestinations->SetMinSize( wxSize( 100,-1 ) );

	fgSizer72->Add( m_lDestinations, 0, wxALL|wxEXPAND, 5 );


	sbSizer19->Add( fgSizer72, 1, wxEXPAND, 5 );


	fgSizer64->Add( sbSizer19, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( sbSizer11->GetStaticBox(), wxID_ANY, _("Auto Connect") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer97;
	fgSizer97 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer97->SetFlexibleDirection( wxBOTH );
	fgSizer97->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1241 = new wxStaticText( sbSizer28->GetStaticBox(), wxID_ANY, _("Within"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1241->Wrap( -1 );
	fgSizer97->Add( m_staticText1241, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tMiles = new wxTextCtrl( sbSizer28->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer97->Add( m_tMiles, 0, wxALL, 5 );

	m_staticText1251 = new wxStaticText( sbSizer28->GetStaticBox(), wxID_ANY, _("Nautical Miles"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1251->Wrap( -1 );
	fgSizer97->Add( m_staticText1251, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_bConnect = new wxButton( sbSizer28->GetStaticBox(), wxID_ANY, _("Connect"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer97->Add( m_bConnect, 0, wxALL, 5 );


	sbSizer28->Add( fgSizer97, 1, wxEXPAND, 5 );


	fgSizer64->Add( sbSizer28, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer67;
	fgSizer67 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer67->SetFlexibleDirection( wxBOTH );
	fgSizer67->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bDisconnectAll = new wxButton( sbSizer11->GetStaticBox(), wxID_ANY, _("Disconnect All"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer67->Add( m_bDisconnectAll, 0, wxALL, 5 );


	fgSizer64->Add( fgSizer67, 1, wxEXPAND, 5 );


	sbSizer11->Add( fgSizer64, 1, wxEXPAND, 5 );


	fgSizer62->Add( sbSizer11, 1, wxEXPAND, 5 );


	m_pRoutes->SetSizer( fgSizer62 );
	m_pRoutes->Layout();
	fgSizer62->Fit( m_pRoutes );
	m_notebookConfigurations->AddPage( m_pRoutes, _("Routes"), false );
	m_panel9 = new wxPanel( m_notebookConfigurations, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer81;
	fgSizer81 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer81->AddGrowableCol( 0 );
	fgSizer81->AddGrowableRow( 0 );
	fgSizer81->SetFlexibleDirection( wxBOTH );
	fgSizer81->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lBoats = new wxListBox( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer81->Add( m_lBoats, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer82;
	fgSizer82 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer82->SetFlexibleDirection( wxBOTH );
	fgSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bAddBoat = new wxButton( m_panel9, wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_bAddBoat, 0, wxALL, 5 );

	m_bRemoveBoat = new wxButton( m_panel9, wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_bRemoveBoat, 0, wxALL, 5 );


	fgSizer81->Add( fgSizer82, 1, wxEXPAND, 5 );


	m_panel9->SetSizer( fgSizer81 );
	m_panel9->Layout();
	fgSizer81->Fit( m_panel9 );
	m_notebookConfigurations->AddPage( m_panel9, _("Boats"), false );
	m_panel17 = new wxPanel( m_notebookConfigurations, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer109;
	fgSizer109 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer109->SetFlexibleDirection( wxBOTH );
	fgSizer109->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer108;
	fgSizer108 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer108->SetFlexibleDirection( wxBOTH );
	fgSizer108->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText131 = new wxStaticText( m_panel17, wxID_ANY, _("From"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText131->Wrap( -1 );
	fgSizer108->Add( m_staticText131, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sWindStrengthMin = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 100 );
	fgSizer108->Add( m_sWindStrengthMin, 0, wxALL, 5 );

	m_staticText134 = new wxStaticText( m_panel17, wxID_ANY, _("percent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	fgSizer108->Add( m_staticText134, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText132 = new wxStaticText( m_panel17, wxID_ANY, _("To"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText132->Wrap( -1 );
	fgSizer108->Add( m_staticText132, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sWindStrengthMax = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 999, 100 );
	fgSizer108->Add( m_sWindStrengthMax, 0, wxALL, 5 );

	m_staticText1341 = new wxStaticText( m_panel17, wxID_ANY, _("percent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1341->Wrap( -1 );
	fgSizer108->Add( m_staticText1341, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticText133 = new wxStaticText( m_panel17, wxID_ANY, _("By"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText133->Wrap( -1 );
	fgSizer108->Add( m_staticText133, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_sWindStrengthStep = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 999, 10 );
	fgSizer108->Add( m_sWindStrengthStep, 0, wxALL, 5 );

	m_staticText1342 = new wxStaticText( m_panel17, wxID_ANY, _("percent"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1342->Wrap( -1 );
	fgSizer108->Add( m_staticText1342, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer109->Add( fgSizer108, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer111;
	fgSizer111 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer111->SetFlexibleDirection( wxBOTH );
	fgSizer111->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button46 = new wxButton( m_panel17, wxID_ANY, _("100"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer111->Add( m_button46, 0, wxALL, 5 );

	m_button47 = new wxButton( m_panel17, wxID_ANY, _("80 to 120"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer111->Add( m_button47, 0, wxALL, 5 );


	fgSizer109->Add( fgSizer111, 1, wxEXPAND, 5 );


	m_panel17->SetSizer( fgSizer109 );
	m_panel17->Layout();
	fgSizer109->Fit( m_panel17 );
	m_notebookConfigurations->AddPage( m_panel17, _("Wind Strength"), false );

	fgSizer76->Add( m_notebookConfigurations, 1, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer78;
	fgSizer78 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer78->SetFlexibleDirection( wxBOTH );
	fgSizer78->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bInformation = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer78->Add( m_bInformation, 0, wxALL, 5 );

	m_bReset = new wxButton( this, wxID_ANY, _("Reset"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer78->Add( m_bReset, 0, wxALL, 5 );

	m_bGenerate = new wxButton( this, wxID_ANY, _("Generate"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer78->Add( m_bGenerate, 0, wxALL, 5 );

	m_bClose = new wxButton( this, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer78->Add( m_bClose, 0, wxALL, 5 );


	fgSizer76->Add( fgSizer78, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer76 );
	this->Layout();
	fgSizer76->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_button41->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnOnce ), NULL, this );
	m_button38->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnDaily ), NULL, this );
	m_button39->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnWeekly ), NULL, this );
	m_button40->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnMonthly ), NULL, this );
	m_lSources->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase2::OnSources ), NULL, this );
	m_lDestinations->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase2::OnDestinations ), NULL, this );
	m_bConnect->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnConnect ), NULL, this );
	m_bDisconnectAll->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnDisconnectAll ), NULL, this );
	m_bAddBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnAddBoat ), NULL, this );
	m_bRemoveBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnRemoveBoat ), NULL, this );
	m_button46->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::On100 ), NULL, this );
	m_button47->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::On80to120 ), NULL, this );
	m_bInformation->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnInformation ), NULL, this );
	m_bReset->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnReset ), NULL, this );
	m_bGenerate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnGenerate ), NULL, this );
	m_bClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnClose ), NULL, this );
}

ConfigurationDialogBase2::~ConfigurationDialogBase2()
{
	// Disconnect Events
	m_button41->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnOnce ), NULL, this );
	m_button38->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnDaily ), NULL, this );
	m_button39->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnWeekly ), NULL, this );
	m_button40->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnMonthly ), NULL, this );
	m_lSources->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase2::OnSources ), NULL, this );
	m_lDestinations->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( ConfigurationDialogBase2::OnDestinations ), NULL, this );
	m_bConnect->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnConnect ), NULL, this );
	m_bDisconnectAll->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnDisconnectAll ), NULL, this );
	m_bAddBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnAddBoat ), NULL, this );
	m_bRemoveBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnRemoveBoat ), NULL, this );
	m_button46->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::On100 ), NULL, this );
	m_button47->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::On80to120 ), NULL, this );
	m_bInformation->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnInformation ), NULL, this );
	m_bReset->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnReset ), NULL, this );
	m_bGenerate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnGenerate ), NULL, this );
	m_bClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ConfigurationDialogBase2::OnClose ), NULL, this );

}

RoutePositionDialog::RoutePositionDialog( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 400,-1 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer90;
	fgSizer90 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer90->SetFlexibleDirection( wxBOTH );
	fgSizer90->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer91->AddGrowableCol( 1 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText134 = new wxStaticText( this, wxID_ANY, _("Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	fgSizer91->Add( m_staticText134, 0, wxALL, 5 );

	m_stTime = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stTime->Wrap( -1 );
	fgSizer91->Add( m_stTime, 0, wxALL|wxEXPAND, 5 );

	m_staticDuration = new wxStaticText( this, wxID_ANY, _("Duration"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticDuration->Wrap( -1 );
	fgSizer91->Add( m_staticDuration, 0, wxALL, 5 );

	m_stDuration = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stDuration->Wrap( -1 );
	fgSizer91->Add( m_stDuration, 0, wxALL|wxEXPAND, 5 );

	m_staticText128 = new wxStaticText( this, wxID_ANY, _("Position"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText128->Wrap( -1 );
	fgSizer91->Add( m_staticText128, 0, wxALL, 5 );

	m_stPosition = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stPosition->Wrap( 120 );
	fgSizer91->Add( m_stPosition, 0, wxALL|wxEXPAND, 5 );

	m_staticText12816 = new wxStaticText( this, wxID_ANY, _("Boat Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12816->Wrap( -1 );
	fgSizer91->Add( m_staticText12816, 0, wxALL, 5 );

	m_stBoatSpeed = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stBoatSpeed->Wrap( 120 );
	fgSizer91->Add( m_stBoatSpeed, 0, wxALL, 5 );

	m_staticText1281 = new wxStaticText( this, wxID_ANY, _("True Wind Speed (TWS)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1281->Wrap( -1 );
	fgSizer91->Add( m_staticText1281, 0, wxALL, 5 );

	m_stTWS = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stTWS->Wrap( 120 );
	fgSizer91->Add( m_stTWS, 0, wxALL, 5 );

	m_staticText12812 = new wxStaticText( this, wxID_ANY, _("Apparent Wind Speed (AWS)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12812->Wrap( -1 );
	fgSizer91->Add( m_staticText12812, 0, wxALL, 5 );

	m_stAWS = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stAWS->Wrap( 120 );
	fgSizer91->Add( m_stAWS, 0, wxALL, 5 );

	m_staticText12811 = new wxStaticText( this, wxID_ANY, _("True Wind Angle (TWA)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12811->Wrap( -1 );
	fgSizer91->Add( m_staticText12811, 0, wxALL, 5 );

	m_stTWA = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stTWA->Wrap( 120 );
	fgSizer91->Add( m_stTWA, 0, wxALL, 5 );

	m_staticText12813 = new wxStaticText( this, wxID_ANY, _("Apparent Wind Angle (AWA)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12813->Wrap( -1 );
	fgSizer91->Add( m_staticText12813, 0, wxALL, 5 );

	m_stAWA = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stAWA->Wrap( 120 );
	fgSizer91->Add( m_stAWA, 0, wxALL, 5 );

	m_staticText12814 = new wxStaticText( this, wxID_ANY, _("Waves Height"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12814->Wrap( -1 );
	fgSizer91->Add( m_staticText12814, 0, wxALL, 5 );

	m_stWaves = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stWaves->Wrap( 120 );
	fgSizer91->Add( m_stWaves, 0, wxALL, 5 );

	m_staticText12815 = new wxStaticText( this, wxID_ANY, _("Wind Gust"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12815->Wrap( -1 );
	fgSizer91->Add( m_staticText12815, 0, wxALL, 5 );

	m_stWindGust = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), 0 );
	m_stWindGust->Wrap( 120 );
	fgSizer91->Add( m_stWindGust, 0, wxALL, 5 );

	m_staticText124 = new wxStaticText( this, wxID_ANY, _("Polar"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText124->Wrap( -1 );
	fgSizer91->Add( m_staticText124, 0, wxALL, 5 );

	m_stPolar = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stPolar->Wrap( -1 );
	fgSizer91->Add( m_stPolar, 0, wxALL|wxEXPAND, 5 );

	m_staticText130 = new wxStaticText( this, wxID_ANY, _("Sail Changes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText130->Wrap( -1 );
	fgSizer91->Add( m_staticText130, 0, wxALL, 5 );

	m_stSailChanges = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stSailChanges->Wrap( -1 );
	fgSizer91->Add( m_stSailChanges, 0, wxALL|wxEXPAND, 5 );

	m_staticText126 = new wxStaticText( this, wxID_ANY, _("Tacks"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText126->Wrap( -1 );
	fgSizer91->Add( m_staticText126, 0, wxALL, 5 );

	m_stTacks = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stTacks->Wrap( -1 );
	fgSizer91->Add( m_stTacks, 0, wxALL|wxEXPAND, 5 );

	m_staticText122 = new wxStaticText( this, wxID_ANY, _("Weather Data"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText122->Wrap( -1 );
	fgSizer91->Add( m_staticText122, 0, wxALL, 5 );

	m_stWeatherData = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stWeatherData->Wrap( -1 );
	fgSizer91->Add( m_stWeatherData, 0, wxALL|wxEXPAND, 5 );


	fgSizer90->Add( fgSizer91, 1, wxEXPAND, 5 );

	m_sdbSizer5 = new wxStdDialogButtonSizer();
	m_sdbSizer5OK = new wxButton( this, wxID_OK );
	m_sdbSizer5->AddButton( m_sdbSizer5OK );
	m_sdbSizer5->Realize();

	fgSizer90->Add( m_sdbSizer5, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer90 );
	this->Layout();

	this->Centre( wxBOTH );
}

RoutePositionDialog::~RoutePositionDialog()
{
}

FilterRoutesDialogBase::FilterRoutesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer95;
	fgSizer95 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer95->SetFlexibleDirection( wxBOTH );
	fgSizer95->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer29;
	sbSizer29 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Category") ), wxVERTICAL );

	wxArrayString m_cCategoryChoices;
	m_cCategory = new wxChoice( sbSizer29->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cCategoryChoices, 0 );
	m_cCategory->SetSelection( 0 );
	sbSizer29->Add( m_cCategory, 0, wxALL|wxEXPAND, 5 );


	fgSizer95->Add( sbSizer29, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Filter") ), wxVERTICAL );

	m_tFilter = new wxTextCtrl( sbSizer28->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer28->Add( m_tFilter, 0, wxALL|wxEXPAND, 5 );


	fgSizer95->Add( sbSizer28, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer99;
	fgSizer99 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer99->SetFlexibleDirection( wxBOTH );
	fgSizer99->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button48 = new wxButton( this, wxID_ANY, _("Reset All"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer99->Add( m_button48, 0, wxALL, 5 );

	m_bDone = new wxButton( this, wxID_ANY, _("Done"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer99->Add( m_bDone, 0, wxALL, 5 );


	fgSizer95->Add( fgSizer99, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer95 );
	this->Layout();
	fgSizer95->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cCategory->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FilterRoutesDialogBase::OnCategory ), NULL, this );
	m_tFilter->Connect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FilterRoutesDialogBase::OnFilterText ), NULL, this );
	m_button48->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FilterRoutesDialogBase::OnResetAll ), NULL, this );
	m_bDone->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FilterRoutesDialogBase::OnDone ), NULL, this );
}

FilterRoutesDialogBase::~FilterRoutesDialogBase()
{
	// Disconnect Events
	m_cCategory->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( FilterRoutesDialogBase::OnCategory ), NULL, this );
	m_tFilter->Disconnect( wxEVT_COMMAND_TEXT_UPDATED, wxCommandEventHandler( FilterRoutesDialogBase::OnFilterText ), NULL, this );
	m_button48->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FilterRoutesDialogBase::OnResetAll ), NULL, this );
	m_bDone->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( FilterRoutesDialogBase::OnDone ), NULL, this );

}

BoatDialogBase::BoatDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_fgSizer = new wxFlexGridSizer( 1, 0, 0, 0 );
	m_fgSizer->AddGrowableCol( 0 );
	m_fgSizer->AddGrowableRow( 0 );
	m_fgSizer->SetFlexibleDirection( wxBOTH );
	m_fgSizer->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_splitter2 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter2->SetSashGravity( 1 );
	m_splitter2->Connect( wxEVT_IDLE, wxIdleEventHandler( BoatDialogBase::m_splitter2OnIdle ), NULL, this );
	m_splitter2->SetMinimumPaneSize( 100 );

	m_panel20 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer106;
	fgSizer106 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer106->AddGrowableCol( 0 );
	fgSizer106->AddGrowableRow( 0 );
	fgSizer106->SetFlexibleDirection( wxBOTH );
	fgSizer106->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_nNotebook = new wxNotebook( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_plot = new wxPanel( m_nNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer18->AddGrowableCol( 0 );
	fgSizer18->AddGrowableRow( 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_PlotWindow = new wxScrolledWindow( m_plot, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxHSCROLL|wxVSCROLL );
	m_PlotWindow->SetScrollRate( 5, 5 );
	m_PlotWindow->SetMinSize( wxSize( 200,200 ) );

	fgSizer18->Add( m_PlotWindow, 1, wxEXPAND, 5 );


	m_plot->SetSizer( fgSizer18 );
	m_plot->Layout();
	fgSizer18->Fit( m_plot );
	m_nNotebook->AddPage( m_plot, _("Plot"), true );
	m_panel10 = new wxPanel( m_nNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer45->AddGrowableCol( 0 );
	fgSizer45->AddGrowableRow( 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_CrossOverChart = new wxScrolledWindow( m_panel10, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_CrossOverChart->SetScrollRate( 5, 5 );
	fgSizer45->Add( m_CrossOverChart, 1, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer107;
	fgSizer107 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer107->AddGrowableCol( 3 );
	fgSizer107->SetFlexibleDirection( wxBOTH );
	fgSizer107->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText137 = new wxStaticText( m_panel10, wxID_ANY, _("Overlap"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText137->Wrap( -1 );
	fgSizer107->Add( m_staticText137, 0, wxALL, 5 );

	m_sOverlapPercentage = new wxSpinCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 100, 0 );
	fgSizer107->Add( m_sOverlapPercentage, 0, wxALL, 5 );

	m_staticText138 = new wxStaticText( m_panel10, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText138->Wrap( -1 );
	fgSizer107->Add( m_staticText138, 0, wxALL, 5 );

	m_gCrossOverChart = new wxGauge( m_panel10, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL|wxGA_SMOOTH );
	m_gCrossOverChart->SetValue( 0 );
	m_gCrossOverChart->Enable( false );

	fgSizer107->Add( m_gCrossOverChart, 0, wxALL|wxEXPAND, 5 );


	fgSizer45->Add( fgSizer107, 1, wxEXPAND, 5 );


	m_panel10->SetSizer( fgSizer45 );
	m_panel10->Layout();
	fgSizer45->Fit( m_panel10 );
	m_nNotebook->AddPage( m_panel10, _("Cross Over Chart"), false );
	m_panel24 = new wxPanel( m_nNotebook, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer117;
	fgSizer117 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer117->SetFlexibleDirection( wxBOTH );
	fgSizer117->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText125 = new wxStaticText( m_panel24, wxID_ANY, _("Upwind Port Tack"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText125->Wrap( -1 );
	fgSizer117->Add( m_staticText125, 0, wxALL, 5 );

	m_stBestCourseUpWindPortTack = new wxStaticText( m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stBestCourseUpWindPortTack->Wrap( -1 );
	fgSizer117->Add( m_stBestCourseUpWindPortTack, 0, wxALL|wxEXPAND, 5 );

	m_staticText1251 = new wxStaticText( m_panel24, wxID_ANY, _("Upwind Starboard Tack"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1251->Wrap( -1 );
	fgSizer117->Add( m_staticText1251, 0, wxALL, 5 );

	m_stBestCourseUpWindStarboardTack = new wxStaticText( m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stBestCourseUpWindStarboardTack->Wrap( -1 );
	fgSizer117->Add( m_stBestCourseUpWindStarboardTack, 0, wxALL, 5 );

	m_staticText1252 = new wxStaticText( m_panel24, wxID_ANY, _("Downwind Port Tack"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1252->Wrap( -1 );
	fgSizer117->Add( m_staticText1252, 0, wxALL, 5 );

	m_stBestCourseDownWindPortTack = new wxStaticText( m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stBestCourseDownWindPortTack->Wrap( -1 );
	fgSizer117->Add( m_stBestCourseDownWindPortTack, 0, wxALL|wxEXPAND, 5 );

	m_staticText12511 = new wxStaticText( m_panel24, wxID_ANY, _("Downwind Starboard Tack"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12511->Wrap( -1 );
	fgSizer117->Add( m_staticText12511, 0, wxALL, 5 );

	m_stBestCourseDownWindStarboardTack = new wxStaticText( m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stBestCourseDownWindStarboardTack->Wrap( -1 );
	fgSizer117->Add( m_stBestCourseDownWindStarboardTack, 0, wxALL|wxEXPAND, 5 );

	m_staticText133 = new wxStaticText( m_panel24, wxID_ANY, _("Wind Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText133->Wrap( -1 );
	fgSizer117->Add( m_staticText133, 0, wxALL, 5 );

	m_sVMGWindSpeed = new wxSpinCtrl( m_panel24, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 60, 15 );
	fgSizer117->Add( m_sVMGWindSpeed, 0, wxALL, 5 );


	m_panel24->SetSizer( fgSizer117 );
	m_panel24->Layout();
	fgSizer117->Fit( m_panel24 );
	m_nNotebook->AddPage( m_panel24, _("Stats"), false );

	fgSizer106->Add( m_nNotebook, 1, wxEXPAND | wxALL, 5 );

	wxFlexGridSizer* fgSizer1021;
	fgSizer1021 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer1021->SetFlexibleDirection( wxBOTH );
	fgSizer1021->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxString m_cPlotTypeChoices[] = { _("Polar"), _("Speed") };
	int m_cPlotTypeNChoices = sizeof( m_cPlotTypeChoices ) / sizeof( wxString );
	m_cPlotType = new wxChoice( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cPlotTypeNChoices, m_cPlotTypeChoices, 0 );
	m_cPlotType->SetSelection( 0 );
	fgSizer1021->Add( m_cPlotType, 0, wxALL, 5 );

	wxString m_cPlotVariableChoices[] = { _("True Wind Dir / True Wind Speed"), _("Apparent Wind Dir / True Wind Speed"), _("True Wind Dir / Apparent Wind Speed"), _("Apparent Wind Dir / Apparent Wind Speed") };
	int m_cPlotVariableNChoices = sizeof( m_cPlotVariableChoices ) / sizeof( wxString );
	m_cPlotVariable = new wxChoice( m_panel20, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cPlotVariableNChoices, m_cPlotVariableChoices, 0 );
	m_cPlotVariable->SetSelection( 0 );
	fgSizer1021->Add( m_cPlotVariable, 0, wxALL, 5 );

	m_cbFullPlot = new wxCheckBox( m_panel20, wxID_ANY, _("Full Plot"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1021->Add( m_cbFullPlot, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	fgSizer106->Add( fgSizer1021, 1, wxEXPAND, 5 );


	m_panel20->SetSizer( fgSizer106 );
	m_panel20->Layout();
	fgSizer106->Fit( m_panel20 );
	m_panel21 = new wxPanel( m_splitter2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer31;
	sbSizer31 = new wxStaticBoxSizer( new wxStaticBox( m_panel21, wxID_ANY, _("Polars") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer92;
	fgSizer92 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer92->AddGrowableCol( 0 );
	fgSizer92->AddGrowableRow( 0 );
	fgSizer92->SetFlexibleDirection( wxBOTH );
	fgSizer92->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lPolars = new wxListCtrl( sbSizer31->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT );
	m_lPolars->SetMinSize( wxSize( 250,-1 ) );
	m_lPolars->SetMaxSize( wxSize( 300,-1 ) );

	fgSizer92->Add( m_lPolars, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer114;
	fgSizer114 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer114->SetFlexibleDirection( wxBOTH );
	fgSizer114->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bUp = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Up"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bUp, 0, wxALL, 5 );

	m_bDown = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Down"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bDown, 0, wxALL, 5 );

	m_bEditPolar = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("&Edit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bEditPolar, 0, wxALL, 5 );

	m_bAddPolar = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bAddPolar, 0, wxALL, 5 );

	m_bRemovePolar = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bRemovePolar, 0, wxALL, 5 );

	m_staticline1 = new wxStaticLine( sbSizer31->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	fgSizer114->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );

	m_bOpenBoat = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Open Boat"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bOpenBoat, 0, wxALL, 5 );

	m_bSaveBoat = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Save Boat"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bSaveBoat, 0, wxALL, 5 );

	m_bSaveAsBoat = new wxButton( sbSizer31->GetStaticBox(), wxID_ANY, _("Save As Boat"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer114->Add( m_bSaveAsBoat, 0, wxALL, 5 );


	fgSizer92->Add( fgSizer114, 1, 0, 5 );


	sbSizer31->Add( fgSizer92, 1, wxEXPAND, 5 );


	m_panel21->SetSizer( sbSizer31 );
	m_panel21->Layout();
	sbSizer31->Fit( m_panel21 );
	m_splitter2->SplitVertically( m_panel20, m_panel21, 0 );
	m_fgSizer->Add( m_splitter2, 1, wxEXPAND, 5 );


	this->SetSizer( m_fgSizer );
	this->Layout();
	m_fgSizer->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_PlotWindow->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_MIDDLE_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_RIGHT_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX1_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX2_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX1_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_MOTION, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_PAINT, wxPaintEventHandler( BoatDialogBase::OnPaintPlot ), NULL, this );
	m_PlotWindow->Connect( wxEVT_SIZE, wxSizeEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_CrossOverChart->Connect( wxEVT_PAINT, wxPaintEventHandler( BoatDialogBase::OnPaintCrossOverChart ), NULL, this );
	m_sOverlapPercentage->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BoatDialogBase::OnOverlapPercentage ), NULL, this );
	m_sVMGWindSpeed->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BoatDialogBase::OnVMGWindSpeed ), NULL, this );
	m_cPlotType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_cPlotVariable->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_cbFullPlot->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_lPolars->Connect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( BoatDialogBase::OnPolarSelected ), NULL, this );
	m_lPolars->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( BoatDialogBase::OnPolarSelected ), NULL, this );
	m_bUp->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnUpPolar ), NULL, this );
	m_bDown->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnDownPolar ), NULL, this );
	m_bEditPolar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnEditPolar ), NULL, this );
	m_bAddPolar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnAddPolar ), NULL, this );
	m_bRemovePolar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnRemovePolar ), NULL, this );
	m_bOpenBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnOpenBoat ), NULL, this );
	m_bSaveBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnSaveBoat ), NULL, this );
	m_bSaveAsBoat->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnSaveAsBoat ), NULL, this );
}

BoatDialogBase::~BoatDialogBase()
{
	// Disconnect Events
	m_PlotWindow->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_MIDDLE_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_MIDDLE_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_RIGHT_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_RIGHT_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX1_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX2_DOWN, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX1_UP, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_MOTION, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_MIDDLE_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_RIGHT_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX1_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_AUX2_DCLICK, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_LEAVE_WINDOW, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_ENTER_WINDOW, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_MOUSEWHEEL, wxMouseEventHandler( BoatDialogBase::OnMouseEventsPolarPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_PAINT, wxPaintEventHandler( BoatDialogBase::OnPaintPlot ), NULL, this );
	m_PlotWindow->Disconnect( wxEVT_SIZE, wxSizeEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_CrossOverChart->Disconnect( wxEVT_PAINT, wxPaintEventHandler( BoatDialogBase::OnPaintCrossOverChart ), NULL, this );
	m_sOverlapPercentage->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BoatDialogBase::OnOverlapPercentage ), NULL, this );
	m_sVMGWindSpeed->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BoatDialogBase::OnVMGWindSpeed ), NULL, this );
	m_cPlotType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_cPlotVariable->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_cbFullPlot->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( BoatDialogBase::OnUpdatePlot ), NULL, this );
	m_lPolars->Disconnect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( BoatDialogBase::OnPolarSelected ), NULL, this );
	m_lPolars->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( BoatDialogBase::OnPolarSelected ), NULL, this );
	m_bUp->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnUpPolar ), NULL, this );
	m_bDown->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnDownPolar ), NULL, this );
	m_bEditPolar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnEditPolar ), NULL, this );
	m_bAddPolar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnAddPolar ), NULL, this );
	m_bRemovePolar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnRemovePolar ), NULL, this );
	m_bOpenBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnOpenBoat ), NULL, this );
	m_bSaveBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnSaveBoat ), NULL, this );
	m_bSaveAsBoat->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BoatDialogBase::OnSaveAsBoat ), NULL, this );

}

EditPolarDialogBase::EditPolarDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer96;
	fgSizer96 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer96->AddGrowableRow( 0 );
	fgSizer96->AddGrowableRow( 1 );
	fgSizer96->SetFlexibleDirection( wxBOTH );
	fgSizer96->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_notebook6 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel19 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer93->AddGrowableCol( 0 );
	fgSizer93->AddGrowableRow( 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_gPolar = new wxGrid( m_panel19, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );

	// Grid
	m_gPolar->CreateGrid( 5, 5 );
	m_gPolar->EnableEditing( true );
	m_gPolar->EnableGridLines( true );
	m_gPolar->EnableDragGridSize( false );
	m_gPolar->SetMargins( 0, 0 );

	// Columns
	m_gPolar->EnableDragColMove( false );
	m_gPolar->EnableDragColSize( true );
	m_gPolar->SetColLabelSize( 30 );
	m_gPolar->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_gPolar->EnableDragRowSize( true );
	m_gPolar->SetRowLabelSize( 80 );
	m_gPolar->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_gPolar->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	m_gPolar->SetMaxSize( wxSize( -1,400 ) );

	fgSizer93->Add( m_gPolar, 0, wxALL|wxEXPAND, 5 );

	m_staticText1351 = new wxStaticText( m_panel19, wxID_ANY, _("Leave any cell blank to automatically interpolate from nearby values.  Use a value of 0.0 to specify invalid (cannot be used)\n View the polar plot in the boat dialog while editing the polar."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1351->Wrap( -1 );
	fgSizer93->Add( m_staticText1351, 0, wxALL, 5 );


	m_panel19->SetSizer( fgSizer93 );
	m_panel19->Layout();
	fgSizer93->Fit( m_panel19 );
	m_notebook6->AddPage( m_panel19, _("Grid"), true );
	m_panel20 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer98;
	fgSizer98 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer98->AddGrowableCol( 0 );
	fgSizer98->AddGrowableCol( 1 );
	fgSizer98->AddGrowableRow( 0 );
	fgSizer98->SetFlexibleDirection( wxBOTH );
	fgSizer98->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25;
	sbSizer25 = new wxStaticBoxSizer( new wxStaticBox( m_panel20, wxID_ANY, _("True Wind Angles") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer99;
	fgSizer99 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer99->AddGrowableCol( 0 );
	fgSizer99->AddGrowableRow( 0 );
	fgSizer99->SetFlexibleDirection( wxBOTH );
	fgSizer99->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer100;
	fgSizer100 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer100->AddGrowableCol( 0 );
	fgSizer100->AddGrowableRow( 1 );
	fgSizer100->SetFlexibleDirection( wxBOTH );
	fgSizer100->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_tTrueWindAngle = new wxTextCtrl( sbSizer25->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer100->Add( m_tTrueWindAngle, 0, wxALL, 5 );

	m_lTrueWindAngles = new wxListBox( sbSizer25->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer100->Add( m_lTrueWindAngles, 0, wxALL|wxEXPAND, 5 );


	fgSizer99->Add( fgSizer100, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bAddTrueWindAngle = new wxButton( sbSizer25->GetStaticBox(), wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_bAddTrueWindAngle, 0, wxALL, 5 );

	m_bRemoveTrueWindAngle = new wxButton( sbSizer25->GetStaticBox(), wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_bRemoveTrueWindAngle, 0, wxALL, 5 );


	fgSizer99->Add( fgSizer101, 1, wxEXPAND, 5 );


	sbSizer25->Add( fgSizer99, 1, wxEXPAND, 5 );


	fgSizer98->Add( sbSizer25, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer26;
	sbSizer26 = new wxStaticBoxSizer( new wxStaticBox( m_panel20, wxID_ANY, _("True WInd Speeds") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer991;
	fgSizer991 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer991->AddGrowableCol( 0 );
	fgSizer991->AddGrowableRow( 0 );
	fgSizer991->SetFlexibleDirection( wxBOTH );
	fgSizer991->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1001;
	fgSizer1001 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1001->AddGrowableCol( 0 );
	fgSizer1001->AddGrowableRow( 1 );
	fgSizer1001->SetFlexibleDirection( wxBOTH );
	fgSizer1001->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_tTrueWindSpeed = new wxTextCtrl( sbSizer26->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer1001->Add( m_tTrueWindSpeed, 0, wxALL, 5 );

	m_lTrueWindSpeeds = new wxListBox( sbSizer26->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer1001->Add( m_lTrueWindSpeeds, 0, wxALL|wxEXPAND, 5 );


	fgSizer991->Add( fgSizer1001, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer1011;
	fgSizer1011 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1011->SetFlexibleDirection( wxBOTH );
	fgSizer1011->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bAddTrueWindSpeed = new wxButton( sbSizer26->GetStaticBox(), wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1011->Add( m_bAddTrueWindSpeed, 0, wxALL, 5 );

	m_bRemoveTrueWindSpeed = new wxButton( sbSizer26->GetStaticBox(), wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1011->Add( m_bRemoveTrueWindSpeed, 0, wxALL, 5 );


	fgSizer991->Add( fgSizer1011, 1, wxEXPAND, 5 );


	sbSizer26->Add( fgSizer991, 1, wxEXPAND, 5 );


	fgSizer98->Add( sbSizer26, 1, wxEXPAND, 5 );


	m_panel20->SetSizer( fgSizer98 );
	m_panel20->Layout();
	fgSizer98->Fit( m_panel20 );
	m_notebook6->AddPage( m_panel20, _("Dimensions"), false );
	m_panel21 = new wxPanel( m_notebook6, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer102;
	fgSizer102 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer102->AddGrowableCol( 0 );
	fgSizer102->AddGrowableRow( 0 );
	fgSizer102->SetFlexibleDirection( wxBOTH );
	fgSizer102->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_notebook61 = new wxNotebook( m_panel21, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_panel22 = new wxPanel( m_notebook61, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1091;
	fgSizer1091 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1091->SetFlexibleDirection( wxBOTH );
	fgSizer1091->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer27;
	sbSizer27 = new wxStaticBoxSizer( new wxStaticBox( m_panel22, wxID_ANY, _("New Measurement") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer104;
	fgSizer104 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer104->SetFlexibleDirection( wxBOTH );
	fgSizer104->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_rbApparentWind = new wxRadioButton( sbSizer27->GetStaticBox(), wxID_ANY, _("Apparent Wind"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer104->Add( m_rbApparentWind, 0, wxALL, 5 );

	m_rbTrueWind = new wxRadioButton( sbSizer27->GetStaticBox(), wxID_ANY, _("True Wind"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer104->Add( m_rbTrueWind, 0, wxALL, 5 );


	fgSizer104->Add( 0, 0, 1, wxEXPAND, 5 );


	fgSizer104->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticText133 = new wxStaticText( sbSizer27->GetStaticBox(), wxID_ANY, _("Wind Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText133->Wrap( -1 );
	fgSizer104->Add( m_staticText133, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tWindSpeed = new wxTextCtrl( sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer104->Add( m_tWindSpeed, 0, wxALL, 5 );

	m_staticText134 = new wxStaticText( sbSizer27->GetStaticBox(), wxID_ANY, _("Wind Direction"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText134->Wrap( -1 );
	fgSizer104->Add( m_staticText134, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tWindDirection = new wxTextCtrl( sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer104->Add( m_tWindDirection, 0, wxALL, 5 );

	m_staticText135 = new wxStaticText( sbSizer27->GetStaticBox(), wxID_ANY, _("Boat Spead"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText135->Wrap( -1 );
	fgSizer104->Add( m_staticText135, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_tBoatSpeed = new wxTextCtrl( sbSizer27->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
	fgSizer104->Add( m_tBoatSpeed, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer103;
	fgSizer103 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer103->SetFlexibleDirection( wxBOTH );
	fgSizer103->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button46 = new wxButton( sbSizer27->GetStaticBox(), wxID_ANY, _("Add"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer103->Add( m_button46, 0, wxALL, 5 );


	fgSizer104->Add( fgSizer103, 1, wxEXPAND, 5 );


	sbSizer27->Add( fgSizer104, 1, wxEXPAND, 5 );


	fgSizer1091->Add( sbSizer27, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer28;
	sbSizer28 = new wxStaticBoxSizer( new wxStaticBox( m_panel22, wxID_ANY, _("Measurements") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer107;
	fgSizer107 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer107->AddGrowableCol( 0 );
	fgSizer107->AddGrowableRow( 0 );
	fgSizer107->SetFlexibleDirection( wxBOTH );
	fgSizer107->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lMeasurements = new wxListCtrl( sbSizer28->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLC_REPORT|wxLC_SINGLE_SEL|wxHSCROLL|wxVSCROLL );
	fgSizer107->Add( m_lMeasurements, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer106;
	fgSizer106 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer106->SetFlexibleDirection( wxBOTH );
	fgSizer106->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bRemoveMeasurement = new wxButton( sbSizer28->GetStaticBox(), wxID_ANY, _("Remove"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer106->Add( m_bRemoveMeasurement, 0, wxALL, 5 );

	m_bRemoveAllMeasurements = new wxButton( sbSizer28->GetStaticBox(), wxID_ANY, _("Remove All"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer106->Add( m_bRemoveAllMeasurements, 0, wxALL, 5 );

	m_button48 = new wxButton( sbSizer28->GetStaticBox(), wxID_ANY, _("Import NMEA Log"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer106->Add( m_button48, 0, wxALL, 5 );

	m_button50 = new wxButton( sbSizer28->GetStaticBox(), wxID_ANY, _("Generate Polar"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer106->Add( m_button50, 0, wxALL, 5 );


	fgSizer107->Add( fgSizer106, 1, wxEXPAND, 5 );


	sbSizer28->Add( fgSizer107, 1, wxEXPAND, 5 );


	fgSizer1091->Add( sbSizer28, 1, wxEXPAND, 5 );


	m_panel22->SetSizer( fgSizer1091 );
	m_panel22->Layout();
	fgSizer1091->Fit( m_panel22 );
	m_notebook61->AddPage( m_panel22, _("Measurements"), true );
	m_panel23 = new wxPanel( m_notebook61, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer113;
	fgSizer113 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer113->SetFlexibleDirection( wxBOTH );
	fgSizer113->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_panel17 = new wxPanel( m_panel23, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1022;
	fgSizer1022 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1022->SetFlexibleDirection( wxBOTH );
	fgSizer1022->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText139 = new wxStaticText( m_panel17, wxID_ANY, _("Warning:  All of the below are currently not used"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText139->Wrap( -1 );
	fgSizer1022->Add( m_staticText139, 0, wxALL, 5 );


	fgSizer1022->Add( 0, 0, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer52;
	fgSizer52 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer52->SetFlexibleDirection( wxBOTH );
	fgSizer52->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1031;
	fgSizer1031 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1031->SetFlexibleDirection( wxBOTH );
	fgSizer1031->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer1041;
	fgSizer1041 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1041->AddGrowableCol( 0 );
	fgSizer1041->SetFlexibleDirection( wxBOTH );
	fgSizer1041->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText100 = new wxStaticText( m_panel17, wxID_ANY, _("Hull Type"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText100->Wrap( -1 );
	fgSizer1041->Add( m_staticText100, 0, wxALL, 5 );

	wxString m_cHullTypeChoices[] = { _("Mono"), _("Catamaran"), _("Trimaran"), _("Proa"), _("Submarine") };
	int m_cHullTypeNChoices = sizeof( m_cHullTypeChoices ) / sizeof( wxString );
	m_cHullType = new wxChoice( m_panel17, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), m_cHullTypeNChoices, m_cHullTypeChoices, 0 );
	m_cHullType->SetSelection( 0 );
	fgSizer1041->Add( m_cHullType, 0, wxALL, 5 );


	fgSizer1031->Add( fgSizer1041, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer58;
	fgSizer58 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer58->SetFlexibleDirection( wxBOTH );
	fgSizer58->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText58 = new wxStaticText( m_panel17, wxID_ANY, _("Displacement"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText58->Wrap( -1 );
	fgSizer58->Add( m_staticText58, 0, wxALL, 5 );

	m_sDisplacement = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 100000, 4 );
	fgSizer58->Add( m_sDisplacement, 0, wxALL, 5 );

	m_staticText121 = new wxStaticText( m_panel17, wxID_ANY, _("tons"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText121->Wrap( -1 );
	fgSizer58->Add( m_staticText121, 0, wxALL, 5 );

	m_staticText128 = new wxStaticText( m_panel17, wxID_ANY, _("Sail Area"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText128->Wrap( -1 );
	fgSizer58->Add( m_staticText128, 0, wxALL, 5 );

	m_sSailArea = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 10000, 400 );
	fgSizer58->Add( m_sSailArea, 0, wxALL, 5 );

	m_staticText129 = new wxStaticText( m_panel17, wxID_ANY, _("sq/ft"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText129->Wrap( -1 );
	fgSizer58->Add( m_staticText129, 0, wxALL, 5 );

	m_staticText57 = new wxStaticText( m_panel17, wxID_ANY, _("Len Water Line (lwl)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	fgSizer58->Add( m_staticText57, 0, wxALL, 5 );

	m_sLWL = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 1000, 24 );
	fgSizer58->Add( m_sLWL, 0, wxALL, 5 );

	m_staticText122 = new wxStaticText( m_panel17, wxID_ANY, _("ft"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText122->Wrap( -1 );
	fgSizer58->Add( m_staticText122, 0, wxALL, 5 );

	m_staticText109 = new wxStaticText( m_panel17, wxID_ANY, _("Length Over All (loa)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText109->Wrap( -1 );
	fgSizer58->Add( m_staticText109, 0, wxALL, 5 );

	m_sLOA = new wxSpinCtrl( m_panel17, wxID_ANY, wxT("27"), wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 1000, 0 );
	fgSizer58->Add( m_sLOA, 0, wxALL, 5 );

	m_staticText127 = new wxStaticText( m_panel17, wxID_ANY, _("ft"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText127->Wrap( -1 );
	fgSizer58->Add( m_staticText127, 0, wxALL, 5 );

	m_staticText113 = new wxStaticText( m_panel17, wxID_ANY, _("Beam"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText113->Wrap( -1 );
	fgSizer58->Add( m_staticText113, 0, wxALL, 5 );

	m_sBeam = new wxSpinCtrl( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 0, 100, 8 );
	fgSizer58->Add( m_sBeam, 0, wxALL, 5 );

	m_staticText126 = new wxStaticText( m_panel17, wxID_ANY, _("ft"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText126->Wrap( -1 );
	fgSizer58->Add( m_staticText126, 0, wxALL, 5 );


	fgSizer1031->Add( fgSizer58, 1, wxEXPAND, 5 );


	fgSizer52->Add( fgSizer1031, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer43;
	fgSizer43 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer43->SetFlexibleDirection( wxBOTH );
	fgSizer43->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText119 = new wxStaticText( m_panel17, wxID_ANY, _("Sail Area Displacement Ratio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText119->Wrap( -1 );
	fgSizer43->Add( m_staticText119, 0, wxALL, 5 );

	m_stSailAreaDisplacementRatio = new wxStaticText( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stSailAreaDisplacementRatio->Wrap( -1 );
	fgSizer43->Add( m_stSailAreaDisplacementRatio, 0, wxALL, 5 );

	m_staticText105 = new wxStaticText( m_panel17, wxID_ANY, _("Displacement Length Ratio"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText105->Wrap( -1 );
	fgSizer43->Add( m_staticText105, 0, wxALL, 5 );

	m_stDisplacementLengthRatio = new wxStaticText( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stDisplacementLengthRatio->Wrap( -1 );
	fgSizer43->Add( m_stDisplacementLengthRatio, 0, wxALL, 5 );

	m_staticText92 = new wxStaticText( m_panel17, wxID_ANY, _("Hull Speed"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText92->Wrap( -1 );
	fgSizer43->Add( m_staticText92, 0, wxALL, 5 );

	m_stHullSpeed = new wxStaticText( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stHullSpeed->Wrap( -1 );
	fgSizer43->Add( m_stHullSpeed, 0, wxALL, 5 );

	m_staticText94 = new wxStaticText( m_panel17, wxID_ANY, _("Capsize Risk"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText94->Wrap( -1 );
	fgSizer43->Add( m_staticText94, 0, wxALL, 5 );

	m_stCapsizeRisk = new wxStaticText( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stCapsizeRisk->Wrap( -1 );
	fgSizer43->Add( m_stCapsizeRisk, 0, wxALL, 5 );

	m_staticText96 = new wxStaticText( m_panel17, wxID_ANY, _("Comfort Factor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText96->Wrap( -1 );
	fgSizer43->Add( m_staticText96, 0, wxALL, 5 );

	m_stComfortFactor = new wxStaticText( m_panel17, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stComfortFactor->Wrap( -1 );
	fgSizer43->Add( m_stComfortFactor, 0, wxALL, 5 );


	fgSizer52->Add( fgSizer43, 1, wxEXPAND, 5 );


	fgSizer1022->Add( fgSizer52, 1, wxEXPAND, 5 );


	m_panel17->SetSizer( fgSizer1022 );
	m_panel17->Layout();
	fgSizer1022->Fit( m_panel17 );
	fgSizer113->Add( m_panel17, 1, wxEXPAND | wxALL, 5 );

	m_panel221 = new wxPanel( m_panel23, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer109;
	fgSizer109 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer109->AddGrowableCol( 0 );
	fgSizer109->AddGrowableRow( 0 );
	fgSizer109->SetFlexibleDirection( wxBOTH );
	fgSizer109->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_grid1 = new wxGrid( m_panel221, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );

	// Grid
	m_grid1->CreateGrid( 5, 5 );
	m_grid1->EnableEditing( true );
	m_grid1->EnableGridLines( true );
	m_grid1->EnableDragGridSize( false );
	m_grid1->SetMargins( 0, 0 );

	// Columns
	m_grid1->EnableDragColMove( false );
	m_grid1->EnableDragColSize( true );
	m_grid1->SetColLabelSize( 30 );
	m_grid1->SetColLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Rows
	m_grid1->EnableDragRowSize( true );
	m_grid1->SetRowLabelSize( 80 );
	m_grid1->SetRowLabelAlignment( wxALIGN_CENTER, wxALIGN_CENTER );

	// Label Appearance

	// Cell Defaults
	m_grid1->SetDefaultCellAlignment( wxALIGN_LEFT, wxALIGN_TOP );
	fgSizer109->Add( m_grid1, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1131;
	fgSizer1131 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer1131->SetFlexibleDirection( wxBOTH );
	fgSizer1131->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button42 = new wxButton( m_panel221, wxID_ANY, _("Add Row"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1131->Add( m_button42, 0, wxALL, 5 );

	m_button43 = new wxButton( m_panel221, wxID_ANY, _("Remove Row"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1131->Add( m_button43, 0, wxALL, 5 );

	m_button44 = new wxButton( m_panel221, wxID_ANY, _("Add Col"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1131->Add( m_button44, 0, wxALL, 5 );

	m_button45 = new wxButton( m_panel221, wxID_ANY, _("Remove Col"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1131->Add( m_button45, 0, wxALL, 5 );

	m_button461 = new wxButton( m_panel221, wxID_ANY, _("MyButton"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1131->Add( m_button461, 0, wxALL, 5 );


	fgSizer109->Add( fgSizer1131, 1, wxEXPAND, 5 );


	m_panel221->SetSizer( fgSizer109 );
	m_panel221->Layout();
	fgSizer109->Fit( m_panel221 );
	fgSizer113->Add( m_panel221, 1, wxEXPAND | wxALL, 5 );


	m_panel23->SetSizer( fgSizer113 );
	m_panel23->Layout();
	fgSizer113->Fit( m_panel23 );
	m_notebook61->AddPage( m_panel23, _("Boat Characteristics"), false );

	fgSizer102->Add( m_notebook61, 1, wxEXPAND | wxALL, 5 );


	m_panel21->SetSizer( fgSizer102 );
	m_panel21->Layout();
	fgSizer102->Fit( m_panel21 );
	m_notebook6->AddPage( m_panel21, _("Generate"), false );

	fgSizer96->Add( m_notebook6, 1, wxEXPAND | wxALL, 5 );

	m_sdbSizer6 = new wxStdDialogButtonSizer();
	m_sdbSizer6Save = new wxButton( this, wxID_SAVE );
	m_sdbSizer6->AddButton( m_sdbSizer6Save );
	m_sdbSizer6Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer6->AddButton( m_sdbSizer6Cancel );
	m_sdbSizer6->Realize();
	m_sdbSizer6->SetMinSize( wxSize( -1,40 ) );

	fgSizer96->Add( m_sdbSizer6, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer96 );
	this->Layout();
	fgSizer96->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_gPolar->Connect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( EditPolarDialogBase::OnPolarGridChanged ), NULL, this );
	m_tTrueWindAngle->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::d ), NULL, this );
	m_bAddTrueWindAngle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindAngle ), NULL, this );
	m_bRemoveTrueWindAngle->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveTrueWindAngle ), NULL, this );
	m_tTrueWindSpeed->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindSpeed ), NULL, this );
	m_bAddTrueWindSpeed->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindSpeed ), NULL, this );
	m_bRemoveTrueWindSpeed->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveTrueWindSpeed ), NULL, this );
	m_tBoatSpeed->Connect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::OnAddMeasurement ), NULL, this );
	m_button46->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddMeasurement ), NULL, this );
	m_bRemoveMeasurement->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveMeasurement ), NULL, this );
	m_bRemoveAllMeasurements->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveAllMeasurements ), NULL, this );
	m_button50->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnGeneratePolar ), NULL, this );
	m_cHullType->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( EditPolarDialogBase::OnRecompute ), NULL, this );
	m_sDisplacement->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sSailArea->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sLWL->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sLOA->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sBeam->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sdbSizer6Save->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnSave ), NULL, this );
}

EditPolarDialogBase::~EditPolarDialogBase()
{
	// Disconnect Events
	m_gPolar->Disconnect( wxEVT_GRID_CELL_CHANGED, wxGridEventHandler( EditPolarDialogBase::OnPolarGridChanged ), NULL, this );
	m_tTrueWindAngle->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::d ), NULL, this );
	m_bAddTrueWindAngle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindAngle ), NULL, this );
	m_bRemoveTrueWindAngle->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveTrueWindAngle ), NULL, this );
	m_tTrueWindSpeed->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindSpeed ), NULL, this );
	m_bAddTrueWindSpeed->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddTrueWindSpeed ), NULL, this );
	m_bRemoveTrueWindSpeed->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveTrueWindSpeed ), NULL, this );
	m_tBoatSpeed->Disconnect( wxEVT_COMMAND_TEXT_ENTER, wxCommandEventHandler( EditPolarDialogBase::OnAddMeasurement ), NULL, this );
	m_button46->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnAddMeasurement ), NULL, this );
	m_bRemoveMeasurement->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveMeasurement ), NULL, this );
	m_bRemoveAllMeasurements->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnRemoveAllMeasurements ), NULL, this );
	m_button50->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnGeneratePolar ), NULL, this );
	m_cHullType->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( EditPolarDialogBase::OnRecompute ), NULL, this );
	m_sDisplacement->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sSailArea->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sLWL->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sLOA->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sBeam->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( EditPolarDialogBase::OnRecomputeSpin ), NULL, this );
	m_sdbSizer6Save->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( EditPolarDialogBase::OnSave ), NULL, this );

}

SimulatorRoutingPanel::SimulatorRoutingPanel( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	this->SetMinSize( wxSize( 100,100 ) );

	wxBoxSizer* bSizerMain;
	bSizerMain = new wxBoxSizer( wxVERTICAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D );
	m_splitter1->SetSashGravity( 0.2 );
	m_splitter1->SetMinimumPaneSize( 1 );

	m_panel11 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer30;
	sbSizer30 = new wxStaticBoxSizer( new wxStaticBox( m_panel11, wxID_ANY, _("Positions") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 1, 1, 0, 0 );
	fgSizer93->AddGrowableCol( 0 );
	fgSizer93->AddGrowableRow( 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_lPositions = new wxListCtrl( sbSizer30->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLC_HRULES|wxLC_REPORT|wxLC_SINGLE_SEL|wxHSCROLL|wxVSCROLL );
	fgSizer93->Add( m_lPositions, 0, wxALL|wxEXPAND, 5 );


	sbSizer30->Add( fgSizer93, 1, wxEXPAND, 5 );


	m_panel11->SetSizer( sbSizer30 );
	m_panel11->Layout();
	sbSizer30->Fit( m_panel11 );
	m_panel12 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxStaticBoxSizer* sbSizer29;
	sbSizer29 = new wxStaticBoxSizer( new wxStaticBox( m_panel12, wxID_ANY, _("Configurations") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer17;
	fgSizer17 = new wxFlexGridSizer( 2, 1, 0, 0 );
	fgSizer17->AddGrowableCol( 0 );
	fgSizer17->AddGrowableRow( 0 );
	fgSizer17->SetFlexibleDirection( wxBOTH );
	fgSizer17->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	m_lWeatherRoutes = new wxListCtrl( sbSizer29->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxLC_HRULES|wxLC_NO_SORT_HEADER|wxLC_REPORT|wxHSCROLL|wxVSCROLL );
	fgSizer17->Add( m_lWeatherRoutes, 0, wxALL|wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer116;
	fgSizer116 = new wxFlexGridSizer( 1, 0, 0, 0 );
	fgSizer116->AddGrowableCol( 2 );
	fgSizer116->SetFlexibleDirection( wxBOTH );
	fgSizer116->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bCompute = new wxButton( sbSizer29->GetStaticBox(), wxID_ANY, _("&Compute"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer116->Add( m_bCompute, 0, wxALL, 5 );

	m_bExport = new wxButton( sbSizer29->GetStaticBox(), wxID_ANY, _("&Export"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer116->Add( m_bExport, 0, wxALL, 5 );

	m_gProgress = new wxGauge( sbSizer29->GetStaticBox(), wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	m_gProgress->SetValue( 0 );
	fgSizer116->Add( m_gProgress, 0, wxALL|wxEXPAND, 5 );


	fgSizer17->Add( fgSizer116, 1, wxEXPAND, 5 );


	sbSizer29->Add( fgSizer17, 1, wxEXPAND, 5 );


	m_panel12->SetSizer( sbSizer29 );
	m_panel12->Layout();
	sbSizer29->Fit( m_panel12 );
	m_splitter1->SplitVertically( m_panel11, m_panel12, -1 );
	bSizerMain->Add( m_splitter1, 1, wxEXPAND, 5 );


	this->SetSizer( bSizerMain );
	this->Layout();

	// Connect Events
	m_lPositions->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( SimulatorRoutingPanel::OnEditPositionClick ), NULL, this );
	m_lPositions->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftUp ), NULL, this );
	m_lPositions->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftDown ), NULL, this );
	m_lPositions->Connect( wxEVT_COMMAND_LIST_KEY_DOWN, wxListEventHandler( SimulatorRoutingPanel::OnPositionKeyDown ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( SimulatorRoutingPanel::OnEditConfigurationClick ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_LEFT_DOWN, wxMouseEventHandler( SimulatorRoutingPanel::OnWeatherRoutesListLeftDown ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftUp ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSort ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSelected ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSelected ), NULL, this );
	m_lWeatherRoutes->Connect( wxEVT_COMMAND_LIST_KEY_DOWN, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteKeyDown ), NULL, this );
	m_bCompute->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorRoutingPanel::OnCompute ), NULL, this );
	m_bExport->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorRoutingPanel::OnExport ), NULL, this );
}

SimulatorRoutingPanel::~SimulatorRoutingPanel()
{
	// Disconnect Events
	m_lPositions->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( SimulatorRoutingPanel::OnEditPositionClick ), NULL, this );
	m_lPositions->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftUp ), NULL, this );
	m_lPositions->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftDown ), NULL, this );
	m_lPositions->Disconnect( wxEVT_COMMAND_LIST_KEY_DOWN, wxListEventHandler( SimulatorRoutingPanel::OnPositionKeyDown ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_LEFT_DCLICK, wxMouseEventHandler( SimulatorRoutingPanel::OnEditConfigurationClick ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_LEFT_DOWN, wxMouseEventHandler( SimulatorRoutingPanel::OnWeatherRoutesListLeftDown ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( SimulatorRoutingPanel::OnLeftUp ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_COMMAND_LIST_COL_CLICK, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSort ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSelected ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteSelected ), NULL, this );
	m_lWeatherRoutes->Disconnect( wxEVT_COMMAND_LIST_KEY_DOWN, wxListEventHandler( SimulatorRoutingPanel::OnWeatherRouteKeyDown ), NULL, this );
	m_bCompute->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorRoutingPanel::OnCompute ), NULL, this );
	m_bExport->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SimulatorRoutingPanel::OnExport ), NULL, this );

}

SettingsDialogBase::SettingsDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer92;
	fgSizer92 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer92->AddGrowableCol( 0 );
	fgSizer92->AddGrowableRow( 0 );
	fgSizer92->SetFlexibleDirection( wxBOTH );
	fgSizer92->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer100;
	fgSizer100 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer100->AddGrowableCol( 1 );
	fgSizer100->AddGrowableRow( 0 );
	fgSizer100->SetFlexibleDirection( wxBOTH );
	fgSizer100->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer25;
	sbSizer25 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Display") ), wxVERTICAL );

	m_scrolledWindow4 = new wxScrolledWindow( sbSizer25->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow4->SetScrollRate( 5, 5 );
	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_NONE );

	wxFlexGridSizer* fgSizer42;
	fgSizer42 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer42->SetFlexibleDirection( wxBOTH );
	fgSizer42->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText74 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Cursor Route Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer42->Add( m_staticText74, 0, wxALL, 5 );

	m_cpCursorRoute = new wxColourPickerCtrl( m_scrolledWindow4, wxID_ANY, wxColour( 255, 255, 0 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer42->Add( m_cpCursorRoute, 0, wxALL, 5 );

	m_staticText73 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Destination Route Color"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText73->Wrap( -1 );
	fgSizer42->Add( m_staticText73, 0, wxALL, 5 );

	m_cpDestinationRoute = new wxColourPickerCtrl( m_scrolledWindow4, wxID_ANY, wxColour( 255, 0, 255 ), wxDefaultPosition, wxDefaultSize, wxCLRP_DEFAULT_STYLE );
	fgSizer42->Add( m_cpDestinationRoute, 0, wxALL, 5 );

	m_staticText75 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Route Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText75->Wrap( -1 );
	fgSizer42->Add( m_staticText75, 0, wxALL, 5 );

	m_sRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 4 );
	fgSizer42->Add( m_sRouteThickness, 0, wxALL, 5 );

	m_staticText70 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Iso Chron Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText70->Wrap( -1 );
	fgSizer42->Add( m_staticText70, 0, wxALL, 5 );

	m_sIsoChronThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 2 );
	fgSizer42->Add( m_sIsoChronThickness, 0, wxALL, 5 );

	m_staticText71 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Alternate Routes Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer42->Add( m_staticText71, 0, wxALL, 5 );

	m_sAlternateRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizer42->Add( m_sAlternateRouteThickness, 0, wxALL, 5 );

	m_staticText711 = new wxStaticText( m_scrolledWindow4, wxID_ANY, _("Wind Barbs On Route Thickness"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText711->Wrap( -1 );
	fgSizer42->Add( m_staticText711, 0, wxALL, 5 );

	m_sWindBarbsOnRouteThickness = new wxSpinCtrl( m_scrolledWindow4, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 6, 2 );
	fgSizer42->Add( m_sWindBarbsOnRouteThickness, 0, wxALL, 5 );


	fgSizer18->Add( fgSizer42, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer82;
	fgSizer82 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer82->SetFlexibleDirection( wxBOTH );
	fgSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbDisplayCursorRoute = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display Cursor Route"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbDisplayCursorRoute->SetValue(true);
	fgSizer82->Add( m_cbDisplayCursorRoute, 0, wxALL, 5 );

	m_cbAlternatesForAll = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Alternates for all IsoChrons"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbAlternatesForAll, 0, wxALL, 5 );

	m_cbMarkAtPolarChange = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display mark when Polar changes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbMarkAtPolarChange->SetValue(true);
	fgSizer82->Add( m_cbMarkAtPolarChange, 0, wxALL, 5 );

	m_cbDisplayCurrent = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display current"), wxDefaultPosition, wxDefaultSize, 0 );
	m_cbDisplayCurrent->SetValue(true);
	fgSizer82->Add( m_cbDisplayCurrent, 0, wxALL, 5 );

	m_cbDisplayWindBarbs = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display Wind Barbs"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbDisplayWindBarbs, 0, wxALL, 5 );

	m_cbDisplayApparentWindBarbs = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Apparent Wind for Barbs On Route (not True Wind)"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbDisplayApparentWindBarbs, 0, wxALL, 5 );

	m_cbDisplayComfort = new wxCheckBox( m_scrolledWindow4, wxID_ANY, _("Display Sailing Comfort on Route"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer82->Add( m_cbDisplayComfort, 0, wxALL, 5 );


	fgSizer18->Add( fgSizer82, 1, wxEXPAND, 5 );


	m_scrolledWindow4->SetSizer( fgSizer18 );
	m_scrolledWindow4->Layout();
	fgSizer18->Fit( m_scrolledWindow4 );
	sbSizer25->Add( m_scrolledWindow4, 1, wxEXPAND | wxALL, 5 );


	fgSizer100->Add( sbSizer25, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer101;
	fgSizer101 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer101->AddGrowableCol( 0 );
	fgSizer101->AddGrowableRow( 1 );
	fgSizer101->SetFlexibleDirection( wxBOTH );
	fgSizer101->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer26;
	sbSizer26 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Computation") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText115 = new wxStaticText( sbSizer26->GetStaticBox(), wxID_ANY, _("Number of Concurrent threads"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText115->Wrap( -1 );
	fgSizer93->Add( m_staticText115, 0, wxALL, 5 );

	m_sConcurrentThreads = new wxSpinCtrl( sbSizer26->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 64, 1 );
	fgSizer93->Add( m_sConcurrentThreads, 0, wxALL, 5 );


	sbSizer26->Add( fgSizer93, 1, wxEXPAND, 5 );


	fgSizer101->Add( sbSizer26, 1, wxEXPAND, 5 );

	wxArrayString m_cblFieldsChoices;
	m_cblFields = new wxCheckListBox( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cblFieldsChoices, 0 );
	fgSizer101->Add( m_cblFields, 0, wxALL|wxEXPAND, 5 );

	m_cbUseLocalTime = new wxCheckBox( this, wxID_ANY, _("Use Local Time"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer101->Add( m_cbUseLocalTime, 0, wxALL, 5 );


	fgSizer100->Add( fgSizer101, 1, wxEXPAND, 5 );


	fgSizer92->Add( fgSizer100, 1, wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Help = new wxButton( this, wxID_HELP );
	m_sdbSizer1->AddButton( m_sdbSizer1Help );
	m_sdbSizer1->Realize();

	fgSizer92->Add( m_sdbSizer1, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer92 );
	this->Layout();
	fgSizer92->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_cpCursorRoute->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SettingsDialogBase::OnUpdateColor ), NULL, this );
	m_cpDestinationRoute->Connect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SettingsDialogBase::OnUpdateColor ), NULL, this );
	m_sRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sIsoChronThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sAlternateRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sWindBarbsOnRouteThickness->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_cbDisplayCursorRoute->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbAlternatesForAll->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbMarkAtPolarChange->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayCurrent->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayWindBarbs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayApparentWindBarbs->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayComfort->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cblFields->Connect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( SettingsDialogBase::OnUpdateColumns ), NULL, this );
	m_cbUseLocalTime->Connect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdateColumns ), NULL, this );
	m_sdbSizer1Help->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnHelp ), NULL, this );
}

SettingsDialogBase::~SettingsDialogBase()
{
	// Disconnect Events
	m_cpCursorRoute->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SettingsDialogBase::OnUpdateColor ), NULL, this );
	m_cpDestinationRoute->Disconnect( wxEVT_COMMAND_COLOURPICKER_CHANGED, wxColourPickerEventHandler( SettingsDialogBase::OnUpdateColor ), NULL, this );
	m_sRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sIsoChronThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sAlternateRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_sWindBarbsOnRouteThickness->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( SettingsDialogBase::OnUpdateSpin ), NULL, this );
	m_cbDisplayCursorRoute->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbAlternatesForAll->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbMarkAtPolarChange->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayCurrent->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayWindBarbs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayApparentWindBarbs->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cbDisplayComfort->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdate ), NULL, this );
	m_cblFields->Disconnect( wxEVT_COMMAND_CHECKLISTBOX_TOGGLED, wxCommandEventHandler( SettingsDialogBase::OnUpdateColumns ), NULL, this );
	m_cbUseLocalTime->Disconnect( wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnUpdateColumns ), NULL, this );
	m_sdbSizer1Help->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( SettingsDialogBase::OnHelp ), NULL, this );

}

PreferencesDialogBase::PreferencesDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( -1,-1 ), wxSize( -1,-1 ) );

	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer8->AddGrowableCol( 0 );
	fgSizer8->AddGrowableCol( 1 );
	fgSizer8->AddGrowableRow( 0 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_ALL );

	wxFlexGridSizer* fgSizer162;
	fgSizer162 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer162->AddGrowableCol( 0 );
	fgSizer162->SetFlexibleDirection( wxBOTH );
	fgSizer162->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer7;
	sbSizer7 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Mode") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer37;
	fgSizer37 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer37->AddGrowableCol( 0 );
	fgSizer37->AddGrowableRow( 0 );
	fgSizer37->SetFlexibleDirection( wxBOTH );
	fgSizer37->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbMode = new wxChoicebook( sbSizer7->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxCHB_DEFAULT );
	m_panel5 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer44;
	fgSizer44 = new wxFlexGridSizer( 0, 3, 0, 0 );
	fgSizer44->SetFlexibleDirection( wxBOTH );
	fgSizer44->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText57 = new wxStaticText( m_panel5, wxID_ANY, _("XTE Multiplier"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	fgSizer44->Add( m_staticText57, 0, wxALL, 5 );

	m_sXTEP = new wxSpinCtrlDouble( m_panel5, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10000, 0, 1 );
	m_sXTEP->SetDigits( 0 );
	m_sXTEP->SetMaxSize( wxSize( 100,-1 ) );

	fgSizer44->Add( m_sXTEP, 0, wxALL, 5 );

	m_staticText561 = new wxStaticText( m_panel5, wxID_ANY, _("%"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText561->Wrap( -1 );
	fgSizer44->Add( m_staticText561, 0, wxALL|wxEXPAND, 5 );


	m_panel5->SetSizer( fgSizer44 );
	m_panel5->Layout();
	fgSizer44->Fit( m_panel5 );
	m_cbMode->AddPage( m_panel5, _("Standard XTE"), false );
	m_panel8 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer50;
	fgSizer50 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer50->SetFlexibleDirection( wxBOTH );
	fgSizer50->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );


	m_panel8->SetSizer( fgSizer50 );
	m_panel8->Layout();
	fgSizer50->Fit( m_panel8 );
	m_cbMode->AddPage( m_panel8, _("Waypoint Bearing"), false );
	m_panel9 = new wxPanel( m_cbMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer51;
	fgSizer51 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer51->SetFlexibleDirection( wxBOTH );
	fgSizer51->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbRoutePositionBearingMode = new wxChoicebook( m_panel9, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxCHB_DEFAULT );
	m_panel91 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer19;
	fgSizer19 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer19->SetFlexibleDirection( wxBOTH );
	fgSizer19->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingDistance = new wxSpinCtrl( m_panel91, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxSP_ARROW_KEYS, 1, 1000, 100 );
	fgSizer19->Add( m_sRoutePositionBearingDistance, 0, wxALL, 5 );

	m_staticText74 = new wxStaticText( m_panel91, wxID_ANY, _("Meters"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText74->Wrap( -1 );
	fgSizer19->Add( m_staticText74, 0, wxALL, 5 );

	m_staticText10 = new wxStaticText( m_panel91, wxID_ANY, _("Max Error Angle"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	fgSizer19->Add( m_staticText10, 0, wxALL, 5 );

	m_sRoutePositionBearingMaxAngle = new wxSpinCtrl( m_panel91, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 60,-1 ), wxSP_ARROW_KEYS, 1, 90, 36 );
	fgSizer19->Add( m_sRoutePositionBearingMaxAngle, 0, wxALL, 5 );


	m_panel91->SetSizer( fgSizer19 );
	m_panel91->Layout();
	fgSizer19->Fit( m_panel91 );
	m_cbRoutePositionBearingMode->AddPage( m_panel91, _("By Distance"), true );
	m_panel10 = new wxPanel( m_cbRoutePositionBearingMode, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer20;
	fgSizer20 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer20->SetFlexibleDirection( wxBOTH );
	fgSizer20->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_sRoutePositionBearingTime = new wxSpinCtrl( m_panel10, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 10, 2000, 0 );
	fgSizer20->Add( m_sRoutePositionBearingTime, 0, wxALL, 5 );

	m_staticText30 = new wxStaticText( m_panel10, wxID_ANY, _("Seconds"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText30->Wrap( -1 );
	fgSizer20->Add( m_staticText30, 0, wxALL, 5 );


	m_panel10->SetSizer( fgSizer20 );
	m_panel10->Layout();
	fgSizer20->Fit( m_panel10 );
	m_cbRoutePositionBearingMode->AddPage( m_panel10, _("By Time"), false );
	fgSizer51->Add( m_cbRoutePositionBearingMode, 1, wxEXPAND | wxALL, 5 );


	m_panel9->SetSizer( fgSizer51 );
	m_panel9->Layout();
	fgSizer51->Fit( m_panel9 );
	m_cbMode->AddPage( m_panel9, _("Route Position Bearing"), true );
	fgSizer37->Add( m_cbMode, 1, wxEXPAND | wxALL, 5 );


	sbSizer7->Add( fgSizer37, 1, wxEXPAND, 5 );


	fgSizer162->Add( sbSizer7, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer9;
	sbSizer9 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Boundary") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer18;
	fgSizer18 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer18->AddGrowableCol( 1 );
	fgSizer18->SetFlexibleDirection( wxBOTH );
	fgSizer18->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbBoundary = new wxCheckBox( sbSizer9->GetStaticBox(), wxID_ANY, _("GUID"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( m_cbBoundary, 0, wxALL, 5 );

	m_tBoundary = new wxTextCtrl( sbSizer9->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer18->Add( m_tBoundary, 0, wxALL|wxEXPAND, 5 );


	sbSizer9->Add( fgSizer18, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer56;
	fgSizer56 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer56->SetFlexibleDirection( wxBOTH );
	fgSizer56->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button22 = new wxButton( sbSizer9->GetStaticBox(), wxID_ANY, _("Generate"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer56->Add( m_button22, 0, wxALL, 5 );

	m_staticText71 = new wxStaticText( sbSizer9->GetStaticBox(), wxID_ANY, _("Width"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText71->Wrap( -1 );
	fgSizer56->Add( m_staticText71, 0, wxALL, 5 );

	m_sBoundaryWidth = new wxSpinCtrl( sbSizer9->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 1, 1000, 30 );
	fgSizer56->Add( m_sBoundaryWidth, 0, wxALL, 5 );

	m_staticText72 = new wxStaticText( sbSizer9->GetStaticBox(), wxID_ANY, _("M"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText72->Wrap( -1 );
	fgSizer56->Add( m_staticText72, 0, wxALL, 5 );


	sbSizer9->Add( fgSizer56, 1, wxEXPAND, 5 );


	fgSizer162->Add( sbSizer9, 1, wxEXPAND, 5 );


	fgSizer8->Add( fgSizer162, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer181;
	fgSizer181 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer181->AddGrowableCol( 0 );
	fgSizer181->SetFlexibleDirection( wxBOTH );
	fgSizer181->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Options") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer45;
	fgSizer45 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer45->SetFlexibleDirection( wxBOTH );
	fgSizer45->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbConfirmBearingChange = new wxCheckBox( sbSizer10->GetStaticBox(), wxID_ANY, _("Confirm Bearing Change\nOn Waypoint Arrival"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer45->Add( m_cbConfirmBearingChange, 0, wxALL, 5 );

	m_cbInterceptRoute = new wxCheckBox( sbSizer10->GetStaticBox(), wxID_ANY, _("Intercept Route\nOn Current Course"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer45->Add( m_cbInterceptRoute, 0, wxALL, 5 );

	wxString m_cComputationChoices[] = { _("Great Circle (Shortest Distance)"), _("Mercator (Constant Bearings)") };
	int m_cComputationNChoices = sizeof( m_cComputationChoices ) / sizeof( wxString );
	m_cComputation = new wxChoice( sbSizer10->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, m_cComputationNChoices, m_cComputationChoices, 0 );
	m_cComputation->SetSelection( 0 );
	fgSizer45->Add( m_cComputation, 0, wxALL, 5 );


	sbSizer10->Add( fgSizer45, 1, wxEXPAND, 5 );


	fgSizer181->Add( sbSizer10, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Active Route Windows") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer16;
	fgSizer16 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer16->AddGrowableCol( 1 );
	fgSizer16->SetFlexibleDirection( wxBOTH );
	fgSizer16->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxString m_cbActiveRouteItems0Choices[] = { _("XTE"), _("BRG"), _("VMG"), _("RNG"), _("TTG"), _("Route ETA"), _("Route RNG"), _("Route TTG"), _("Highway"), _("Deactivate") };
	int m_cbActiveRouteItems0NChoices = sizeof( m_cbActiveRouteItems0Choices ) / sizeof( wxString );
	m_cbActiveRouteItems0 = new wxCheckListBox( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), m_cbActiveRouteItems0NChoices, m_cbActiveRouteItems0Choices, 0 );
	fgSizer16->Add( m_cbActiveRouteItems0, 0, wxALL|wxEXPAND, 5 );

	wxString m_cbActiveRouteItems1Choices[] = { _("XTE"), _("BRG"), _("VMG"), _("RNG"), _("TTG"), _("Route ETA"), _("Route RNG"), _("Route TTG"), _("Highway"), _("Deactivate") };
	int m_cbActiveRouteItems1NChoices = sizeof( m_cbActiveRouteItems1Choices ) / sizeof( wxString );
	m_cbActiveRouteItems1 = new wxCheckListBox( sbSizer5->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxSize( -1,120 ), m_cbActiveRouteItems1NChoices, m_cbActiveRouteItems1Choices, 0 );
	fgSizer16->Add( m_cbActiveRouteItems1, 0, wxALL, 5 );


	sbSizer5->Add( fgSizer16, 1, wxEXPAND, 5 );


	fgSizer181->Add( sbSizer5, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer21;
	fgSizer21 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer21->AddGrowableCol( 1 );
	fgSizer21->SetFlexibleDirection( wxBOTH );
	fgSizer21->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_button4 = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer21->Add( m_button4, 0, wxALL, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( this, wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( this, wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	fgSizer21->Add( m_sdbSizer1, 1, wxALIGN_RIGHT|wxEXPAND, 5 );


	fgSizer181->Add( fgSizer21, 1, wxEXPAND, 5 );


	fgSizer8->Add( fgSizer181, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer8 );
	this->Layout();

	this->Centre( wxBOTH );

	// Connect Events
	m_cbMode->Connect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( PreferencesDialogBase::OnMode ), NULL, this );
	m_button4->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnOk ), NULL, this );
}

PreferencesDialogBase::~PreferencesDialogBase()
{
	// Disconnect Events
	m_cbMode->Disconnect( wxEVT_COMMAND_CHOICEBOOK_PAGE_CHANGED, wxChoicebookEventHandler( PreferencesDialogBase::OnMode ), NULL, this );
	m_button4->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnInformation ), NULL, this );
	m_sdbSizer1OK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PreferencesDialogBase::OnOk ), NULL, this );

}

StatisticsDialogBase::StatisticsDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer55;
	fgSizer55 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer55->SetFlexibleDirection( wxBOTH );
	fgSizer55->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer27;
	sbSizer27 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Overall") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer94;
	fgSizer94 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer94->SetFlexibleDirection( wxBOTH );
	fgSizer94->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText511 = new wxStaticText( sbSizer27->GetStaticBox(), wxID_ANY, _("Run Time"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText511->Wrap( -1 );
	fgSizer94->Add( m_staticText511, 0, wxALL, 5 );

	m_stRunTime = new wxStaticText( sbSizer27->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stRunTime->Wrap( -1 );
	fgSizer94->Add( m_stRunTime, 0, wxALL, 5 );


	sbSizer27->Add( fgSizer94, 1, wxEXPAND, 5 );


	fgSizer55->Add( sbSizer27, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer10;
	sbSizer10 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Current Route") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer29;
	fgSizer29 = new wxFlexGridSizer( 0, 4, 0, 0 );
	fgSizer29->SetFlexibleDirection( wxBOTH );
	fgSizer29->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText47 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("State"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText47->Wrap( -1 );
	fgSizer29->Add( m_staticText47, 0, wxALL, 5 );

	m_stState = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("Stopped"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stState->Wrap( -1 );
	fgSizer29->Add( m_stState, 0, wxALL, 5 );

	m_staticText53 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("Iso Chrons"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText53->Wrap( -1 );
	fgSizer29->Add( m_staticText53, 0, wxALL, 5 );

	m_stIsoChrons = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stIsoChrons->Wrap( -1 );
	fgSizer29->Add( m_stIsoChrons, 0, wxALL, 5 );

	m_staticText55 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("Routes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText55->Wrap( -1 );
	fgSizer29->Add( m_staticText55, 0, wxALL, 5 );

	m_stRoutes = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stRoutes->Wrap( -1 );
	fgSizer29->Add( m_stRoutes, 0, wxALL, 5 );

	m_staticText57 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("InvRoutes"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText57->Wrap( -1 );
	fgSizer29->Add( m_staticText57, 0, wxALL, 5 );

	m_stInvRoutes = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stInvRoutes->Wrap( -1 );
	fgSizer29->Add( m_stInvRoutes, 0, wxALL, 5 );

	m_staticText90 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("Skip Positions"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText90->Wrap( -1 );
	fgSizer29->Add( m_staticText90, 0, wxALL, 5 );

	m_stSkipPositions = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stSkipPositions->Wrap( -1 );
	fgSizer29->Add( m_stSkipPositions, 0, wxALL, 5 );

	m_staticText49 = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("Positions"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText49->Wrap( -1 );
	fgSizer29->Add( m_staticText49, 0, wxALL, 5 );

	m_stPositions = new wxStaticText( sbSizer10->GetStaticBox(), wxID_ANY, _("0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stPositions->Wrap( -1 );
	fgSizer29->Add( m_stPositions, 0, wxALL, 5 );


	sbSizer10->Add( fgSizer29, 1, wxEXPAND, 5 );


	fgSizer55->Add( sbSizer10, 1, wxEXPAND, 5 );

	m_sdbSizer5 = new wxStdDialogButtonSizer();
	m_sdbSizer5OK = new wxButton( this, wxID_OK );
	m_sdbSizer5->AddButton( m_sdbSizer5OK );
	m_sdbSizer5->Realize();

	fgSizer55->Add( m_sdbSizer5, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer55 );
	this->Layout();
	fgSizer55->Fit( this );

	this->Centre( wxBOTH );
}

StatisticsDialogBase::~StatisticsDialogBase()
{
}

ReportDialogBase::ReportDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,400 ), wxDefaultSize );

	wxFlexGridSizer* fgSizer90;
	fgSizer90 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer90->AddGrowableCol( 0 );
	fgSizer90->AddGrowableRow( 0 );
	fgSizer90->AddGrowableRow( 1 );
	fgSizer90->SetFlexibleDirection( wxBOTH );
	fgSizer90->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxStaticBoxSizer* sbSizer31;
	sbSizer31 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Current Configuration") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer98;
	fgSizer98 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer98->AddGrowableCol( 0 );
	fgSizer98->AddGrowableRow( 0 );
	fgSizer98->SetFlexibleDirection( wxBOTH );
	fgSizer98->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_htmlConfigurationReport = new wxHtmlWindow( sbSizer31->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	fgSizer98->Add( m_htmlConfigurationReport, 0, wxALL|wxEXPAND, 5 );


	sbSizer31->Add( fgSizer98, 1, wxEXPAND, 5 );


	fgSizer90->Add( sbSizer31, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer32;
	sbSizer32 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("Routes") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer99;
	fgSizer99 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer99->AddGrowableCol( 0 );
	fgSizer99->AddGrowableRow( 0 );
	fgSizer99->SetFlexibleDirection( wxBOTH );
	fgSizer99->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_htmlRoutesReport = new wxHtmlWindow( sbSizer32->GetStaticBox(), wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHW_SCROLLBAR_AUTO );
	fgSizer99->Add( m_htmlRoutesReport, 0, wxALL|wxEXPAND, 5 );


	sbSizer32->Add( fgSizer99, 1, wxEXPAND, 5 );


	fgSizer90->Add( sbSizer32, 1, wxEXPAND, 5 );

	wxFlexGridSizer* fgSizer93;
	fgSizer93 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer93->AddGrowableCol( 1 );
	fgSizer93->SetFlexibleDirection( wxBOTH );
	fgSizer93->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bInformation = new wxButton( this, wxID_ANY, _("Information"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer93->Add( m_bInformation, 0, wxALL, 5 );

	m_bClose = new wxButton( this, wxID_ANY, _("&Close"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer93->Add( m_bClose, 0, wxALIGN_RIGHT|wxALL, 5 );


	fgSizer90->Add( fgSizer93, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer90 );
	this->Layout();
	fgSizer90->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_bInformation->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReportDialogBase::OnInformation ), NULL, this );
	m_bClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReportDialogBase::OnClose ), NULL, this );
}

ReportDialogBase::~ReportDialogBase()
{
	// Disconnect Events
	m_bInformation->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReportDialogBase::OnInformation ), NULL, this );
	m_bClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ReportDialogBase::OnClose ), NULL, this );

}

AboutDialogBase::AboutDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxFlexGridSizer* fgSizer90;
	fgSizer90 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer90->SetFlexibleDirection( wxBOTH );
	fgSizer90->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	wxFlexGridSizer* fgSizer109;
	fgSizer109 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer109->SetFlexibleDirection( wxBOTH );
	fgSizer109->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText135 = new wxStaticText( this, wxID_ANY, _("Simulator Plugin Version"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText135->Wrap( -1 );
	fgSizer109->Add( m_staticText135, 0, wxALL, 5 );

	m_stVersion = new wxStaticText( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_stVersion->Wrap( -1 );
	fgSizer109->Add( m_stVersion, 0, wxALL, 5 );


	fgSizer90->Add( fgSizer109, 1, wxEXPAND, 5 );

	m_staticText110 = new wxStaticText( this, wxID_ANY, _("This simulator plugin for opencpn is intended to aid testing and development of maritime auomation and instrumentation. An aim of this project is to utilise computerized weather data, to emulate the appearance of handling a vessel under power or sail, with U/I for manual control, with a basic autopilot feel and operation.\n\nLicense: GPLv3+\n\nSource Code:\nhttps://github.com/scadaperspective/Simulator_pi/\n\nAuthor:\nRon Southworth\n\nThis plugin is based on code developed for the ShipDriver_pi and weather_routing_pi by Mike Rossiter, \"Transmitter Dan\", Sean D'Epagnier and many, many others."), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText110->Wrap( 400 );
	fgSizer90->Add( m_staticText110, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer91;
	fgSizer91 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer91->SetFlexibleDirection( wxBOTH );
	fgSizer91->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_bAboutAuthor = new wxButton( this, wxID_ANY, _("About Author"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer91->Add( m_bAboutAuthor, 0, wxALL, 5 );

	m_bClose = new wxButton( this, wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer91->Add( m_bClose, 0, wxALL, 5 );


	fgSizer90->Add( fgSizer91, 1, wxEXPAND, 5 );


	this->SetSizer( fgSizer90 );
	this->Layout();
	fgSizer90->Fit( this );

	this->Centre( wxBOTH );

	// Connect Events
	m_bAboutAuthor->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogBase::OnAboutAuthor ), NULL, this );
	m_bClose->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogBase::OnClose ), NULL, this );
}

AboutDialogBase::~AboutDialogBase()
{
	// Disconnect Events
	m_bAboutAuthor->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogBase::OnAboutAuthor ), NULL, this );
	m_bClose->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( AboutDialogBase::OnClose ), NULL, this );

}
