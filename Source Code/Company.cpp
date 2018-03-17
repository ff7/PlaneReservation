//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Company.h"

Company :: Company()
{
    this->name = " ";
}

Company :: Company(string name)
{
    this->name = name;
}

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

void Company :: addClient(RegisteredPassenger p)
{
    this->clientList.push_back(p);
}

void Company ::listClients()
{
    for (int i = 0; i < clientList.size(); i++)
    {
        cout << clientList[i].getName() << " " << clientList[i].getJob();
    }
}

void Company ::addAirplane(Airplane a) {
    this->fleet.push_back(a);
}

void Company ::listAirplanes() {
    for (int i = 0; i < fleet.size(); i++)
    {
        cout << fleet[i].getCapacity();
    }
}

void Company ::addFlight(Flight f) {
    this->flightList.push_back(f);
}

void Company ::listFlights() {
    for (int i = 0; i < flightList.size(); i++)
    {
        cout << flightList[i].getAirplane().getType();
    }
}