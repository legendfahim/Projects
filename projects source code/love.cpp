#include <iostream>
using namespace std;
int main()
{
    string name;
    int command;
    int command_love;
    int count;
    int command2;
    cout << "**************************Developed By Istiak Rahman***********************" << endl;

    // Input Name
    cout << "Apnar nam ki?" << endl;
    cout << "Amar nam :";
    cin >> name;

    // Question- 1
    cout << name << " "
         << "apni ki kaoke love koren?" << endl;
    cout << "1. Yes" << endl
         << "2. No" << endl;
    cout << "Amar uttor ";
    cin >> command;
    switch (command)
    {
    case 1:
        cout << " Apni ki janen sheo apnake love kore?" << endl;
        cout << "1. Yes" << endl
             << "2. No" << endl;
        cout << "amar uttor :";
        cin >> command_love;
        switch (command_love)
        {
        case 1:
            cout << "Apni tar mukh theke 'I love you' shunte chan?" << endl;
            cout << "1. Yes" << endl
                 << "2.No" << endl;
            cout << "amr uttor :";
            cin >> count;
            if (count == 1)
            {

                for (int i = 0; i < count; i--)
                {
                    cout << "I love You " << name << endl;
                }
            }
            else
            {
                cout << "Thank You. Apnader valobasha sharthok hok. " << name;
            }

            break;

        case 2:
            cout << "Tahole ami bolsi, Sheo apnake onek Love kore";
            break;
        }

        break;
    case 2:
        cout << "Kintu apnake to akjon love kore. Apni ki ta janen?" << endl
             << "1. Yes" << endl
             << "2. No" << endl
             << "Amar uttor :";
        cin >> command2;
        if (command2 == 1)
        {
            cout << "That's Great!!" << endl;
            exit(1);
        }
        else
        {
            cout << "That's Bad.";
            exit(1);
        }
        break;

    default:
        cout << "Wrong Command" << endl;
    }
}
