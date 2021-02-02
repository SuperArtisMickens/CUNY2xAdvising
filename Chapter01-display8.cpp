#include <iostream>

using namespace std;

main()
{
    int number_of_pods, peas_per_pod, total_peas;
    int height, width;
    int totalLength;

    cout <<"Hello\n\n\n";
    
    cout << "Press <ENTER> after entering a number.\n";
    cout << "Enter the height: \n";

    cin >> height;

    cout << "Enter the width: \n";
    cin >> width;
    
    //total_peas = number_of_pods + peas_per_pod;
    totalLength = height * width;

    cout << "In a space containing ";
    cout << height;
    cout << " height\n";
    cout << "and ";
    cout << width;
    cout << " width, then\n";
    cout << "you would need ";
    cout << totalLength;
    cout << " sq. units of fence to enclose it.\n";

    cout << "\n\n\nGood-bye\n";

    return 0;
}