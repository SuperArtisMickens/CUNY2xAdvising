#include <iostream>
#include "vehicle.h"

int main()
{

    Vehicle v1;
    v1.setMake("Toyota");
    v1.setModel("Corolla");
    cout << "My first vehicle is a: " << endl;
    cout << v1.getMake() << " " << v1.getModel() << endl;
    Motorcycle m1;
    m1.setMake("Harley Davidson");
    m1.setModel("Street 750");

    cout << "My second vehicle is a: " << endl;
    cout << m1.getMake() << " " << m1.getModel() << endl;

    // The line below would return an error since the method setHelmetName only exists in the derived
    // class, not the base class Vehicle
    // v1.setHelmetName("Harley-Davidson Modular Helmet");

    m1.setHelmetName("Harley-Davidson Modular Helmet");
    cout << "Motorcycle's Helmet: " << m1.getHelmetName() << endl;
    return 0;
}