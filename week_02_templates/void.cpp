#include <iostream>
using namespace std;

void printMyName(string myName);
void printAnExample();
int main ()
{
    string name;
    
    cout<<"Thank you GOD !!\n";

    cout <<"What's your name? " << endl;
    cin >> name;

    printMyName(name);
    printAnExample();


    return 0;
}

void printMyName(string myName){
    cout << "Your name is " << myName << endl;
}

void printAnExample(){
    cout << "Here's an example string" << endl;
}