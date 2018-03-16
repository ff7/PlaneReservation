//
// Created by Francisco Ferreira on 15/03/18.
//

#include "Utilities.h"
#include <string>

int* dateToArray()
{
    return 0;
}

Date stringToDate(string s)
{
    string day = s.substr(0, s.find("/"));
    string month = s.substr(3,5);
    string year = s.substr(7,10);
    Date d(stoi(day), stoi(month), stoi(year));
    return d;

}

int stringToInt(string s)
{
    return stoi(s);
}