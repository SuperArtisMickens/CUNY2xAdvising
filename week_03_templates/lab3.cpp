#include <iostream> 

using namespace std; 

int main() 
{
    
    const int numberOfBoroughs = 5;

    string boroughs[numberOfBoroughs] = {"Brooklyn", "Manhattan", "Queens", "The_Bronx", "Staten_Island"};

    cout << "Input your string..." << endl;

    string userInput;
    cin >> userInput;

    bool isABorough = false;

    for(int i = 0; i < numberOfBoroughs; i++){
        if (boroughs[i] == userInput) {
            isABorough = true;
        }
    }

    if (isABorough) {
        cout << userInput << " is a borough of NYC!" << endl;
    } else {
        cout << userInput << " is NOT a borough of NYC" << endl;
    }

    return 0;
}
