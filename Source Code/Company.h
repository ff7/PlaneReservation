//
// Created by Francisco Ferreira on 14/03/18.
//

#ifndef PLANERESERVATION_COMPANY_H
#define PLANERESERVATION_COMPANY_H

#include <iostream>
#include <vector>

#include "Flight.h"
#include "Airplane.h"
#include "Airplane.h"
#include "Boeing.h"
#include "Concorde.h"
#include "Passenger.h"
#include "RegisteredPassenger.h"

class Company
{
private:
    vector<Airplane> fleet;
    vector<RegisteredPassenger> clientList;
    vector<Flight> flightList;
public:
    Company();
    vector<Airplane> getFleet();
    vector<RegisteredPassenger> getClientList();
    vector<Flight> getFligthList();


};

#endif //PLANERESERVATION_COMPANY_H
