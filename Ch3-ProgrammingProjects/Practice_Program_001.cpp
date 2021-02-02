#include <iostream>
#include<conio.h>
using namespace std;


void clearscreen ()
{    
    for (int i = 0; i < 80; ++i)
        {
        cout << "\n";
        cout << endl;
        }

}



int main ()
{
    char ans;
    
    clearscreen ();
    
    cout<<"Hi!\n";
    cout<<"Welcome to PAPER--ROCK--SCISSORS! (Type \n";
    cout<<"Y and Return for Yes, N and Return for No) \n";
    cout <<"Would you like to play a game? ";
    cin >> ans;
    
    
    
    while ((ans == 'Y') || (ans == 'y'))
    {

        cout<<"\n\n\n";
        cout<<"Player One -- Please enter your name: ";
        
        string Player_One_Name;
        cin >> Player_One_Name;

        cout<<"Player Two -- Please enter your name: ";
        string Player_Two_Name;
        cin >> Player_Two_Name;
        
        cout << "Excellent !! " << Player_One_Name << " & " << Player_Two_Name <<"!! Let's play!! \n";


        char Player_One_Choice;

        cout << Player_One_Name << " , you go first! \n";
        cout << "(R)ock (P)aper or (S)cissors??\n";
        cin >> Player_One_Choice;
        

        char Player_Two_Choice;
        cout <<" \n\n";


        cout << Player_Two_Name << " , your turn ! \n";
        cout << "(R)ock (P)aper or (S)cissors??\n";
        cin >> Player_Two_Choice;

        cout <<" \n\n";
        
        
        cout << "Player One chose: " << Player_One_Choice;
        cout << "           Player Two chose: " << Player_Two_Choice;
        cout <<" \n\n";


        if (((Player_One_Choice == 'R') || (Player_One_Choice == 'r')) && ((Player_Two_Choice == 'R') || (Player_Two_Choice == 'r')))
        {
            cout << "Nobody wins\n";
        }

        if (((Player_One_Choice == 'R') || (Player_One_Choice == 'r')) && ((Player_Two_Choice == 'P') || (Player_Two_Choice == 'p')))
        {
            cout << "Paper covers rock\n";
            cout << "Player 2 wins! \n";

        }

        if (((Player_One_Choice == 'R') || (Player_One_Choice == 'r')) && ((Player_Two_Choice == 'S') || (Player_Two_Choice == 's')))
        {
            cout << "Rock breaks scissors\n";
            cout << "Player 1 wins \n!";
            
        }


        if (((Player_One_Choice == 'P') || (Player_One_Choice == 'p')) && ((Player_Two_Choice == 'R') || (Player_Two_Choice == 'r')))
        {
            cout << "Paper covers rock\n";
            cout << "Player 1 wins! \n";

        }

        if (((Player_One_Choice == 'P') || (Player_One_Choice == 'p')) && ((Player_Two_Choice == 'P') || (Player_Two_Choice == 'p')))
        {
            cout << "Nobody wins\n";

        }

        if (((Player_One_Choice == 'P') || (Player_One_Choice == 'p')) && ((Player_Two_Choice == 'S') || (Player_Two_Choice == 's')))
        {
            cout << "Scissors cut paper\n";
            cout << "Player 2 wins!\n";

        }



        if (((Player_One_Choice == 'S') || (Player_One_Choice == 's')) && ((Player_Two_Choice == 'R') || (Player_Two_Choice == 'r')))
        {
            cout << "Rock breaks scissors\n";
            cout << "Player 2 wins!\n";

        }

        
        if (((Player_One_Choice == 'S') || (Player_One_Choice == 's')) && ((Player_Two_Choice == 'P') || (Player_Two_Choice == 'p')))
        {
            cout << "Scissors cut paper\n";
            cout << "Player 1 wins!\n";

        }

        if (((Player_One_Choice == 'S') || (Player_One_Choice == 's')) && ((Player_Two_Choice == 'S') || (Player_Two_Choice == 's')))
        {
            cout << "Nobody wins\n";

        }
        
        cout << "Would you like to play again?  (Type \n";
        cout << "Y for Yes, N for No. End with Return): ";
        cin >> ans;
        
        clearscreen();    
        
    }




    /*for (int count = 1; count <= 3000; count ++)
        cout << "                                Hosanna, Hosanna, Hosanna To God and the Lamb! \n";
    */

    return 0;
}