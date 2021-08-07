/**@file*/
#include "Dziedzina.h"
#include <windows.h>
#include <iostream>
#include <cstdlib>
using namespace std;

/*Destruktor uswuwajπcy wskaünik na strategie
* @param brak
* @return nic
*/
Dziedzina::~Dziedzina()
{
	if(strategia!=nullptr)
	delete strategia;
}
