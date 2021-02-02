#include <iostream>
using namespace std;

int main ()
{
    double one, two, three, four, five;
    one = 1.000;
    two = 1.414;
    three = 1.732;
    four = 2.000;
    five = 2.236;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout<<"\n\n";
    cout<<"N\tSquare Root\n";
    cout<<"-\t-----------\n";
    cout<<"1\t"<<one<<"\n";
    cout<<"2\t"<<two<<"\n";
    cout<<"3\t"<<three<<"\n";
    cout<<"4\t"<<four<<"\n";
    cout<<"5\t"<<five<<"\n";
    return 0;
}