#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<"Hello World\n\n";
    
    int sum = 0;
    int n[100];
    int number;
    
    /*for (number = 100; number >+ 0; number--)
        {
        cout << number << " bottles of water on the wall. \n";
        cout << number << " bottles of water. \n";
        cout << "You take one down and pass it around. \n";
        cout << number-1 << " bottles of water on the wall. \n";
        cout << "\n";
        cout << "Are your ready? "; 
        cin >> n[number];
        
        }
 
    */
   for (number = 100; number >+ 0; number--)
        {
        cout << "\n";
        cout << "Storage area " << number <<": "; 
        cout << n[number];
        cout << "\n";
        
        }

    for (number = 100; number >+ 0; number--)
        {
        n[number] = 0;
        
        }

    for (number = 100; number >+ 0; number--)
        {
        cout << "\n";
        cout << "Storage area " << number <<": "; 
        cout << n[number];
        cout << "\n";
        
        }

    int y;

    for (double x = pow(y, 3.0); x > 2.0; x = sqrt(x))
        {
            cout <<"x is now equal to " << x << endl;
        }

    return 0;
}
