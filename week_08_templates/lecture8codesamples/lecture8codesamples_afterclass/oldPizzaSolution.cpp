#include <iostream>

using namespace std;

double area(double diameter); 
double unitPrice(int diameter, double price);

int main()
{
    int diam1 = 10, diam2 = 12;
    double price1 = 14.99, price2 = 16.99;

    double unitprice_pizza1 = unitPrice(diam1, price1);
    double unitprice_pizza2 = unitPrice(diam2, price2);
    
    if (unitprice_pizza1 < unitprice_pizza2)
    {
        cout << "Best buy is Pizza 1" << endl;
    }
    else
    {
        cout << "Best buy is Pizza 2" << endl;
    }
}

double area(double diameter)
{
    double radius = diameter / 2;
    return 3.14159 * radius * radius;
}

double unitPrice(int diameter, double price)
{
    double a = area(diameter);
    return (price / a);
}
