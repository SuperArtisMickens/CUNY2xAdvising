#include <iostream>


/*
    // HOMEWORK 4
    // HEADER FILE
    // K. Artis-Mickens
*/

// Put all your class declarations here

class Shape{
    public:
         setTopBase(int s_tb){
            tb = s_tb;
        }

        void setHeight(int s_h){
            h = s_h;
        }

        void setBase(int s_b){
            b = s_b;
        }
    
    protected:
        int height;
        int base;
};


class Rectangle: public Shape{
    public:
        
        
        Rectangle(double h, double b){
            height = h;
            base = b;
        }
        double getArea();

    private:
        double height;
        double base;
};

class Trapezoid: public Shape{
    public: 
        Trapezoid(double tb, double h, double b){
            topbase = tb;
            height = h;
            base = b;
        }
        double getArea();

    private:
        double topbase;
        double height;
        double base;
};