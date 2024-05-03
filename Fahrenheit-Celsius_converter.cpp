#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "-----------Fahrenheit-Celsius converter------------" << endl;
    while (1)
    {
        cout << "what do you want?" << endl
             << "1. Fahrenheit ---> Celsius" << endl
             << "2. Celsius ---> Fahrenheit" << endl;
    Command:
        cout << "Your Command : ";
        string c;
        cin >> c;
        float fahrenheit;
        float celsius;
        if (c == "1")
        {
            cout << "Fahrenheit : ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * (5 / 9);

            cout << "Celsius :" << celsius << endl;
        }
        else if (c == "2")
        {
            cout << "Celsius : ";

            cin >> celsius;
            fahrenheit = (9 / 5) * celsius + 32;

            cout << "Fahrenheit :" << fahrenheit << endl;
        }
        else
        {
            cout << endl
                 << "Wrong Command!! Choose 1 or 2" << endl;
            goto Command;
        }
    }
}