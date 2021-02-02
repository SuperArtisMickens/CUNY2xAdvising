#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
  int i = 0;
  int j = 1;

  while (i <= 11)
  {
      if (i >= 0)
      {
          i = i - j;
          j = j + 2;
      }

      else
      {
          i = i + 2 * j;
          j = j + 1;
          cout << i << " "  << j << endl;
      }


  }
  return 0;
}