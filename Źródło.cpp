/**@file*/
#include <iostream>
#include "Baza_Naukowcow.h"
#include "Menu.h"

/** Funkcja main programu
*@param brak
* @return nic
*/
int main()
{
	Menu m1; //<obiekt klasy Menu
	m1.mainheader(); //<wywo�anie metody klasy Menu drukuj�cej nag��wek
	m1.Switch(); ////<wywo�anie metody klasy Menu do komunikacji z programem
}