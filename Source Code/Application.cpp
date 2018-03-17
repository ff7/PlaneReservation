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
        this->company.addAirplane(createAirplane(airplaneInfo[i]));
    }
}

Airplane Application ::createAirplane(string s) {
    string type, capacity, price, speed;
    vector<string> v = {type, capacity, price, speed};

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
    if (v[0] == "Airbus")
        return Airbus(v[0],stringToInt(v[1]),stringToInt(v[2]),stringToInt(v[3]));
    else if (v[0] == "Boeing")
        return Boeing(v[0],stringToInt(v[1]),stringToInt(v[2]),stringToInt(v[3]));
    else if (v[0] == "Concorde")
        return Concorde(v[0],stringToInt(v[1]),stringToInt(v[2]),stringToInt(v[3]));
    return Airplane(stringToInt(v[1]),stringToInt(v[2]),stringToInt(v[3]));
}
