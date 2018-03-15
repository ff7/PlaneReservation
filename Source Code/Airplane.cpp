//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Airplane.h"

Airplane ::Airplane() {}

Airplane :: Airplane(int capacity, int normalPrice, int speed)
{
    this->capacity = capacity;
    this->normalPrice = normalPrice;
    this->speed = speed;
}

int Airplane :: getCapacity()
{
    return this->capacity;
}

int Airplane :: getNormalPrice()
{
    return this->normalPrice;
}

int Airplane ::getSpeed()
{
    return this->speed;
}

string Airplane ::getType()
{
    return this->type;
}