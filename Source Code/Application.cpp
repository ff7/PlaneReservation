//
// Created by Francisco Ferreira on 14/03/18.
//

#include "Application.h"

Application ::Application()
{
    this->company = Company("AirRoyal");
}

void Application ::startApp()
{
    loadRegisteredPassengers("/Users/ff/CLionProjects/PlaneReservation/res/RegisteredPassengers.txt");
    loadAirplanes("/Users/ff/CLionProjects/PlaneReservation/res/Airplanes.txt");
    //loadFlights("/Users/ff/CLionProjects/PlaneReservation/res/Flights.txt");
    //this->company.listClients();
    this->company.listAirplanes();
}

// Loading Passengers

void Application ::loadRegisteredPassengers(string path)
{
    ifstream buffer;
    buffer.open(path);

    string info;
    vector<string> passengerData;

    while(!buffer.eof())
    {
        getline(buffer, info);
        passengerData.push_back(info);
    }
    treatPassengerInfo(passengerData);

    buffer.close();

}

void Application ::treatPassengerInfo(vector<string> passengerInfo)
{
    for (int i = 0; i < passengerInfo.size(); i++)
    {
        this->company.addClient(createClient(passengerInfo[i]));
    }
}


RegisteredPassenger Application :: createClient(string s)
{
    string name, job, date, average;
    vector<string> v = {name, job, date, average};
    int count = 0;

    string :: iterator it = s.begin();

    for (; it < s.end(); it++)
    {
        if((*it) != ';')
        {
            v.at(count).push_back(*it);
        }
        else
        {
            count++;
        }
    }
    return RegisteredPassenger(v[0],v[1],stringToDate(v[2]), stringToInt(v[3]));
}

// Loading Airplanes

void Application ::loadAirplanes(string path) {
    ifstream buffer;
    buffer.open(path);

    string info;
    vector<string> planeData;

    while(!buffer.eof())
    {
        getline(buffer, info);
        planeData.push_back(info);
    }
    treatAirplaneInfo(planeData);

    buffer.close();
}

void Application ::treatAirplaneInfo(vector<string> airplaneInfo)
{
    for (int i = 0; i < airplaneInfo.size(); i++)
    {
        Airplane *a = createAirplane(airplaneInfo[i]);
        this->company.addAirplane(a);
    }
}

Airplane *Application ::createAirplane(string s) {
    string type, capacity, price, speed;
    vector<string> v = {type, capacity, price, speed};

    Airplane *a;

    string :: iterator it = s.begin();
    int count = 0;

    for (; it < s.end(); it++)
    {
        if((*it) != ';')
        {
            v.at(count).push_back(*it);
        }
        else
        {
            count++;
        }
    }

    if (v[0] == "Boeing") {
        a = new Boeing();
        a->setType(v[0]);
        a->setCapacity(stringToInt(v[1]));
        a->setNormalPrice(stringToInt(v[2]));
        a->setSpeed(stringToInt(v[3]));
        return a;
    }
    else if (v[0] == "Airbus"){
        a = new Boeing();
        a->setType(v[0]);
        a->setCapacity(stringToInt(v[1]));
        a->setNormalPrice(stringToInt(v[2]));
        a->setSpeed(stringToInt(v[3]));
        return a;    }
    else if (v[0] == "Concorde"){
        a = new Boeing();
        a->setType(v[0]);
        a->setCapacity(stringToInt(v[1]));
        a->setNormalPrice(stringToInt(v[2]));
        a->setSpeed(stringToInt(v[3]));
        return a;    }

    return nullptr;
}