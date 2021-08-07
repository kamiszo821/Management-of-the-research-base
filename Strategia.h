/**@file*/
#pragma once
using namespace std;
/**\class Strategia
\brief klasa implementuj¹ca wzorzec projektowy "strategia"
*/
class Strategia
{
public:
	virtual void koloruj() = 0; //<deklaracja metody wirtualnej
	static void zmien_kolor(int kolor);//<metoda statyczna odpowiadaj¹ca za zmianê koloru
};

/**\class Czerwony
\brief klasa zawieraj¹ca metodê kolorowania znaków konsoli na czerwono
*/

class Czerwony :public Strategia { 
public:
	void koloruj();
};

/**\class Niebieski
\brief klasa zawieraj¹ca metodê kolorowania znaków konsoli na niebiesko
*/

class Niebieski :public Strategia {
public:
	void koloruj();
};

/**\class Bialy
\brief klasa zawieraj¹ca metodê kolorowania znaków konsoli na bia³o
*/

class Bialy :public Strategia {
public:
	void koloruj();
};

/**\class Fioletowy
\brief klasa zawieraj¹ca metodê kolorowania znaków konsoli na fioletowo
*/

class Fioletowy :public Strategia {
public:
	void koloruj();
};

/**\class Zielony
\brief klasa zawieraj¹ca metodê kolorowania znaków konsoli na zielono
*/

class Zielony :public Strategia {
public:
	void koloruj();
};
