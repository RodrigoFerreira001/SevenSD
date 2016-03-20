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

#include "sevensd.h"

//inner class SevenSDchar constructor
SevenSD::SevenSDchar::SevenSDchar(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte h){
	this->segA = new byte(a);
	this->segB = new byte(b);
	this->segC = new byte(c);
	this->segD = new byte(d);
	this->segE = new byte(e);
	this->segF = new byte(f);
	this->segG = new byte(g);
	this->segH = new byte(h);
}

//inner class SevenSDchar constructor
SevenSD::SevenSDchar::~SevenSDchar(){
	delete this->segA;
	delete this->segB;
	delete this->segC;
	delete this->segD;
	delete this->segE;
	delete this->segF;
	delete this->segG;
	delete this->segH;
}

// Getters for SevenSDchar segments values
void SevenSD::SevenSDchar::setA(byte a){
	*(this->segA) = a;
}

void SevenSD::SevenSDchar::setB(byte b){
	*(this->segB) = b;
}

void SevenSD::SevenSDchar::setC(byte c){
	*(this->segC) = c;
}

void SevenSD::SevenSDchar::setD(byte d){
	*(this->segD) = d;
}

void SevenSD::SevenSDchar::setE(byte e){
	*(this->segE) = e;
}

void SevenSD::SevenSDchar::setF(byte f){
	*(this->segF) = f;
}

void SevenSD::SevenSDchar::setG(byte g){
	*(this->segG) = g;
}

void SevenSD::SevenSDchar::setH(byte h){
	*(this->segH) = h;
}


//Setters for SevenSDchar segments values
byte SevenSD::SevenSDchar::getA(){
	return *(this->segA);
}

byte SevenSD::SevenSDchar::getB(){
	return *(this->segB);
}

byte SevenSD::SevenSDchar::getC(){
	return *(this->segC);
}

byte SevenSD::SevenSDchar::getD(){
	return *(this->segD);
}

byte SevenSD::SevenSDchar::getE(){
	return *(this->segE);
}

byte SevenSD::SevenSDchar::getF(){
	return *(this->segF);
}

byte SevenSD::SevenSDchar::getG(){
	return *(this->segG);
}

byte SevenSD::SevenSDchar::getH(){
	return *(this->segH);
}

//SevenSD constructor
SevenSD::SevenSD(byte pinA, byte pinB, byte pinC, byte pinD, byte pinE, byte pinF, byte pinG, byte pinH){
	this->pinA = new byte(pinA);
	this->pinB = new byte(pinB);
	this->pinC = new byte(pinC);
	this->pinD = new byte(pinD);
	this->pinE = new byte(pinE);
	this->pinF = new byte(pinF);
	this->pinG = new byte(pinG);
	this->pinH = new byte(pinH);

	pinMode(*(this->pinA), OUTPUT);
	pinMode(*(this->pinB), OUTPUT);
	pinMode(*(this->pinC), OUTPUT);
	pinMode(*(this->pinD), OUTPUT);
	pinMode(*(this->pinE), OUTPUT);
	pinMode(*(this->pinF), OUTPUT);
	pinMode(*(this->pinG), OUTPUT);
	pinMode(*(this->pinH), OUTPUT);
}

SevenSD::~SevenSD(){
	delete this->pinA;
	delete this->pinB;
	delete this->pinC;
	delete this->pinD;
	delete this->pinE;
	delete this->pinF;
	delete this->pinG;
	delete this->pinH;
}

void SevenSD::write(char c){
	switch(c){
    	case '0':
    		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '1':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '2':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '3':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '4':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '5':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '6':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '7':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '8':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '9':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'A':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'b':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'C':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'd':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),1);
      		digitalWrite(*(this->pinC),1);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'E':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),1);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case 'F':
      		digitalWrite(*(this->pinA),1);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),1);
      		digitalWrite(*(this->pinF),1);
      		digitalWrite(*(this->pinG),1);
      		digitalWrite(*(this->pinH),0);
    	break;
    
    	case '.':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),1);
    	break;

    	case ' ':
      		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
    	break;

		//in the case of an invalid character is written a empty space character 
    	default:
    		digitalWrite(*(this->pinA),0);
      		digitalWrite(*(this->pinB),0);
      		digitalWrite(*(this->pinC),0);
      		digitalWrite(*(this->pinD),0);
      		digitalWrite(*(this->pinE),0);
      		digitalWrite(*(this->pinF),0);
      		digitalWrite(*(this->pinG),0);
      		digitalWrite(*(this->pinH),0);
      	break;

  }
}

void SevenSD::writeSegments(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte h){
	digitalWrite(*(this->pinA),a);
    digitalWrite(*(this->pinB),b);
    digitalWrite(*(this->pinC),c);
    digitalWrite(*(this->pinD),d);
    digitalWrite(*(this->pinE),e);
    digitalWrite(*(this->pinF),f);
    digitalWrite(*(this->pinG),g);
    digitalWrite(*(this->pinH),h);
}

void SevenSD::writeSegments(SevenSD::SevenSDchar *c){
	digitalWrite(*(this->pinA),c->getA());
    digitalWrite(*(this->pinB),c->getB());
    digitalWrite(*(this->pinC),c->getC());
    digitalWrite(*(this->pinD),c->getD());
    digitalWrite(*(this->pinE),c->getE());
    digitalWrite(*(this->pinF),c->getF());
    digitalWrite(*(this->pinG),c->getG());
    digitalWrite(*(this->pinH),c->getH());
}

//Getters
void SevenSD::setPinA(byte pinA){
	*(this->pinA) = pinA;
}

void SevenSD::setPinB(byte pinB){
	*(this->pinB) = pinB;
}

void SevenSD::setPinC(byte pinC){
	*(this->pinC) = pinC;
}

void SevenSD::setPinD(byte pinD){
	*(this->pinD) = pinD;
}

void SevenSD::setPinE(byte pinE){
	*(this->pinE) = pinE;
}

void SevenSD::setPinF(byte pinF){
	*(this->pinF) = pinF;
}

void SevenSD::setPinG(byte pinG){
	*(this->pinG) = pinG;
}

void SevenSD::setPinH(byte pinH){
	*(this->pinH) = pinH;
}


//Setters
byte SevenSD::getPinA(){
	return *(this->pinA);
}

byte SevenSD::getPinB(){
	return *(this->pinB);
}

byte SevenSD::getPinC(){
	return *(this->pinC);
}

byte SevenSD::getPinD(){
	return *(this->pinD);
}

byte SevenSD::getPinE(){
	return *(this->pinE);
}

byte SevenSD::getPinF(){
	return *(this->pinF);
}

byte SevenSD::getPinG(){
	return *(this->pinG);
}

byte SevenSD::getPinH(){
	return *(this->pinH);
}