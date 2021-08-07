/**@file*/
#include "Baza_Naukowcow.h"
#include "Naukowiec.h"
#include "Menu.h"
#include "Widok.h"
#include <Windows.h>
#include "Strategia.h"
#include <cstdlib>

/** Metoda dodaj¹ca naukowca
* @param wybor wybor podany przez u¿ytkownika
* */

void Baza_Naukowcow::dodaj_naukowca()
{
	if(Widok::pytania_do_usera())
	{
		naukowcy.emplace_back();
	}
}

/** Definicja metody usuwaj¹cej naukowca
* @param wybor wybor podany przez u¿ytkownika
* */

void Baza_Naukowcow::usun_naukowca()
{	
	Widok::pytania_do_usera();
	if (naukowcy.empty())
		Widok::empty_info();
	else
	{
		int i = 0;
		for (list<Naukowiec>::iterator it = naukowcy.begin(); it != naukowcy.end(); it++,i++) 
			cout <<i<<" "<<"imie: "<<(*it).getimie()<<" "<<"nazwisko: "<<(*it).getnazwisko()<<endl;
		list<Naukowiec>::iterator it = naukowcy.begin();
		advance(it, Widok::numer_do_usuniecia());
		naukowcy.erase(it);
	}

}
/** Funkcja wyœwietlaj¹ca naukowca
* @param brak
* */

void Baza_Naukowcow::wyswietl_naukowcow() 
{
	if (naukowcy.empty())
		Widok::empty_info();
	else
	{
		for (list<Naukowiec>::iterator it = naukowcy.begin(); it != naukowcy.end(); it++)
			cout << (*it);
	}
	Strategia::zmien_kolor(FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}

/** Funkcja odpowiadaj¹ca za przeci¹¿enie operatora <<
* @param os klasa strumienia wyjœcia
* @param nau referencja na typ naukowiec
* @return os dane naukowca
* */

ostream& operator<<(ostream& os, const Naukowiec& nau)
{
	nau.dziedzina.strategia->koloruj();
	os <<"ID: "<< nau.ID<<" |";
	os << "Tytul: "<<nau.tytul<< " |";
	os <<"Imie: "<< nau.imie << " |";
	os <<"Nazwisko: "<< nau.nazwisko << " ";
	os <<"Liczba publikacji: "<< nau.liczba_publ << " |";
	os <<"Wartosc indeksu Hirscha: "<< nau.Hirsch << " |";
	os << "Opis: " << nau.dziedzina.getopis() << " |";
	os <<"Pkt. w czasopismach naukowych: "<< nau.dziedzina.getpkty() <<endl<<endl<<endl<<endl;
	return os;
}


