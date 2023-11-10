
#include <iostream>
#include <string>
// Colors
// #define RED "\033[31m"
// #define GREEN "\033[32m"
// #define YELLOW "\033[33m"
// #define BLUE "\033[34m"
// #define CYAN "\033[36m"

using namespace std;
// Variables
char myCommand;

int main()
{
    
    // Design For Intro
    while (1)
    {

        cout << "*********************************************Developed by Istiak Rahman*********************************************" << endl
             << endl
             << "<<<<<<<<<<<<<<<<<<<<<<<<<IR Manager For Softwares" << endl
             << "-----------------------------------------------------------------------" << endl
             << "-----------------------------------------------------------------------" << endl
             // Options

             << "1. calculator\t\t\t"
             << "2. Bucket_list\t\t" << endl
             << "3. Currency_Converter\t\t"
             << "4. File_Renamer\t\t" << endl
             << "5. TXT_Maker\t\t\t"
             << "6. Ticket_counter\t\t" << endl
             << "7. Guess_Your_Lover\t\t"
             << "8. ATM\t\t" << endl;
        // First Input
        cout << ">>>>>>>>>>>" << endl
             << ">>>>>>>>>>>" << endl;
        cout << "My Command :";
        cin >> myCommand;
        switch (myCommand)
        {
        case '1':
            system("calculator");
            system("CLS");
            break;
        case '2':
            system("Bucket_list");
            system("CLS");
            break;
        case '3':
            system("Currency_Converter");
            system("CLS");
            break;

        case '4':
            system("File_Renamer");
            system("CLS");
            break;

        case '5':
            system("TXT_Maker");
            system("CLS");
            break;
        case '6':
            system("Ticket_counter");
            system("CLS");
            break;
        case '7':
            system("Guess_Your_Lover");
            system("CLS");
            break;
        case '8':
            system("ATM");
            system("CLS");

            break;
        default:
            cout << "Wrong Command. Please Enter a number." << endl;
            break;
        }
    }
}