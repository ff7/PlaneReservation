//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Company.h"

vector<Airplane> Company :: getFleet()
{
    return this->fleet;
}
vector<RegisteredPassenger> Company :: getClientList()
{
    return this->clientList;
}
vector<Flight> Company :: getFligthList()
{
    return this->flightList;
}