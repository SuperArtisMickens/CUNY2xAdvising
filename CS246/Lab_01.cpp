#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 

// function declarations are stated here, towards the top of the file
// they must be declared before it's called

int LetterCount(const string& Vari_01, char Vari_02);
bool HasDuplicates(string Vari_03);

int main() 
{

    string Saying;
    cout << "What do you want to say?" << endl;
    cin >> Saying;

    char Letter;
    cout << "What is the letter that you wish to look for?" << endl;
    cin >> Letter;
 
    cout << "The amount of times "<< Letter << " is in the phrase " << Saying << " is ... " << LetterCount(Saying, Letter) << endl;   

    return 0;
}


// function definitions are usually here
/*
int LetterCount(const string& Vari_01, char Vari_02) 
{
    unordered_map<char, int> d;
    int j;
    j=0;

    for (char i: Vari_01){
        d[i]++;
    }

    for (char i: Vari_01){

        if(d[i] != 0){
          cout << i << " "<< d[i] << " ";
            d[i] = 0;  
        }
    }
    return j; 
}


*/