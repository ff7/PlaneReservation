//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Concorde.h"

Concorde :: Concorde(string type, int capacity, int normalPrice, int speed)
{
    Airplane(capacity, normalPrice, speed);
    this->type = type;
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