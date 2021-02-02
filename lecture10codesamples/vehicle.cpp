#include <iostream>
#include <string>
#include "vehicle.h"

void Vehicle::setMake(string ma)
{
    make = ma;
}

void Vehicle::setModel(string mo)
{
    model = mo;
}

string Vehicle::getMake()
{
    return make;
}

string Vehicle::getModel()
{
    return model;
}

void Motorcycle::setHelmetName(string h)
{
    helmetName = h;
};

string Motorcycle::getHelmetName()
{
    return helmetName;
};