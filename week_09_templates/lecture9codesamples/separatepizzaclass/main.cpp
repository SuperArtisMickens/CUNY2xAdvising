#include <iostream>
#include "pizza.h"

using namespace std;

// The Application File
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