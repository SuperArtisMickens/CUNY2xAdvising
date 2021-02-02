#include <iostream>
using namespace std;

int main ()
{
    cout<<"Hi !\n\n";

    cout<<"Please enter your FIRST NAME: ";
    string firstname;
    cin >> firstname;

    cout<<"Please enter your LAST NAME: ";
    string lastname;
    cin >> lastname;

    cout<<"Please enter your PHONE NUMBER: ";
    string phonenumber;
    cin >> phonenumber;

    cout<<"Please enter your EMAIL ADDRESS: ";
    string emailaddress;
    cin >> emailaddress;

    cout<<"Please enter your DATE OF BIRTH: ";
    string dob;
    cin >> dob;

    cout<<"Please enter you ZIP CODE: ";
    string zipcode;
    cin >> zipcode;

    cout <<"\n\n\n\nHello, "<< firstname <<" "<< lastname <<" !\n";
    cout <<"Phone Number: "<< phonenumber <<"\n";
    cout << "Zip Code: " << zipcode << "\n\n";
    cout <<"Email: " << emailaddress <<"\n";
    cout <<"Date of Birth: "<< dob <<"\n";
    cout <<"\n\nHave a GREAT DAY " << firstname << "!";

    return 0;
}