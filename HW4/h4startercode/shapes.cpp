#include <iostream>

using namespace std;
/*
    // HOMEWORK 4
    // IMPLEMENTATION FILE
    // K. Artis-Mickens
*/

// Put all your class member function definitions here


double Rectangle::getArea(){
    return(height * base);
}


double Trapezoid::getArea(){
    return(((topbase + height)/2) * base);
}

