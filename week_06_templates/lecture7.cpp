#include <iostream>
using namespace std;

double totalCost(int price, double tax);
void swap(int& variable1, int& variable2);
    
int main ()
{
    int counter = 0;
    while (counter < 16){
    cout<<counter;
    cout<<" Thank you GOD !!\n";
    
    counter++;
    }

    double t = totalCost(10, .15);
    cout << "Total price : $" << t << endl;

    return 0;
}

double totalCost(int price, double tax)
    {
    double taxAmount = price * tax;
    double total = price + taxAmount;
    return total;
    }

void swap(int& variable1, int& variable2)
    {
        int temp = variable1;
        variable1 = variable2;
        variable2 = temp;
    }