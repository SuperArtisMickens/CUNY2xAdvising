/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Shape {
    public:
        void setA(int a){
            sideA = a;
        }
        void setB(int b){
            sideB = b;
        }
        
    protected:
        int sideA;
        int sideB;
};

class Triangle : public Shape {
    public:
        void setC(int c){
            sideC = c;
        }
        int getPerimeter();
    protected:
        int sideC;
};

int Triangle::getPerimeter(){
    return sideA + sideB + sideC;
}

int main()
{
    int x = 5;
    int y = 5;
    
    //Sport ftbl(11);
    Triangle myTriangle;
    myTriangle.setA(10);
    myTriangle.setB(15);
    myTriangle.setC(75);
    
    int myTrianglePerimeter = myTriangle.getPerimeter();
    
    
    cout <<"The perimeter of my Triangle is: "<< myTrianglePerimeter <<endl;
    
    
    return 0;
}


void blackBoxOne(int x, int y){
    x = x * 10;
    y = y * 10;
}

void blackBoxTwo(int& x, int& y){
    x = x * 10;
    y = y * 10;
}