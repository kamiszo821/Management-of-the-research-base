/**@file*/
#include "Naukowiec.h"
#include "Strategia.h"
#include <iostream>
#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <string>

/**Konstruktor klasy Naukowiec zawieraj¹cy metodê do nadawania parametrów naukowcom
* @param brak
*/

Naukowiec::Naukowiec()
{
	nadaj_parametry();
}

/**Metoda nadaj¹ca parametry naukowcom
* @param kategoria kategoria naukowca
* @return nic
*/

void Naukowiec::nadaj_parametry()
{

	cout << "Wybierz z listy dziedzine naukowca" << endl << "1.Fizyk  2.Chemik  3.Matematyk  4.Informatyk 5. Biolog" << endl;
	int kategoria=0;
	cin >> kategoria;
	switch (kategoria)
	{
	case 1:
	{
		dziedzina.strategia = new Czerwony();//<dynamiczna alokacja
		dziedzina.strategia->koloruj();
		break;
	}
	
	case 2:
	{
		dziedzina.strategia = new Zielony();//<alokacja pamiêci
		dziedzina.strategia->koloruj();
		break;
	}
	case 3:
	{
		dziedzina.strategia = new Bialy();//<alokacja pamiêci
		dziedzina.strategia->koloruj();
		break;
	}
	case 4:
	{
		dziedzina.strategia = new Fioletowy();//<alokacja pamiêci
		dziedzina.strategia->koloruj();
		break;
	}
	case 5:
	{
		dziedzina.strategia = new Niebieski();//<alokacja pamiêci
		dziedzina.strategia->koloruj();
		break;
	}
	default:
		break;
	}
	
	this->ID =InputField<int>("ID");
	this->tytul = InputField<string>("tytul naukowy");
	this->imie = InputField<string>("imie");
	this->nazwisko = InputField<string>("nazwisko");
	this->liczba_publ = InputField<int>("liczbe publikacji");
	this->Hirsch = InputField<int>("wartosc indeksu Hirscha");
	this->dziedzina.setopis(InputField<string>("opis"));
	this->dziedzina.setpkty(InputField<int>("ilosc pkt. zwiazanych z w czasopismach naukowych"));
	Strategia::zmien_kolor(FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
	}




