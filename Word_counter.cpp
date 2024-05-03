#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "         Welcome to Word Counter" << endl
         << "______________________________________________" << endl
         << endl;
    long long int totalWords = 0;
    string word = "";
    cout << "write your sentence:" << endl;

    while (cin >> word)
    {

        if (word.empty())
        {
            break;
        }
        totalWords++;
        system("cls");
        cout << "Total words: " << totalWords << endl
             << endl;
        cout << "write your sentence:" << endl;
    }
}
