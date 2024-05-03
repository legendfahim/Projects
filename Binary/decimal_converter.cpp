#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "----------------Binary/decimal converter---------------" << endl;
    while (1)
    {

        cout << "What do you want?" << endl
             << "1. Binary----->Decimal\n2. Decimal----->Binary\n";
        cout << "Your Command: ";
        int command;
        cin >> command;
        if (command == 1)
        {
            // Binary----->Decimal
            cout << "Enter Your Binary Number: ";
            int binary, decimal = 0;
            cin >> binary;
            for (int i = 0; binary != 0; i++)
            {
                decimal += (binary % 10) * pow(2, i);
                binary /= 10;
            }
            cout << "-------> Decimal " << decimal << endl
                 << endl;
        }
        else if (command == 2)
        {
            // Decimal----->Binary
            cout << "Enter Your Decimal Number: ";
            int decimal, number = 1, sum = 0;
            int binary = 0;
            cin >> decimal;
            while (1)
            {
                if (number * 2 > decimal)
                {
                    break;
                }
                else
                {
                    number *= 2;
                }
            }
            while (1)
            {
                sum += number;
                if (sum <= decimal)
                {
                    binary = (binary * 10) + 1;
                }
                else
                {
                    binary = (binary * 10) + 0;
                    sum -= number;
                }
                if (number == 1)
                {
                    break;
                }

                number /= 2;
            }

            cout << "-------> Binary " << binary << endl
                 << endl;
        }
        else
        {
            cout << "Wrong Command. Choose 1 or 2." << endl
                 << endl;
        }
    }
}