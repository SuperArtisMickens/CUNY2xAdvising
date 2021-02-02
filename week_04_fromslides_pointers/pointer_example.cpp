#include <iostream>
using namespace std;

int main ()
{
    int v1, *p1, *p2;

    v1 = 0;
    p1 = &v1;
    p2 = p1;

    *p1 = 42;
    cout << v1 << endl;
    cout << *p1 << endl;
    cout << *p2 << endl;
    
    cout<<"Thank you GOD !!\n";

    return 0;
}