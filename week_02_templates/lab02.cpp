#include <iostream>
using namespace std;

int main ()
{
    int cel;
    int far;
    int convert1;
    int convert2;



    cout << "Please enter a temperature in Celcius: ";
    cin >> cel;
    convert1 = (((cel/5) * 9) + 32);


    if (cel > 100){
        cout << "This is above boiling point\n";
        cout << "This is above freezing point\n";
    }
    else if ((cel <= 100) && (cel > 0)){
        cout << "This is below boiling point\n";
        cout << "This is above freezing point\n";
    }
    else {
        cout << "This is below boiling point\n";
        cout << "This is below freezing point\n";
    }
    cout <<"\n\n"<<cel <<" is " << convert1 << " in Fahrenheit.\n\n";
    cout << "Please enter a temperature in Fahrenheit: ";
    cin >> far;
    //convert1 = ((cel/5) * 9) + 32);//


    if (far > 212){
        cout << "This is above boiling point\n";
        cout << "This is above freezing point\n";
    }
    else if ((far <= 212) && (far > 32)){
        cout << "This is below boiling point\n";
        cout << "This is above freezing point\n";
    }
    else {
        cout << "This is below boiling point\n";
        cout << "This is below freezing point\n";
    }

    
    return 0;

}