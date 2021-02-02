#include <iostream>
#include <string>
using namespace std;

bool doesContain(string string1, string string2);

int main ()
{
    //string testStr = "New York";

    //cout <testStr.find("York")<<endl;
    
    //cout<<"Thank you GOD !!\n";

    doesContain("Boston", "New York");

    return 0;
}

//Lets see if sting1 is in string2

bool doesContain(string string1, string string2){
    if (string2.find(string1) == -1){
        cout << string2 << " is not in "<< string1 << endl;
        return false;
    }
    else{
        cout << string2 << " contains "<< string1 << endl;
        return true;
    }
}