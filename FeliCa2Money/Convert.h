/*
 * FeliCa2Money
 *
 * Copyright (C) 2001-2007 Takuya Murakami
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef	_CONVERT_H
#define	_CONVERT_H

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;
typedef basic_ofstream<char>	ofstream;

#include "Transaction.h"
#include "Card.h"

/**
   @brief コンバータ
*/
class Converter {
public:
	void Convert(Card *c, AnsiString ofxfile);

private:
	Card *card;

	void WriteOfx(ofstream &ofs);

	AnsiString dateStr(const DateTime &dt);
	AnsiString transIdStr(const Transaction *t);	
};
#endif	// _CONVERT_H

