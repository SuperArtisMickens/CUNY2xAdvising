#include <iostream>

// The Interface File a.k.a. The Header file
// Holds the class declaration only
class Pizza
{
    public:
        Pizza(double d, double p){
            diameter = d;
            price = p;
        }
        double getDiameter() const;
        double getPrice() const;

        void setDiameter(double d);
        void setPrice(double p);
        double unitPrice();
        double area();
    private:
        double diameter;
        double price;
};