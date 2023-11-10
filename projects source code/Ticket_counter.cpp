#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

    cout << "						     Ticket Counter" << endl;

    int balance = 0;
    int amount;
    char command;
    int from;
    int to;
    int buy_ticket;
    while (1)
    {
        cout << "1. Balance Check" << endl
             << "2. Add Money" << endl
             << "3. Buy Ticket" << endl
             << "4. Clear" << endl
             << "5. Exit" << endl;
        cout << "Inter YOur Command :";
        cin >> command;
        cout<<endl;

        switch (command)
        {
        case '1':
            cout << "Your balance is " << balance << endl
                 << endl;
            break;

        case '2':

            cout << "How much money do you want to add?" << endl
                 << "Inter your ammount :";
            cin >> amount;
            balance = balance + amount;
            cout << "Your balance is added" << endl;
            break;

            // Buy Ticket

        case '3':
            cout << "Select Your Home" << endl;
            cout << "1. Dhaka" << endl
                 << "2. Barishal" << endl
                 << "3. Rajshahi" << endl
                 << "4. Rangpur" << endl
                 << "5. Khulna" << endl
                 << "6. Mymensingh" << endl
                 << "7. Chittagong" << endl
                 << "8. Sylhet" << endl;
            cout << "Your Home :";

            cin >> from;

            switch (from)
            {
            case 1:
                cout << "Select Your Destination" << endl;
                cout << "1. Dhaka to Barishal" << endl
                     << "2. Dhaka to Rajshahi" << endl
                     << "3. Dhaka to Rangpur" << endl
                     << "4. Dhaka to Khulna" << endl
                     << "5. Dhaka to Mymensingh" << endl
                     << "6. Dhaka to Chittagong" << endl
                     << "7. Dhaka to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 10 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 10 || balance > 10)
                    {
                        balance = balance - 10;
                        cout << "Your ticket buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 2:
                cout << "Select Your Destination" << endl;
                cout << "1. Barishal to Dhaka" << endl
                     << "2. Barishal to Rajshahi" << endl
                     << "3. Barishal to Rangpur" << endl
                     << "4. Barishal to Khulna" << endl
                     << "5. Barishal to Mymensingh" << endl
                     << "6. Barishal to Chittagong" << endl
                     << "7. Barishal to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 20 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 20 || balance > 20)
                    {
                        balance = balance - 20;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 3:
                cout << "Select Your Destination" << endl;
                cout << "1. Rajshahi to Dhaka" << endl
                     << "2. Rajshahi to Barishal" << endl
                     << "3. Rajshahi to Rangpur" << endl
                     << "4. Rajshahi to Khulna" << endl
                     << "5. Rajshahi to Mymensingh" << endl
                     << "6. Rajshahi to Chittagong" << endl
                     << "7. Rajshahi to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 30 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 30 || balance > 30)
                    {
                        balance = balance - 30;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;

            case 4:
                cout << "Select Your Destination" << endl;
                cout << "1. Rangpur to Dhaka" << endl
                     << "2. Rangpur to Barishal" << endl
                     << "3. Rangpur to Rajshahi" << endl
                     << "4. Rangpur to Khulna" << endl
                     << "5. Rangpur to Mymensingh" << endl
                     << "6. Rangpur to Chittagong" << endl
                     << "7. Rangpur to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 40 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 40 || balance > 40)
                    {
                        balance = balance - 40;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 5:
                cout << "Select Your Destination" << endl;
                cout << "1. Khulna to Dhaka" << endl
                     << "2. Khulna to Barishal" << endl
                     << "3. Khulna to Rajshahi" << endl
                     << "4. Khulna to Rangpur" << endl
                     << "5. Khulna to Mymensingh" << endl
                     << "6. Khulna to Chittagong" << endl
                     << "7. Khulna to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 50 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 50 || balance > 50)
                    {
                        balance = balance - 50;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 6:
                cout << "Select Your Destination" << endl;
                cout << "1. Mymensingh to Dhaka" << endl
                     << "2. Mymensingh to Barishal" << endl
                     << "3. Mymensingh to Rajshahi" << endl
                     << "4. Mymensingh to Rangpur" << endl
                     << "5. Mymensingh to Khulna" << endl
                     << "6. Mymensingh to Chittagong" << endl
                     << "7. Mymensingh to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 60 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 60 || balance > 60)
                    {
                        balance = balance - 60;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 7:
                cout << "Select Your Destination" << endl;
                cout << "1. Chittagong to Dhaka" << endl
                     << "2. Chittagong to Barishal" << endl
                     << "3. Chittagong to Rajshahi" << endl
                     << "4. Chittagong to Rangpur" << endl
                     << "5. Chittagong to Khulna" << endl
                     << "6. Chittagong to Mymensingh" << endl
                     << "7. Chittagong to Sylhet" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 70 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 70 || balance > 70)
                    {
                        balance = balance - 70;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            case 8:
                cout << "Select Your Destination" << endl;
                cout << "1. Sylhet to Dhaka" << endl
                     << "2. Sylhet to Barishal" << endl
                     << "3. Sylhet to Rajshahi" << endl
                     << "4. Sylhet to Rangpur" << endl
                     << "5. Sylhet to Khulna" << endl
                     << "6. Sylhet to Mymensingh" << endl
                     << "7. Sylhet to Chittagong" << endl;
                cout << "Your Destination :";
                cin >> to;
                cout << "Your Ticket Price is 80 TK.";
                cout << "Do you want to buy Ticket?" << endl
                     << "1. Yes" << endl
                     << "2. No";
                cout << endl
                     << "Your command :";
                cin >> buy_ticket;

                if (buy_ticket == 1)
                {
                    if (balance == 80 || balance > 80)
                    {
                        balance = balance - 80;
                        cout << "Your balnce buy successfully";
                    }
                    else
                    {
                        cout << "Your balance is low.";
                    }
                }
                else if (buy_ticket == 2)
                {
                    system("cls");
                }
                else
                {
                    cout << "Wrong Command";
                }

                break;
            }

        case '4':
            system("cls");
            break;

        case '5':
            exit(1);
            break;
        default:
            cout << "Your command is wrong" << endl;
           
            ;
        }
    }

    getch();
}
