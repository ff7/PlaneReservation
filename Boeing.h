//
// Created by Francisco Ferreira on 14/03/18.
//

#ifndef PLANERESERVATION_BOEING_H
#define PLANERESERVATION_BOEING_H

#include <iostream>
#include "Airplane.h"

using namespace std;

class Boeing: public Airplane
{
private:
    string type;
    int capacity;
    int normalPrice;
    int speed;
public:
    Boeing(int capacity, int normalPrice, int speed);
    string getType();
    int getCapacity();
    int getNormalPrice();
    int getSpeed();

};
#endif //PLANERESERVATION_BOEING_H
