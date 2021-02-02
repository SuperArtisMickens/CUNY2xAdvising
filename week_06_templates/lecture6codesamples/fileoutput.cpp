#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream myOutputFile;

  myOutputFile.open("output.txt");

  myOutputFile << "1st line" << endl;
  myOutputFile << "Here's my second line" << endl;

  myOutputFile.close();

  return 0;
}