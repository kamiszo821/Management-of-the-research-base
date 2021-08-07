/**@file*/
#include "Menu.h"
#include "Baza_Naukowcow.h"
#include "Naukowiec.h"
/** Metoda wyœwietlaj¹ca nag³ówek
* @param brak
* @return nic
* */
void Menu::mainheader()
{
	cout << "=============="<<endl;
	cout << "BAZA NAUKOWCOW" << endl;
	cout << "=============="<<endl<<endl;
}

/** Metoda pozowlaj¹ca na komunikacje programu z u¿ytkownikiem
* @param brak
* @return nic
* */

void Menu::Switch()
{
	Baza_Naukowcow b1; //<obiekt klasy Baza_Naukowcow
	do
	{
		cout << "1.DODAJ NAUKOWCA" << endl << "2.USUN NAUKOWCA" << endl << "3.WYSWIETL NAUKOWCOW" << endl <<"4.ZAKONCZ PROGRAM (UTRATA DANYCH BAZY!)" << endl << endl;
		cin >> li;
		system("cls");
		switch (li)
		{
		case 1:
			b1.dodaj_naukowca();
			break;
		case 2:
			b1.usun_naukowca();
			break;
		case 3:
			b1.wyswietl_naukowcow();
			break;
		case 4:
			cout << "ZAKONCZONO DZIALANIE PROGRAMU";
			break;
		default:
			break;
		}
	} while (li !=4);
	
}
