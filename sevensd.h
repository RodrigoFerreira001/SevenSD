/*
  This file is part of SevenSD library.

    SevenSD is free library: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    SevenSD is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

	developed by Rodrigo Ferreira: rodrigoferreira001@hotmail.com
	São João Del Rei - 2016

*/

#ifndef SEVENSD_H
#define SEVENSD_H

#include <Arduino.h>

class SevenSD{
private:

	//pins of SS display
	byte *pinA;
	byte *pinB;
	byte *pinC;
	byte *pinD;
	byte *pinE;
	byte *pinF;
	byte *pinG;
	byte *pinH;

public:

	//Inner class, ssd character
	class SevenSDchar{
		private:
			//store the values of a,b,c,d,e,f,g,h segments
			byte *segA;
			byte *segB;
			byte *segC;
			byte *segD;
			byte *segE;
			byte *segF;
			byte *segG;
			byte *segH;
		public:
			//constructor
			SevenSDchar(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte h);

			//Destructor
			~SevenSDchar();

			//Getters and Setters
			void setA(byte a);
			void setB(byte b);
			void setC(byte c);
			void setD(byte d);
			void setE(byte e);
			void setF(byte f);
			void setG(byte g);
			void setH(byte h);

			byte getA();
			byte getB();
			byte getC();
			byte getD();
			byte getE();
			byte getF();
			byte getG();
			byte getH();
	};

	//constructor, 
	SevenSD(byte pinA, byte pinB, byte pinC, byte pinD, byte pinE, byte pinF, byte pinG, byte pinH);

	//Destructor
	~SevenSD();

	//write in SS display (possible characters: 0,1,2,3,4,5,6,7,8,9,A,b,C,d,E,F,.,"white space")
	void write(char c);

	//it allows the user to set the value of each segment
	void writeSegments(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte h);

	//Receive a SevenSDchar and wirite it on SevenSD
	void writeSegments(SevenSD::SevenSDchar *c);

	void setPinA(byte pinA);
	void setPinB(byte pinB);
	void setPinC(byte pinC);
	void setPinD(byte pinD);
	void setPinE(byte pinE);
	void setPinF(byte pinF);
	void setPinG(byte pinG);
	void setPinH(byte pinH);
	
	byte getPinA();
	byte getPinB();
	byte getPinC();
	byte getPinD();
	byte getPinE();
	byte getPinF();
	byte getPinG();
	byte getPinH();

};




#endif

