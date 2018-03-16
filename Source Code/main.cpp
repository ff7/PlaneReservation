//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Application.h"

int main()
{
    Application app;
    app.startApp();
    app.loadRegisteredPassengers("/Users/ff/CLionProjects/PlaneReservation/res/RegisteredPassengers.txt");
    return 0;
}