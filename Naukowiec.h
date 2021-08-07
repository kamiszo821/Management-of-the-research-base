/**@file*/
#pragma once
#include <iostream>
#include <memory>
#include "Dziedzina.h"
using namespace std;

/**\class Naukowiec
*\brief Klasa zawiera w sobie dane naukowca,metody
*/
class Naukowiec {
	int ID; //<ID
	string tytul; //<tytul naukowy
	string imie; //<imie naukowca
	string nazwisko; //<nazwisko naukowca
	int liczba_publ; //<liczba publikacji naukowca
	int Hirsch; //<wartoœæ indeksu Hirscha naukowca
public:
	/**Getter ID
	* @param brak
	* @return ID naukowca
	*/
	int getID() const { return ID; }

	/**Getter tytulu
	* @param brak
	* @return tytul naukowca
	*/
	string gettytul() const { return tytul; }

	/**Getter imienia
	* @param brak
	* @return imienia naukowca
	*/
	string getimie() const { return imie; }

	/**Getter nazwiska
	* @param brak
	* @return nazwisko naukowca
	*/
	string getnazwisko() const { return nazwisko; }

	/**Getter liczby publikacji
	* @param brak
	* @return liczba publikacji naukowca
	*/
	int getliczba_publ() const { return liczba_publ; }
	/**Getter wartoœci indeksu Hirscha
	* @param brak
	* @return Hirsch wartoœæ indeksu Hirscha naukowca
	*/
	int getHirsch() const { return Hirsch; }

	Naukowiec(); //<konstruktor
	~Naukowiec() {}; //<destruktor
	void nadaj_parametry(); //<deklaracja funkcji nadaj¹cej parametry naukowca
	friend ostream& operator<<(ostream& os, const Naukowiec& nau);//<deklaracja funkcji zaprzyja¿nionej
	Dziedzina dziedzina; //<obiekt klasy Dziedzina

	/**Szablon do wpisywania danych ró¿nych typów
	* @param fieldName 
	* @return temp zmienna tymczasowa s³u¿¹ca do wpisywania danych
	*/
	template <typename T>
	T InputField(string fieldName)
	{
		T temp;
		cout << "Podaj " << fieldName << endl;
		cin >> temp;
		return temp;
	}
};
