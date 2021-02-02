#include <iostream>

using namespace std;

class Pizza
{
    public:
        Pizza(double d, double p){
            diameter = d;
            price = p;
        }
        double unitPrice();
        double area();
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

int main()
{

    Pizza p1(10, 14.99);
    Pizza p2(12, 16.99);

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
