#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "---------Roman numeral converter-----------" << endl;
    while (1)
    {
        cout << "Enter Roman numeral number : ";
        string numeral;
        cin >> numeral;
        int sum = 0;

        for (int i = 0; i < numeral.length(); i++)
        {

            if (tolower(numeral[i] == 'i'))
            {
                sum += 1;
            }
            else if (tolower(numeral[i]) == 'v')
            {
                sum += 5;
            }
            else if (tolower(numeral[i]) == 'x')
            {
                sum += 10;
            }
        }
        if (tolower(numeral[numeral.length() - 2]) == 'i' && tolower(numeral[numeral.length() - 1]) == 'x')
        {
            sum--;
        }
        cout << "numeral " << numeral << " is " << sum << endl
             << endl;
    }
}