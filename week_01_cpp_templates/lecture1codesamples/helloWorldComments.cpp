// Library needed to use cin and cout functions
// iostream is short for "Input Output Stream"
#include <iostream> 

// Use the namespace "std"
// Without this, we would need to prefix `cout << "Hi";` with `std::cout << "Hi";`
using namespace std; 

// Main function below. In C++ this main function is required
// There is no inputs for this function, given there's no declaration in the parantheses
// The output for this function is an integer (via the 'int'), so we have to return an integer
int main() 
{

    // Print out the string "Hello world!"
    // The \n gives a line break
    cout << "Hello, world!\n"; 

    // Since the main function has to return an integer, we'll just return 0 here
    return 0;

}
