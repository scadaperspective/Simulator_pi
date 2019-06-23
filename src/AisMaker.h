/******************************************************************************
*
* Project:  OpenCPN
* Purpose:  Simulator Plugin
* Author:   Mike Rossiter. AIS encoding ported from AISConverter Python code by @transmitterdan
*
***************************************************************************
*   Copyright (C) 2019 by Mike Rossiter                                   *
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

#include <wx/wx.h>
#include <vector>
#include <cstdint>
#include <algorithm>
#include <string>
#include <list>
#include <bitset>
#include <wx/textfile.h>
#include <time.h>


using namespace std;

class AisMaker{

public:

	string Str2Str(string str, char* charsToRemove);
	float Str2Float(string str, char* exc);
	int Str2Int(string str, char* exc);
	string Int2BString(int value, int length);
	int findIntFromLetter(char letter);
	char findCharFromNumber(int mp);
	string Str2Six(string str, int length);
	int BString2Int(char * bitlist);
	string NMEAencapsulate(string BigString, int numsixes);
	wxString makeCheckSum(wxString mySentence);
	wxString nmeaEncode(wxString type, int MMSI, wxString status, double spd, double ilat, double ilon, double crse, double hdg, wxString channel, wxString timestamp);

protected:





};