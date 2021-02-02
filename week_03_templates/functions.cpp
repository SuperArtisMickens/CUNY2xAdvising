#include <iostream> 
#include <cmath>

using namespace std; 

// function declarations are stated here, towards the top of the file
// they must be declared before it's called

double totalCost(int price, double tax);
double printPowers(double x, int n);


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

    double number;
    int exponent;
    cout << "What's the number?" << endl;
    cin >> number;
    cout << "What's the exponent?" << endl;
    cin >> exponent;

    printPowers(number, exponent);

  

    return 0;
}


// function definitions are usually here

double totalCost(int price, double tax) 
{
    double totalAmout = price * tax;
    double total = price + totalAmout;

    return total;
}

double printPowers(double x, int n) 
{
    
    int i=0;
    double j;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    
    while (i< n){
        j = pow(x,i+1);
        cout << j<< " ";
        i++;
    }
    
    //double totalAmout = price * tax;
    //double total = price + totalAmout;

    return j;
}