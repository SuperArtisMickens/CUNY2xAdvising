#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string line;
    ifstream myfile;
    myfile.open("input.txt");
    if (myfile.fail())
    {
        cout << "Failed to open file" << endl;
        exit(1);
    }

    while (getline(myfile, line))
    {
        cout << line << endl;
    }

    myfile.close();

    return 0;
}