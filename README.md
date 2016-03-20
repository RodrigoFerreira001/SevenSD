Seven-Segments Display Library (SevenSD)
=========

A library for seven-segment display for Arduino.

Installation
------------

Download this archive and extract its contents in the Arduino libraries folder ( "../Arduino/libraries/").
If extracted correctly, the libraries folder should contain a folder called sevensd with the files sevensd.h, and sevensd.cpp keywords.txt.

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

	}

```



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
