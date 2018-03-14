//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Flight.h"

Flight :: Flight(Airplane airplane, vector<Passenger> passengerList, Date departureDate, Date arrivalDate, Location departureLocation, Location arrivalLocation)
{
    this->airplane = airplane;
    this->passengerList = passengerList;
    this->departureDate = departureDate;
    this->arrivalDate = arrivalDate;
    this->departureLocation = departureLocation;
    this->arrivalLocation = arrivalLocation;
}
Airplane Flight :: getAirplane()
{
    return this->airplane;
}

vector<Passenger> Flight :: getPassengerList()
{
    return this->passengerList;
}

Date Flight :: getDepartureDate()
{
    return this->departureDate;
}
Date Flight :: getArrivalDate()
{
    return this->arrivalDate;
}
Location Flight :: getDepartureLocation()
{
    return this->departureLocation;
}
Location Flight :: getArrivalLocation()
{
    return this->arrivalLocation;
}
