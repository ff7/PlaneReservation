//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Boeing.h"

Boeing :: Boeing(int capacity, int normalPrice, int speed)
{
    this->capacity = capacity;
    this->normalPrice = normalPrice;
    this->speed = speed;
    this->type = "boeing";
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