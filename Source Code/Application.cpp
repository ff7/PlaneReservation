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

void Application ::loadRegisteredPassengers(string path)
{
    ifstream buffer;
    buffer.open(path);

    if (!buffer.is_open())
    {
        cout << "Wrong path" << endl;
    }

    string info;
    while(getline(buffer, info))
    {
        cout << info << ", ";
    }

    buffer.close();
}