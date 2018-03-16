//
// Created by Francisco Ferreira on 15/03/18.
//

#ifndef PLANERESERVATION_UTILITIES_H
#define PLANERESERVATION_UTILITIES_H

#include <iostream>
#include "Date.h"
#include <string>

using namespace std;


int* dateToArray(); // retorna o apontador para a primeira posicao do array
Date stringToDate(string s);
int stringToInt(string s);

#endif //PLANERESERVATION_UTILITIES_H
