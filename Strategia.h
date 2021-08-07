/**@file*/
#pragma once
using namespace std;
/**\class Strategia
\brief klasa implementuj�ca wzorzec projektowy "strategia"
*/
class Strategia
{
public:
	virtual void koloruj() = 0; //<deklaracja metody wirtualnej
	static void zmien_kolor(int kolor);//<metoda statyczna odpowiadaj�ca za zmian� koloru
};

/**\class Czerwony
\brief klasa zawieraj�ca metod� kolorowania znak�w konsoli na czerwono
*/

class Czerwony :public Strategia { 
public:
	void koloruj();
};

/**\class Niebieski
\brief klasa zawieraj�ca metod� kolorowania znak�w konsoli na niebiesko
*/

class Niebieski :public Strategia {
public:
	void koloruj();
};

/**\class Bialy
\brief klasa zawieraj�ca metod� kolorowania znak�w konsoli na bia�o
*/

class Bialy :public Strategia {
public:
	void koloruj();
};

/**\class Fioletowy
\brief klasa zawieraj�ca metod� kolorowania znak�w konsoli na fioletowo
*/

class Fioletowy :public Strategia {
public:
	void koloruj();
};

/**\class Zielony
\brief klasa zawieraj�ca metod� kolorowania znak�w konsoli na zielono
*/

class Zielony :public Strategia {
public:
	void koloruj();
};
