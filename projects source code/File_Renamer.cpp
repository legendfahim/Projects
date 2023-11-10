#include <iostream>
#include <string>
#include <fstream>

using namespace std;
string oldName;
string convertName;

int main()
{

    while (1)
    {
        cout << "*****************************Developed by Istiak Rahman*****************************" << endl
             << endl
             << "Welcome to File Renamer>>>>>>>>>>>>>>>" << endl;

        cout << "Enter your file name with extention :";
        cin >> oldName;

        cout << "Enter converting File Name with extention :";
        cin >> convertName;

        // ofstream Convert;

        int result = rename(oldName.c_str(), convertName.c_str());
        if (result == 0)
        {
            system("CLS");
            cout << "File renamed successfully!!" << endl;
            
        }
        else
        {
            ifstream Rename(oldName);

            if (!Rename.is_open())
            {
                            system("CLS");
                cout << "The file could not find" << endl;
                continue;
            }
            else
            {
                            system("CLS");

                cout << "Faild to rename file !!" << endl
                     << "Try again" << endl;
                continue;
            }
        }
    }
}
