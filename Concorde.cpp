//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Concorde.h"

Concorde :: Concorde(int capacity, int normalPrice, int speed)
{
    this->capacity = capacity;
    this->normalPrice = normalPrice;
    this->speed = speed;
    this->type = "concorde";
}

int Concorde :: getCapacity()
{
    return this->capacity;
}

int Concorde :: getNormalPrice()
{
    return this->normalPrice;
}

int Concorde ::getSpeed()
{
    return this->speed;
}

string Concorde ::getType()
{
    return this->type;
}