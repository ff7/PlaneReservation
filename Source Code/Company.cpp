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
    cout << clientList.size();
    for (int i = 0; i < clientList.size(); i++)
    {
        cout << clientList[i].getName() << " " << clientList[i].getJob();
    }

}