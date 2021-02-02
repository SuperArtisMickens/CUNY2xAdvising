#include <iostream>
using namespace std;

double totalCost(int price, double tax);


int main ()
{
    int originalPrice;
    cout <<"WHat's the original price? $";
    cin >> originalPrice;

    double tax;
    cout <<"What's the tax? ";
    cin >> tax;
    
    double costofTshirts = totalCost(originalPrice, tax);
    
    cout << "The cost is ... $" << costofTshirts <<endl;
    
    cout<<"Thank you GOD !!\n";

    return 0;
}

double totalCost(int price, double tax)
{
    int totalAmount = price * tax;

    double total = price + totalAmount;
    
    return total;

}