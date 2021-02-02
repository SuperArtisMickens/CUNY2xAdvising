#include <iostream> 
#include <string>
#include <array>

using namespace std; 

class CashRegister
{
    public:

    CashRegister(string na, double pr);
    
    clear();
    addItem(string nameOfItem, double price);
    getTotalPrice();
    getCount();
    getItemNames();
    string nameOfItem;
    double price;
    string x;
    double y;
    int counter;
    string item_name [100];
    int item_price [100];
    int counter_clear;
    int counter_totalprice;
    double whole_total_price;
    int counter_names;
    //int counter_totalprice;
    //double whole_total_price;


    double totalofItems;
    int numberofItems;

};



CashRegister::addItem(string x, double y)
{
    int counter;
    string item_name [100];
    int item_price [100];
    ++counter;
    item_name [counter] = x;
    item_price [counter] = y;
}

CashRegister::clear()
{
    int counter_clear;
    counter_clear = 0;
    while (counter_clear < 100){
        item_name [counter_clear] = "";
        item_price [counter_clear] = 0.00;
        counter_clear++;
    }
    
}



CashRegister::getCount(){
    return counter;
}

CashRegister::getTotalPrice(){
    
    int counter_totalprice;
    double whole_total_price;
    counter_totalprice = 0;
    while (counter_totalprice < 100){
        whole_total_price = whole_total_price + item_price[counter_totalprice++];
        counter_totalprice++;
    }
    return whole_total_price;


}

CashRegister::getItemNames(){
    int counter_names;
    
    counter_names = 0;
    while (counter_names < 100){
        cout << item_name [counter_names] << "\n";
        counter_names++;
    }
    
}


int main() 
{



    // Below are test cases which your code should should produce the correct outputs.
    // Uncomment to test all or certain test cases for your code.
    // Remember, your code must be compilable! And NO plagarism.
    
    
    CashRegister c1;
    c1.addItem("Slice of Pizza", 1.00);
    //c1.addItem("Slice of Pizza", 1.00);
    //c1.addItem("Snapple", 1.49);

    cout << "Number of items in c1 is: " << c1.getCount() << endl; // should output 3
    cout << "Total cost in c1 is: " << c1.getTotalPrice() << endl; // should output 3.49
    c1.getItemNames(); // should output "Slice of Pizza Slice of Pizza Snapple" (spacing/newlines does not matter)

    
    /*
    CashRegister c2;
    c2.addItem("Power Adapter", 60);
    c2.addItem("USB Drive, 1TB", 39.99);
    c2.addItem("External Hard Drive, 5TB", 99.99);
    c2.clear();
    cout << "Number of items in c2 is: " << c2.getCount() << endl; // should output 0
    cout << "Total cost in c2 is: " << c2.getTotalPrice() << endl; // should output 0
    c2.getItemNames(); // should return no names/an empty string

    CashRegister c3;
    c3.addItem("Xbox Series X", 500);
    c3.clear();
    c3.addItem("Playstation 5", 500);
    c3.addItem("Stereo Headphones", 129.99);
    cout << "Number of items in c3 is: " << c3.getCount() << endl; // should output 2
    cout << "Total cost in c3 is: " << c3.getTotalPrice() << endl; // should output 629.99
    
    */

   
   
   return 0;

}