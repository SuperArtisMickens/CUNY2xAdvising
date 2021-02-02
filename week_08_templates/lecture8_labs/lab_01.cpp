#include <iostream>

using namespace std;

// creat a new Class "Car"
// member variables inclue: "Make", "Model", "Year", and "Price"
// write a constructor that initialized the data
// public member function that display all the data

class Car{
    public:
        Car(string ma, string mo, int y, double p){
            make = ma;
            model = mo;
            year = y;
            price = p;
            int n;
           }

         
        void display();
        void setmaxSpeed(int n);
        void getmaxSpeed();

    
    protected:
        int n;
        int maxSpeed;

    
    private:
        string make;
        string model;
        int year;
        double price;
        int newmaxSpeed;
        
};


void Car::display() {
    cout << "Make: "  << make << endl;
    cout << "Model: " << model << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;

}

void Car::setmaxSpeed(int n)
{
    maxSpeed = n; 
}

void Car::getmaxSpeed()
{
    cout <<"\n\nMax Speed: "<< maxSpeed << endl; 
}


int main ()
{
    Car myCar("Toyota", "Camry", 2020, 14999.99);
    
    myCar.display();
    myCar.setmaxSpeed(2374);
    myCar.getmaxSpeed();

    cout<<"Thank you GOD !!\n";


    return 0;
}