#include <iostream> 

using namespace std; 

int main() 
{
    cout << "Hello!\n";
    cout << "Welcome to . . . \n\n";

    
    cout << "    ____  _      __                      \n";
    cout << "   / __ \(_)____/ /_____ _____  ________ \n";
    cout << "  / / / / / ___/ __/ __ `/ __ \/ ___/ _ \ \n";
    cout << " / /_/ / (__  ) /_/ /_/ / / / / /__/  __/ \n";
    cout << "/_____/_/____/\__/\__,_/_/ /_/\___/\___/  \n";
    cout << "-------------------------------------------\n";
    cout << "  C * a * l * c * u * l * a * t * o * r    \n";
    cout << "\n\n";

    cout << "This program calculates distance! \n";
    cout << "Now, tell me how many seconds will the object be in freefall: \n";
    int sec;

    cin >> sec;

    int num, den, total_distance;

    num = ((sec * sec) * 32);
    den = 2;
    total_distance = num / den;

    cout << "The object will fall for approximately ";
    cout << total_distance;
    cout << " feet.\n";
    cout << "\nGood-bye!\n";

    return 0;
}
