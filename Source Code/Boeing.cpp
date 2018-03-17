//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Boeing.h"

Boeing :: Boeing(string type, int capacity, int normalPrice, int speed)
{
    Airplane(capacity,normalPrice,speed);
    this->type = type;
}

int Boeing :: getCapacity()
{
    return this->capacity;
}

int Boeing :: getNormalPrice()
{
    return this->normalPrice;
}

int Boeing ::getSpeed()
{
    return this->speed;
}

string Boeing ::getType()
{
    return this->type;
}