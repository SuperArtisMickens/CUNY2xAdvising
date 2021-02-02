#include <iostream>
using namespace std;

int main ()
{
    cout<<"Thank you GOD !!\n";
    string greeting = "Hello World!";
    string firstName = "Kris";
    string lastName = "Mickens";
    string fullName;

    cout << "What's your full name?" << endl;
    getline(cin,fullName);

    cout << greeting.size()<<endl;
    cout << firstName.size()<<endl;
    cout << lastName.size()<<endl;
    cout <<"Your full name is "<< fullName<< endl;

    return 0;
}