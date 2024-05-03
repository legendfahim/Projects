#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "---------Random Number Generator----------" << endl;

    while (1)
    {
        cout << "How many random number you want to generate?" << endl
             << "Number :";
        int n;
        cin >> n;
        srand(time(0));
        for (int i = 0; i < n; i++)
        {

            cout << rand() % 10 << endl;
        }
    }
}