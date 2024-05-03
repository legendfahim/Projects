#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "---------Countdown timer----------" << endl;

    int hour = 0, minute = 0, second = 0;
// User inputs
Hour:
    cout << "Hour: ";
    cin >> hour;
    if (hour < 0)
    {
        cout << "Input correct value" << endl;
        goto Hour;
    }
Minute:
    cout << "Minute: ";
    cin >> minute;
    if (minute > 60)
    {
        cout << "Input correct value" << endl;
        goto Minute;
    }
    else if (minute < 0)
    {
        cout << "Input correct value" << endl;
        goto Minute;
    }

Second:
    cout << "Second: ";
    cin >> second;
    if (second > 60)
    {
        cout << "Input correct value" << endl;
        goto Second;
    }
    else if (second < 0)
    {
        cout << "Input correct value" << endl;
        goto Second;
    }

    // time clock
    while (hour > 0 || minute > 0 || second > 0)
    {

        system("cls");
        cout << endl
             << "------>" << hour;
        if (hour < 2)
        {
            cout << " Hour";
        }
        else
        {
            cout << " Hours";
        }

        cout << " " << minute;
        if (minute < 2)
        {
            cout << " Minute";
        }
        else
        {
            cout << " Minutes";
        }

        cout << " " << second;
        if (second < 2)
        {
            cout << " Second";
        }
        else
        {
            cout << " Seconds";
        }

        cout << endl
             << endl;

        // checkpoint for second and minute
        if (second == 0)
        {
            if (minute > 0)
            {
                second = 60;
                minute--;
            }
        }
        else
        {
            second--;
        }
        // checkpoint for minute and hour

        if (minute == 0)
        {
            if (hour > 0)
            {
                minute = 60;
                hour--;
            }
        }

        // restart time
        _sleep(1000);
    }
}