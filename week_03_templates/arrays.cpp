#include <iostream> 

using namespace std; 

int main() 
{

    const int size = 7;
    int temperatures2[size] = {60, 70, 66};

    for (int i = 0; i < size; i++) {
        cout << temperatures2[i] << endl;
    }

    return 0;
}
