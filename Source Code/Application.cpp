//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Application.h"

Application ::Application()
{
    this->company = Company("AirRoyal");
}

void Application ::loadRegisteredPassengers(string path)
{
    ifstream buffer;
    buffer.open(path);

    string info;
    vector<string> passengerData;

    while(buffer.good())
    {
        getline(buffer, info);
        passengerData.push_back(info);
    }

    treatPassengerInfo(passengerData);

    buffer.close();
}

void Application ::treatPassengerInfo(vector<string> passengerInfo)
{
    RegisteredPassenger p = RegisteredPassenger(" ", " ", Date(0,0,0), 0);
    vector<string> singlePassenger;
    int j = 0;
    for (int i = 0; i < passengerInfo.size(); i++)
    {
        if (j != 5) {
            singlePassenger.push_back(passengerInfo[i]);
            j++;
        }
        else {
            j = 0;
            for (int j = 0; j < singlePassenger.size();j++)
            {
                p = RegisteredPassenger(singlePassenger[1], singlePassenger[2], stringToDate(singlePassenger[3]), stringToInt(singlePassenger[4]));
            }
            this->company.addClient(p);
        }

    }
}

void Application ::startApp()
{
    loadRegisteredPassengers("/Users/ff/CLionProjects/PlaneReservation/res/RegisteredPassengers.txt");
    this->company.listClients();
}

