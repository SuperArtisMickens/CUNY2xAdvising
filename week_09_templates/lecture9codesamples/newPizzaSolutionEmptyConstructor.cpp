#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza(){
            diameter = 10;
            price = 14.99;
        }
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

    // since we want the default values for p1, we won't set any values here
    Pizza p1;

    // p1 already has it's diameter and price set. Let's use the getters/accessors to check
    cout << "p1's diameter is: " << p1.getDiameter() << endl;
    cout << "p1's price is: " << p1.getPrice() << endl;

    // since don't want the default values for p2, let's use the setters/mutators to change them
    Pizza p2;
    p2.setDiameter(12);
    p2.setPrice(16.99);

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
