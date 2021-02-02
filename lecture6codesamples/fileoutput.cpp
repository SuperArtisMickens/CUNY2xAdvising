#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  ofstream myfile;
  myfile.open ("output.txt");
  myfile << "Writing this string to a file.\n";
  myfile.close();
  return 0;
}