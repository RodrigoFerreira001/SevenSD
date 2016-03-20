Seven-Segments Display Library (SevenSD)
=========

A library for seven-segment display for Arduino.

Installation
------------

Download this archive and extract its contents in the Arduino libraries folder ( "../Arduino/libraries/").
If extracted correctly, the libraries folder should contain a folder called sevensd with the files sevensd.h,sevensd.cpp and keywords.txt.

Usage
-----
In your Arduino code, include the sevens library:

```bash
	#include <sevensd.h>
```

Com a biblioteca SevenSD você poderá criar dois tipos de objetos, SevenSD e SevenSDchar:
- SevenSD: Armazenam a quais pinos do arduino o visor de sete segmentos está conectado;
- SevenSDchar: Armazena um configuração de 0s e 1s que representa um caracter no display de sete-segmentos;

```bash
	#include <sevensd.h>

	SevenSD *ssd;
	SevenSD::SevenSDchar *chA;

	void setup(){

		//ssd = new SevenSD(byte pinA, byte pinB, byte pinC, byte pinD, byte pinE, byte pinF, byte pinG, byte pinH);
		ssd = new SevenSD(2,3,4,5,6,7,8,9);

		//chA = new SevenSD::SevenSDchar(a,b,c,d,e,f,g,h);
		chA = new SevenSD::SevenSDchar(1,1,1,0,1,1,1,0);

		/*you cal also do
		SevenSD d7(3,4,2,5,6,7,8,9);
		SevenSD::SevenSDchar chr(0,0,0,0,0,0,0,1);

		or

		ssd = new SevenSD();
		ssd->setPinA(2);
  		ssd->setPinB(3);
  		ssd->setPinC(4);
  		ssd->setPinD(5);
  		ssd->setPinE(6);
  		ssd->setPinF(7);
  		ssd->setPinG(8);
  		ssd->setPinH(9);

  		chA = SevenSD::SevenSDchar();
  		cha->SetA(0);
  		cha->SetB(0);
  		cha->SetC(0);
  		cha->SetD(0);
  		cha->SetE(0);
  		cha->SetF(0);
  		cha->SetG(0);
  		cha->SetH(1);

		*/
	}

```

Depois do objeto SevenSD criado você poderá facilmente manipular o visor de sete sgmentos com as seguintes funções:
- write(char c): Basta informar o caracter a ser exibido no display (0-9,A,b,C,d,E,F, ,.). Caso seja informado um caractere inválido, o display exibirá " ".
- writeSegments(byte a, byte b, byte c, byte d, byte e, byte f, byte g, byte g): Basta informar quais segmentos ficarão acesos (1) ou apagados (0).
`	 ___a___
	f		b
	|___g___|
	e		c
	|___d___|(h)
`	
- writeSegments(SevenSD::SevenSDchar c): caso queira exibir um caractere personalizado já preenchido, basta fornecê-lo.

Para verificar a quais portas cada segmento está conectado utilize a função getPin:
`Serial.pritln(ssd->getPinA(),DEC);
`



Contribute
----------

Please feel free to send in suggestions and pull requests. If you have written a client which is compatible with this plugin, tell me about it and I'll mention it here!

License
-------

SevenSD is free library: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

SevenSD is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
