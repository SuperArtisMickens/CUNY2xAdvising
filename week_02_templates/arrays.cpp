#include <iostream>
using namespace std;

int main ()
{
    const int size = 5;
    
    //int temperatures1[size];
    //int temperatures2[size] = {60, 70, 66, 99, 95, 56, 80};
    //int temperatures3[] = {60, 70, 66, 99, 95, 56, 80};
    
    string borough[size] = {"Brooklyn", "Queens", "Manhattan", "Staten Island", "Bronx"};

    string test_borough;
    bool flagg;

    cout << "Hello\n";


    cout << "Enter a borough of NYC: ";
    cin >> test_borough;


    for (int i = 0; i < size; i++){

        if (borough[i] == test_borough){
            flagg = true;
        }
        else
        {
            flagg = false;
        }
        
        
    }

    cout<<"\n";
    //cout << temperatures1[1] << endl;
    if (flagg){
        cout << test_borough << " is not NYC borough!\n";

    }
    else
    {
        cout << test_borough << " is so an NYC borough!\n";
    }
    
    
    cout<<"Thank you GOD !!\n";
    cout << "Goodbye!\n";
    return 0;
}