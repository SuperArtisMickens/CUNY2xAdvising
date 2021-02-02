#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // ifstream is the Class
    // inputNumbers is the Object
    // .open() is a member function, defined in the Class
    // can only call member functions on Objects

    ifstream inputNumbers;
    inputNumbers.open("labinput.txt");
    if (inputNumbers.fail())
    {
        cout << "Failed to open file" << endl;
        exit(1);
    }

    ofstream outputNumbers;
    outputNumbers.open("laboutput.txt");

    string line;
    while (getline(inputNumbers, line))
    {
        // stoi converts string to an int
        int lineInteger = stoi(line);
        int squareNumber = lineInteger * lineInteger;
        
        // output the anser to the object outputNumbers
        // outputNumbers refers writing to the file "laboutput.txt"
        outputNumbers << squareNumber << endl;
    }

    inputNumbers.close();
    outputNumbers.close();

    return 0;
}