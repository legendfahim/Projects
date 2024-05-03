#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "---------Palindrome checker---------" << endl;
    while (1)
    {
        cout << "Enter your word: ";
        string word;
        string test = "";

        cin >> word;
        for (int i = word.length() - 1; i >= 0; i--)
        {
            test += word[i];
        }
        if (word == test)
        {
            cout << "YES, It's a Palindrome" << endl;
        }
        else
        {
            cout << "NO, It's not a Palindrome" << endl;
        }
        cout << endl;
    }
}