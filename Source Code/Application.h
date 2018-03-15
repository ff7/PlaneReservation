//
// Created by Francisco Ferreira on 14/03/18.
//

#ifndef PLANERESERVATION_APPLICATION_H
#define PLANERESERVATION_APPLICATION_H

#include <iostream>
#include <fstream>

using namespace std;

class Application
{
private:
    string test;
public:
    Application();
    void getTest();
    void loadRegisteredPassengers(string path);
    void loadAirplanes();
    void loadFlights();

};

#endif //PLANERESERVATION_APPLICATION_H
