#include <iostream>
#include <cctype>
using namespace std;
// Starting Part
// Variables
string name;
int q1;
int a1;
char a2;
string a3;
string large_Name;
int name_char_num;
// Guess Number of his/her nickname
void guessNumber()
{
    cout << "Wrong name!!!!" << endl;
    cout << "Guess his/her name." << endl
         << "Let's Start" << endl;
    while (1)
    {

        cout << "Guess his nickname's total charecter :";
        cin >> name_char_num;
        if (name_char_num == 5)
        {
            cout << "Great!! Carry on." << endl;
           break;
        }
        else
        {
            cout << "Oops, wrong!! Try again." << endl;
            continue;
                //  << "Coding Running. Please wait for next part. Thank You  :)";
        }
    }
}
// main function of this program
int main()
{
    cout << "***************Code With Fahim***************" << endl
         << endl;

    // Into
    cout << "Do you believe this game can tell your future?" << endl
         << "If you don 't believe it, try it." << endl
         << "Let' s Play !!!" << endl;

    // Name  Input

    cout << "What's your name?" << endl
         << "My name is :";
    cin >> name;

    // Question-1
    cout << name << " ,"
         << "Do you know somebody wants to say you something?" << endl;
    cout << "1. Yes" << endl
         << "2. No" << endl
         << "Type only 1 or 2" << endl;
    // Answer of the Q-1
    cout << "Your reply :";
    cin >> q1;
    // Switch of first question
    switch (q1)
    {
    case 1:
        cout << "Congratulations!!  Do you know who??" << endl
             << "1. Yes" << endl
             << "2. No" << endl
             << "Type only 1 or 2" << endl;
        cin >> a1;
        // Switch of first question's case 1
        switch (a1)
        {
        case 1:
            cout << "Are you know his/her name?" << endl
                 << "1. Yes" << endl
                 << "2. No" << endl
                 << "Type only 1 or 2" << endl;
            // Input answer of first question's switch --> case-1 --> switch --> case-1
            cin >> a2;
            if (a2 == '1')
            {
                cout << "Inter his/her name :";
                cin >> a3;

                if (a3 == "Himel" || a3 == "himel" || a3 == "HIMEL")
                {
                    cout << "Waaaahhhh!!!!!!" << endl
                         << "Best of luck. Carry on.";
                }
                else
                {
                    guessNumber();
                }
            }

            break;
        }

        break;
    case 2:
        cout << "Somebody wants to say something." << endl;
        cout << "Guess his/her name." << endl
             << "Let's Start" << endl;
        cout << "Guess his nickname's total charecter :";
        cin >> name_char_num;
        if (name_char_num == 5)
        {
            cout << "Great" << endl
                 << "Coding Running. Please wait for next part. Thank You  :)";
        }
        else
        {
            guessNumber();
        }

        break;
    default:
        cout << "Wrong command";
    }
}
