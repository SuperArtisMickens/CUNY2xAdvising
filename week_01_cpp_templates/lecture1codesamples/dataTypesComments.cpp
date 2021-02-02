#include <iostream> 

using namespace std; 

int main() 
{

    // Below are examples of initalizing each data type in C++
    int myInteger = 1;
    char myChar = 'a';
    bool myTrueBoolean = true;
    bool myFalseBoolean = false;
    string myString = "Hello, world!";
    float myFloat = 5.1;
    double myDouble = 1.2345;
    
    // Again, with cout, you can string multiple variables/expressions into one output.
    // '<<' is the glue between each variable/expression. and "\n" creates a line break.
    
    cout << "Below are the data type examples\n";
    cout << "myInteger: " << myInteger << "\n";
    cout << "myChar: " << myChar << "\n";
    cout << "myTrueBoolean: " << myTrueBoolean << "\n";
    cout << "myFalseBoolean: " << myFalseBoolean << "\n";
    cout << "myString: " << myString << "\n";
    cout << "myFloat: " << myFloat << "\n";
    cout << "myDouble: " << myDouble << "\n";


    // Note I created this variable, but didn't inialize it. What does it print? Try running it!
    // You'll see it doesn't print 0 or null, but probably a random number. That's because
    // we assigned the variable in memory, but didn't inalize it. So when we print it, the computer
    // just prints whatever the variable has in memory. 
    // Don't worry about this too much now, more later in the semester...
    int myUninitializedInteger;
    cout << "myUninitializedInteger: " << myUninitializedInteger << "\n";
    
    return 0;

}
