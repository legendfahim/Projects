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
        // All Data
        char num[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '~', '!', '@', '#', '$', '%', '^', '&', '*', '_', '-', '+', '/', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        string password = "";
        // Loop for numbers
        srand(time(0));

        for (int i = 0; i < n; i++)
        {
            password += num[rand() % n];
        }
        // Print generated password
        cout << "Your generated password : " << password << endl
             << endl;
    }
}