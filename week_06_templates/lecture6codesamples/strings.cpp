#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream fin;

    fin.open("input.txt");

    if (fin.fail()){
        cout << "Failed to open file" << endl;
        exit(1);
    } else {
        cout << "Opened file correctly" << endl;
    }

    return 0;
}