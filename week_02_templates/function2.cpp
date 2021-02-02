#include <iostream>
using namespace std;

float sum(int first, int second, int third);


int main ()
{
    cout << sum(13, 11, 10) << endl;
    
    cout<<"Thank you GOD !!\n";

    return 0;
}

float sum(int first, int second, int third){
    int total = first + second + third;
    return total/3;

}