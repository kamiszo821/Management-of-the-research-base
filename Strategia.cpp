/**@file*/
#include "Strategia.h"
#include <windows.h>
#include <iostream>
#include <cstdlib>

/**Metoda koloruj�ca znaki konsoli na czerwono
* @param brak
* @return nic
*/

void Czerwony::koloruj()
{
	Strategia::zmien_kolor(FOREGROUND_RED);
}

/**Metoda koloruj�ca znaki konsoli na niebiesko
* @param brak
* @return nic
*/


void Niebieski::koloruj()
{
	Strategia::zmien_kolor(FOREGROUND_BLUE);
}

/**Metoda koloruj�ca znaki konsoli na bia�o
* @param brak
* @return nic
*/


void Bialy::koloruj()
{
	Strategia::zmien_kolor(FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_GREEN);
}

/**Metoda koloruj�ca znaki konsoli na fioletowo
* @param brak
* @return nic
*/


void Fioletowy::koloruj()
{
	Strategia::zmien_kolor(FOREGROUND_BLUE | FOREGROUND_RED);
}

/**Metoda koloruj�ca znaki konsoli na zielono
* @param brak
* @return nic
*/



void Zielony::koloruj()
{
	Strategia::zmien_kolor(FOREGROUND_GREEN);
}

/**Metoda zmieniaj�ca kolor znak�w konsoli w zale�no�ci od podanego argumentu,koloru
* @param kolor kolor znak�w konsoli
* @return nic
*/


void Strategia::zmien_kolor(int kolor)
{
	HANDLE hout;
	hout = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hout, kolor);

}