#include <iostream>
#include <string>

using namespace std;

// create a new Class "Car"
// member varaibles include: “Make”, “Model”, “Year”, and “Price”
// write a constructor that initialized the data
// public member function that displays all the data

class Car{
    public:
        Car(string ma, string mo, int y, double p){
            make = ma;
            model = mo;
            year = y;
            price = p;
        }
        void display();

    private:
        string make;
        string model;
        int year;
        double price;
};

void Car::display() {
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
}

int main(){

    Car myCar("Toyota", "Camry", 2020, 19999.99);

    myCar.display();

    return 0;
}