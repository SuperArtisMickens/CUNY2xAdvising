#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    //ifstream is the Class
    //inputNumbers is the Object
    //.open() is a member function, defined in the Class
    //can only call member function on Objects.

    ifstream inputNumbers;
    inputNumbers.open("labinput.txt");
    if (inputNumbers.fail()){
        cout << "Failed to open file "<< endl;
        exit(1);
    }

    ofstream outputNumbers;
    outputNumbers.open("laboutput.txt");

    string line;
    while (getline(inputNumbers, line)){
        int lineInteger = stoi(line);
        int squareNumber = lineInteger * lineInteger;
        
        //output the answer to the object outputNumbers
        //outputNumbers referes writing top the file "labinput.txt"
        outputNumbers << squareNumber << endl;
    }

    
    inputNumbers.close();
    outputNumbers.close();

    return 0;
}