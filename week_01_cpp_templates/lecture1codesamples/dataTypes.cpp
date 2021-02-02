#include <iostream> 

using namespace std; 

int main() 
{
    int myInteger = 1;
    char myChar = 'a';
    bool myTrueBoolean = true;
    bool myFalseBoolean = false;
    string myString = "Hello, world!";
    float myFloat = 5.1;
    double myDouble = 1.2345;
    
    cout << "Below are the data type examples\n";
    cout << "myInteger: " << myInteger << "\n";
    cout << "myChar: " << myChar << "\n";
    cout << "myTrueBoolean: " << myTrueBoolean << "\n";
    cout << "myFalseBoolean: " << myFalseBoolean << "\n";
    cout << "myString: " << myString << "\n";
    cout << "myFloat: " << myFloat << "\n";
    cout << "myDouble: " << myDouble << "\n";

    int myUninitializedInteger;
    cout << "myUninitializedInteger: " << myUninitializedInteger << "\n";
    return 0;

}
