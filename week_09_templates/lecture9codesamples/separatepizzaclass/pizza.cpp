#include "pizza.h"

// The implementation file
// Defines all the member functions in the Pizza class
double Pizza::area()
{
    double r = diameter / 2;
    return r * r * 3.14159;
}

double Pizza::unitPrice()
{
    return (price / area());
}

void Pizza::setDiameter(double d)
{
    diameter = d;
}

void Pizza::setPrice(double p) 
{
    price = p;
}

double Pizza::getDiameter() const
{
    return diameter;
}

double Pizza::getPrice() const
{
    return price;
}
