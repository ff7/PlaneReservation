//
// Created by Francisco Ferreira on 14/03/18.
//

#ifndef PLANERESERVATION_FLIGHT_H
#define PLANERESERVATION_FLIGHT_H

#include <iostream>
#include <vector>

#include "Airplane.h"
#include "Boeing.h"
#include "Concorde.h"
#include "Airbus.h"
#include "Passenger.h"
#include "RegisteredPassenger.h"
#include "NormalPassenger.h"
#include "Date.h"
#include "Location.h"

using namespace std;

class Flight
{
private:
    Airplane airplane;
    vector<Passenger> passengerList;
    Date departureDate;
    Date arrivalDate;
    Location departureLocation;
    Location arrivalLocation;
public:
    Flight(Airplane airplane, vector<Passenger> passengerList, Date departureDate, Date arrivalDate, Location departureLocation, Location arrivalLocation);
    Airplane getAirplane();
    vector<Passenger> getPassengerList();
    Date getDepartureDate();
    Date getArrivalDate();
    Location getDepartureLocation();
    Location getArrivalLocation();

};
#endif //PLANERESERVATION_FLIGHT_H
