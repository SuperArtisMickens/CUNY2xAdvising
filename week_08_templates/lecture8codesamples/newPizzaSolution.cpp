#include <iostream>

using namespace std;

class Pizza
{
    public:
        double unitPrice();
        double area();
        void setDiameter(double d);
        void setPrice(double p);
        double getDiameter();
        double getPrice();

    private:
        double diameter;
        double price;
};


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

double Pizza::getDiameter()
{
    return diameter;
}

double Pizza::getPrice() 
{
    return price;
}

int main()
{

    Pizza p1;
    p1.setPrice(14.99);
    p1.setDiameter(10);

    Pizza p2;
    p2.setPrice(16.99);
    p2.setDiameter(12);

    double u1 = p1.unitPrice();
    double u2 = p2.unitPrice();

    if (u1 < u2)
    {
        cout << "Best buy is Pizza 1" << endl;
    }
    else
    {
        cout << "Best buy is Pizza 2" << endl;
    }

}
