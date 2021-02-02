#include <iostream>

using namespace std;

int main ()
{
    int qua, dim, nic;
    double total_cents;
    double total_cents_value;


    cout << "Hello\n\n";
    cout << "This is a program that tells you the monetary\n";
    cout << "value of coins (in cents). \n\n";
    cout << "How many quaters do you have? \n";
    cin >> qua;
    cout << "How many dimes do you have?\n";
    cin >> dim;
    cout << "How many nickels do you have?\n";
    cin >> nic;
    cout <<"\n\n";
    
    total_cents_value = ((qua * .25) + (dim * .10) + (nic * .05));
    total_cents = (total_cents_value * 100);

    cout <<"You have $";
    cout << total_cents_value;
    
    //if ((total_cents_value < 1) && (total_cents_value%10))
   // {
    //    cout <<"0 cents.\n";
   // 
    //}
    
    if (total_cents_value < 1)
    {
        cout <<"0 cents.\n";
    
    }

    else
    {
        cout <<"0 dollars.\n";
    
    }

    cout <<"In other words, ";
    cout <<"the coins are worth ";
    cout << total_cents;
    cout << " cents.\n";

    cout <<"Good-bye!\n";
    cout << "\n\nPress <ENTER> to end the program.\n"; 
    cin.get();
    //cin >> letter;
    return 0;
}