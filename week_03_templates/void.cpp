#include <iostream> 

using namespace std; 

void myVoidFunction(string s);

int main() 
{
    myVoidFunction("See you!");
    return 0;
}

void myVoidFunction(string s){
    cout << "This is a void function that does not return anything" << endl;
    cout << s << endl;
}
