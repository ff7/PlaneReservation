//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Application.h"

Application ::Application()
{
    this->test = "Hello World! \n";
}

void Application ::getTest()
{
    cout << this->test;
}