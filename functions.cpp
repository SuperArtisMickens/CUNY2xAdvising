#include <iostream> 

using namespace std; 

// function declarations are stated here, towards the top of the file
// they must be declared before it's called

double totalCost(int price, double tax);


int main() 
{

    int orginialPrice;
    cout << "What's the original price?" << endl;
    cin >> orginialPrice;

    double tax;
    cout << "What's the tax?" << endl;
    cin >> tax;

    double costOfTshirt = totalCost(orginialPrice, tax);

    cout << "The cost is...$" << costOfTshirt << endl;   

    return 0;
}


// function definitions are usually here

double totalCost(int price, double tax) 
{
    double totalAmout = price * tax;
    double total = price + totalAmout;

    return total;
}