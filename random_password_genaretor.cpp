
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "----------Password Generator----------" << endl;
    while (1)
    {

    // user input
    Start:
        cout << "Password Length : ";
        int n;
        cin >> n;
        if (n < 8)
        {
            cout << "Password length should be grater than 8!!" << endl
                 << endl;
            goto Start;
        }
        // Main logic

        // All Data
        char num[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

        char symbol[] = {'~', '!', '@', '#', '$', '%', '^', '&', '*', '_', '-', '+', '/'};

        char capL[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

        char smallL[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        string password = "";

        // Loop for symbols

        for (int i = 0; i < n / 4; i++)
        {
            password += symbol[((rand() % 10) + (rand() % 10)) > 13 ? (rand() % 10) + (rand() % 10) / 2 : (rand() % 10) + (rand() % 10)];
        }
        // Loop for numbers
        for (int i = 0; i < n / 4; i++)
        {
            password += num[rand() % 10];
        }
        // Loop for capL

        for (int i = 0; i < n / 4; i++)
        {
            password += capL[(rand() % 100) > 26 ? (rand() % 100) / 4 : (rand() % 100)];
        }
        // Loop for smallL

        for (int i = 0; i < n / 4; i++)
        {
            password += smallL[(rand() % 100) > 26 ? (rand() % 100) / 4 : (rand() % 100)];
        }
        // If password length less than n
        if (password.length() < n)
        {
            for (int i = 0; i < n - password.length(); i++)
            {
                password += symbol[((rand() % 10) + (rand() % 10)) > 13 ? (rand() % 10) + (rand() % 10) / 2 : (rand() % 10) + (rand() % 10)];
            }
        }
        // Print generated password
        cout << "Your generated password : " << password << endl
             << endl;
    }
}