#include <iostream>
#include <stdio.h>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string vipadd;
    //char str;

    cout << " Please enter a valid IP address: \n";
    getline(cin, vipadd);

    int n = vipadd.length();

    char str[n + 1];

    strcpy(str, vipadd.c_str());

    cout << "\n";

    // Returns first token
    char *token = strtok(str, ".");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        //printf("%s\n", token);
        token = strtok(NULL, ".");
    }

    //for(int h = 0; h < vipadd.size(); h++)
    //        cout << vipadd[h] << '\n';

    vector<string> tokens;

    stringstream check1(vipadd);

    string intermediate;

    while (getline(check1, intermediate, '.'))
    {
        tokens.push_back(intermediate);
    }

    //cout <<"\n\n";
    //for(int j = 0; j < tokens.size(); j++)
    //       cout << tokens[j] << '\n';

    int ip_add_a[] = {};

    for (int k = 0; k <= 3; k++)
        ip_add_a[k] = std::stoi(tokens[k]);

    if ((ip_add_a[0] <= 255) && (ip_add_a[0] >= 0) && (ip_add_a[1] <= 255) && (ip_add_a[1] >= 0) && (ip_add_a[2] <= 255) && (ip_add_a[2] >= 0) && (ip_add_a[3] <= 255) && (ip_add_a[3] >= 0))
    {
        cout << vipadd << " VALID IP ADDRESS\n";
    }
    else
    {
        cout << vipadd << " INVALID IP ADDRESS\n";
    }

    return 0;
}