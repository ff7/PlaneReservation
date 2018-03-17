//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Airbus.h"

Airbus :: Airbus(string type, int capacity, int normalPrice, int speed)
{
    Airplane(capacity,normalPrice,speed);
    this->type = type;
}

int Airbus :: getCapacity()
{
    return this->capacity;
}

int Airbus :: getNormalPrice()
{
    return this->normalPrice;
}

int Airbus ::getSpeed()
{
    return this->speed;
}

string Airbus ::getType()
{
    return this->type;
}