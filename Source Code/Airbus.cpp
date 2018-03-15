//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Airbus.h"

Airbus :: Airbus(int capacity, int normalPrice, int speed)
{
    this->capacity = capacity;
    this->normalPrice = normalPrice;
    this->speed = speed;
    this->type = "airbus";
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