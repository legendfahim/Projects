#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (1)
    {

        cout << "<<<<<<<<<<<<<<<<code message Encoder / Decoder>>>>>>>>>>>>>>>>" << endl;
        cout << "1. Message to code" << endl
             << "2. Code to message" << endl;
        char c;
        cin >> c;
        switch (c)
        {
        case '1':
            cout << "Enter your message: ";
            string text;
            getline(cin, text);
            break;
        case '2':
            cout << "Enter your code: ";
            int code;
            cin >> code;
            break;

        default:
            cout << "Wrong Command. Please choose 1 or 2." << endl
                 << endl;
            break;
        }
    }
}