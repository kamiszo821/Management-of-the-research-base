//**@file*/
#include <iostream>
#include "Widok.h"
#include "Menu.h"
using namespace std;

/** Metoda statyczna pozwalaj¹ca na komunikacje u¿ytkownika z programem
* @return true zwraca wartosc true gdy zadanie ma zostac kontynuowane
* */
bool Widok::pytania_do_usera()
{
	
	int wybor = 0;
	cout << "Czy na pewno chcesz wykonac to dzialanie? (1.Tak/ 2.Nie)";
	cin >> wybor;
	system("cls");
	if (wybor == 1)
	{
		return true;
	}
	return false;
}

/** Metoda statyczna pozwalaj¹ca na komunikacje u¿ytkownika z programem
*@return numer numer naukowca do usuniêcia
* */

int Widok::numer_do_usuniecia()
{
	cout << "Podaj numer naukowca, ktory chcesz usunac"<<endl;
	int numer;
	cin >> numer;
	return numer;
}

/** Metoda statyczna s³u¿¹ca do wypisania komunikatu o pustej bazie naukowców
*
* */

void Widok::empty_info()
{
	cout << "Baza naukowcow jest pusta!" << endl << endl;
}

