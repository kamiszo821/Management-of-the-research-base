/**@file*/
#pragma once
#include <iostream>
#include "Strategia.h"
using namespace std;
/**\class Dziedzina 
* Klasa zawierajπca w sobie dane dziedziny,metody,wskaünik na obiekt klasy Strategia
* 
*/
class Dziedzina {
	string opis; //<opis dziedziny
	int pkt_czasopi; //<lczba pkt.w zwiπzanych z niπ czasopismach naukowych
public:
	/**Getter opisu
	* @param brak
	* @return opis naukowca
	*/
	int getpkty() const { return pkt_czasopi; } 
	void setpkty(int pkt_czasopi) { this->pkt_czasopi = pkt_czasopi; } //<lczby pkt.w zwiπzanych z niπ czasopismach naukowych

	/**Getter opisu
	* @param brak
	* @return libcza pkt. w zwiπzanych z niπ czasopismach naukowych naukowca
	*/
	string getopis() const { return opis; } 
	void setopis(string opis) { this->opis =opis; } //setter opisu
	Dziedzina() {}; //<konstruktor
	~Dziedzina(); //<destruktor
	Strategia* strategia; //<Wskaünik na obiekt klasy Strategia
};


