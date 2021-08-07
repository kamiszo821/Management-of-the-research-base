/**@file*/
#include "Naukowiec.h"
#include <list>
using namespace std;
/**class Baza_Naukowcow
* \brief klasa magazynuj�ca liste obiekt�w typu Naukowiec
* */
class Baza_Naukowcow
{
	list <Naukowiec> naukowcy; //<lista obiekt�w typu Naukowiec
public:
	void dodaj_naukowca(); //<deklaracja metody dodawania naukowca
	void usun_naukowca(); //<deklaracja metody usuwania naukowca
	void wyswietl_naukowcow(); //<deklaracja metody wy�wietlania naukowca
	Baza_Naukowcow() {}; //<deklaracja konstruktora 
	~Baza_Naukowcow() {}; //<eklaracja destruktora
};

