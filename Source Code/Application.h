//
// Created by Francisco Ferreira on 14/03/18.
//

#ifndef PLANERESERVATION_APPLICATION_H
#define PLANERESERVATION_APPLICATION_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Passenger.h"
#include "RegisteredPassenger.h"
#include "Company.h"
#include "Utilities.h"
#include "Date.h"

using namespace std;

class Application
{
private:
    Company company;
public:
    Application();
    void startApp();
    void loadRegisteredPassengers(string path);
    void loadAirplanes();
    void loadFlights();
    void treatPassengerInfo(vector<string> passengerInfo);


};

#endif //PLANERESERVATION_APPLICATION_H
