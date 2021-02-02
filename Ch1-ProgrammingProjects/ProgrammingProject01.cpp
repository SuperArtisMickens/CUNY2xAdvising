#include <iostream>
using namespace std;

int main()
{

    int num_01, num_02, sum_num, pro_num;

    cout <<"Hello!\n\n";

    cout << "Please press <ENTER> after you enter a number.\n";
    cout <<"     Enter a number: ";
    cin >> num_01;
    cout <<"     Enter another number: ";
    cin >> num_02;

    sum_num = num_01 + num_02;
    pro_num = num_01 * num_02;

    cout <<"\n\nThe sum of ";
    cout << num_01 << " and ";
    cout << num_02 << " . . .\n";
    cout <<"is \n";
    cout << sum_num<<".\n\n";

    cout <<"\nThe product of ";
    cout << num_01 << " and ";
    cout << num_02 << " . . .\n";
    cout <<"is \n";
    cout << pro_num<<".\n\n";

    cout <<"This is the end of the program.\n";
    cout <<"Good-bye!";

    return 0;

}