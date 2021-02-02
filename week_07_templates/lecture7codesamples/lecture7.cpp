#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function declaration
// Just tells the complier this funciton exists
double totalCost(int price, double tax);
void swap(int& variable1, int& variable2);
void fakeSwap(int variable1, int variable2);

int main()
{

    string greeting = "Hello World"; // length = 11
    for (int i = 0; i < greeting.length(); i++){
        // cout << greeting[i] << endl;
    }

    int counter = 0;
    while(counter < greeting.length()){
        // cout << greeting[counter] << endl;
        counter++;
    }

    const int SIZE_OF_ARRAY = 10;
    int data[SIZE_OF_ARRAY] = {12, 22, 31, 96, 11, 2, 4, 8, 312, 880};

    cout << data[SIZE_OF_ARRAY - 1] << endl;
    data[SIZE_OF_ARRAY - 1] = 100;
    cout << data[SIZE_OF_ARRAY - 1] << endl;

    double t = totalCost(10, .15);
    cout << "Total price example:" << t << endl;
    // EXAMPLE 1 - Pointers
    
    // cheatsheet
    // * used in declaring a pointer
    // also used to get the value of the variable a pointer is pointing to
    // & used to get the location where a variable is stored
    
    //two separate bank accounts and their initial balances
    double harrys_account = 0;
    double joint_account = 2000;
    
    //declares account_pointer as a 'pointer to double'
    double* account_pointer = &harrys_account;
    //initializes account_pointer to the memory location of harrys_account
    
    //the value that account_pointer is pointing to gets set to 1000
    *account_pointer = 1000; // Initial deposit
    
    //the value that account_pointer is pointing to loses 100
    *account_pointer = *account_pointer - 100;
    
    // prints the value that account_pointer is pointing to (harrys_account)
    cout << "Balance *account_pointer: " << *account_pointer << endl;
    cout << "Balance harrys_account: " << harrys_account << endl;
    
    // account_pointer now points to the location of a different variable
    account_pointer = &joint_account;
    
    //withdraw 100 from the value the pointer is pointing to
    *account_pointer = *account_pointer - 100;
    
    //print the balance
    cout << "Balance *account_pointer: " << *account_pointer << endl;
    cout << "Balance joint_account: " << joint_account << endl;

    cout << "Memory address of account_pointer: " << account_pointer << endl;
    cout << "Memory address of joint_account: " << &joint_account << endl;

    int x = 100;
    int y = 999;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    swap(x, y);
    cout << "After swap:" << endl;
    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    //


    // Object "firstName" of type "string"
    // which has a member funciton size() that I call on the Object, that's defined in the class
    string firstName = "Magan";
    int lengthOfString = firstName.size();
    cout << "Length of the string is: " << lengthOfString << endl;

    return 0;
}

// Function definition
// this defines the function, where you put the logic
double totalCost(int price, double tax)
{
	double taxAmount = price * tax;
	double total = price + taxAmount;
	return total;
}

// Example of Call by Reference
// This inputs represents the memory address of the variables (becuse of the 'int&')
void swap(int& variable1, int& variable2)
{
    int temp = variable1;
    variable1 = variable2; 
    variable2 = temp;
}

// Example of Call by Value
// Should not swap values because it's call by value
void fakeSwap(int variable1, int variable2)
{
    int temp = variable1;
    variable1 = variable2; 
    variable2 = temp;
}

