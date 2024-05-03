#include <bits/stdc++.h>
using namespace std;
int main()
{
    int point = 0;
    while (1)
    {
        cout << "-------------Welcome to Guess the number game------------" << endl
             << "If you guess the number with in 5 attemps than 1 point will be added." << endl
             << endl;
        int attempt = 5;
        srand(time(0));
        int guess = rand() % 10;

        cout << "Total points : " << point << endl;

    Guess:
        cout << "Remaining Attempts :" << attempt << endl
             << "Guess the number from 1 to 0" << endl;

    Number:

        cout << "I think number is : ";
        char n;
        cin >> n;
        int number;

        if ((int)n < 48 || (int)n > 57)
        {
            cout << "You can only input number. Guess the number from 1 to 0" << endl
                 << endl;
            goto Number;
        }
        else
        {
            number = (int)n - '0';
        }

        if (number == guess)
        {
            point++;
            cout << "Great!! You are correct. ";
            if (attempt >= 0)
            {
                cout << "1 point added.";
            }
            else
            {
                cout << "0 point added.";
            }

            cout << endl
                 << endl;
        }
        else
        {
            if (attempt > 0)
            {
                attempt--;
                if (number > guess)
                {
                    cout << "Your number is too big." << endl
                         << endl;
                }
                else
                {
                    cout << "Your number is too small." << endl
                         << endl;
                }
                goto Guess;
            }
            else
            {
                cout << "OPS!! You lose the game. Try again." << endl
                     << endl;
            }
        }
    }
}