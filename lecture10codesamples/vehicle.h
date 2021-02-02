#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
    public:
    // All of these methods are available from objects of type Vehicle, and any derived classes
        void setMake(string ma);
        void setModel(string mo);
        string getMake();
        string getModel();

    // Now these member variables are available only in this class and
    // it's derived classes
    protected:
        string make;
        string model;

};


class Motorcycle : public Vehicle {
    public:
    // Notice here that these methods are only accessible to objects of the Motorcycle Class, not from 
    // objects of type "Vehicle"
        void setHelmetName(string h);
        string getHelmetName();
    protected:
        string helmetName;
};

