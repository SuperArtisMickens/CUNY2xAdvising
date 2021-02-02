#include <iostream>

using namespace std;

// Let’s write a class “Triangle” that has data “base” and “height”
// Write a constructor that sets the value of all these variables
// Write a public member function that returns the area of the triangle

class Triangle {
    public:
        Triangle(double h, double b) {
            height = h;
            base = b;
        }
        double area();

    private:
        double height;
        double base;
};

double Triangle::area(){
    return (height * base) / 2;
}

int main(){

    Triangle t1(10, 5);

    cout << "Area of triangle: " << t1.area() << endl;

    return 0;
}
