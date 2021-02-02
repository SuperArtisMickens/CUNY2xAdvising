#include <iostream> 

using namespace std; 

int main() 
{
    // Here we're declaring our variable 'myName' though we're not initializing it with anything
    string myName; 

    // To make this program make sense to the user, it makes sense to output some instructions
    // as opposed to waiting for a blank input. Here we'll ask what the user's name is.
    cout << "What is your name?\n"; 

    // Now comes using cin! The program will pause here, and will only continue when the user inputs something
    // When the user does input something, it will be stored in the 'myName' variable
    cin >> myName;

    // With cout, you can string multiple variables to one stream.
    // This stream puts together the string "Your name is ", then the variable 'myName',
    // then the final string "? That's a great name!"
    // The syntax '<<' glues each part together.
    cout << "Your name is " << myName << "? That's a great name!\n";

    
    return 0;
}
