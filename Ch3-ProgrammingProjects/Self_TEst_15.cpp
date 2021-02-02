#include <iostream>
using namespace std;

int main ()
{
    int first_choice = 4;
    switch (first_choice + 1)

    {
        case 1:
            cout << "Roast beef\n";
            break;
        
        case 2:
            cout << "Roast worms\n";
            break;

        case 3:
            cout << "Chocolate ice cream\n";
            break;

        case 4:
            cout << "Onion ice cream\n";
            break;

        default:
            cout << "Bon appetit!\n";
        
    }
    
    cout<<"\n\nThank you GOD !!\n";

    return 0;
}