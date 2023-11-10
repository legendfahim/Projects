
#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <cctype>
#include <fstream>
#define test2.cpp
// Colors
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define CYAN "\033[36m"
using namespace std;

// All Variables
string userName;
string userPassword;
string confirmPassword;
string goal[100][100];
int goalDay[100][100];
int goalMonth[100][100];
int goalYear[100][100];
int mg = 0;
int myWish;
char firstChoise;
string deleteGoalNumber;
int j = 0;
int k = 0;

// All functions af this program

// Functions for Intro
void intro()
{
    cout << GREEN << "Welcome to Bucket list" << endl
         << BLUE << "Loading";

    for (int i = 0; i < 4; i++)
    {
        cout << "..";
        Sleep(1000);
    }
    system("cls");

    cout << GREEN << "***************Developed by Istiak Rahman*************" << endl;
}
// Function for show options
void options()
{
    cout << CYAN << "1. Add your Goal" << endl
         << CYAN << "2. Delete All Goals" << endl
         << CYAN << "3. All goals" << endl
         << CYAN << "4. Clear Screen" << endl
         //  << CYAN << "5. Log Out" << endl
         << CYAN << "5. Exit" << endl;
    cout << YELLOW << "Select a option: ";
}

// Function for check nam
bool containsCharacter(const string &line)
{
    for (char c : line)
    {
        if (isdigit(c))
        {
            return true;
        }
    }
    return false;
}

// Function for add Goals
void addGoal()
{
    cout << YELLOW << "What's your Goal?" << endl;
    cout << CYAN << "My Goal is : ";
    getline(cin, goal[mg][mg]);

    cout << CYAN << "Goal complitation date :" << endl;
date:
    cout << CYAN << "Day: ";
    cin >> goalDay[mg][mg];
    cin.clear();
    cin.ignore();

    if (goalDay[mg][mg] > 32 || goalDay[mg][mg] <= 0)
    {
        cout << RED << "Enter a valid date!!" << endl;
        goto date;
    }

month:
    cout << CYAN << "Month: ";
    cin >> goalMonth[mg][mg];
    cin.clear();
    cin.ignore();
    if (goalMonth[mg][mg] > 12 || goalMonth[mg][mg] <= 0)
    {
        cout << RED << "Enter a valid date!!" << endl;
        goto month;
    }

year:
    cout << "Year: ";
    cin >> goalYear[mg][mg];
    cin.clear();
    cin.ignore();
    if (goalYear[mg][mg] < 2023)
    {
        cout << RED << "Enter a valid date!!" << endl;
        goto year;
    }
    cout << GREEN << "Your goal is added." << endl;
    fstream bucket;
    bucket.open("Bucket_list.txt", ios::out | ios::app);
    bucket << ". " << goal[mg][mg] << " ::: " << goalDay[mg][mg] << "/" << goalMonth[mg][mg] << "/" << goalYear[mg][mg] << endl; // Showing format::: test 21/10/2006
    bucket.close();

    mg++;
}
// Function of showing Goals
void showGoals()
{


    // Open the file in read mode.
    ifstream file("bucket_list.txt");
    if (!file)
    {
        addGoal();
    }

    // Check if the file is empty.
    bool is_empty = true;
    char c;
    while (file >> c)
    {
        is_empty = false;
        break;
    }

    // Close the file.
    file.close();

    // Print the result.
    if (is_empty)
    {
        cout << "Your all goals are showed.------------>>>" << endl;
        cout << "No goals added here." << endl;
    }
    else
    {
        cout << "Your all goals are showed.------------>>>" << endl;
        ifstream showGoal("bucket_list.txt");
        cout << showGoal.rdbuf();
    }

    cout << endl
         << endl;
    // showGoal.close();
}

// Function for Check Password
void passwordCheck()
{
    while (1)
    {

        cout << YELLOW << "Enter Password :";
        // cin >> userPassword;
        getline(cin, userPassword);

        if (userPassword.length() < 4)
        {
            cout << RED << "Your password length is less than . Please enter a strong passsword." << endl;
        }
        else
        {
            break;
        }
    }
}
// Function for Confirm Password
void confirmStart()
{
    while (1)
    {

        cout << YELLOW << "confirm Password :";
        // cin >> confirmPassword;
        getline(cin, confirmPassword);

        if (userPassword != confirmPassword)
        {
            cout << RED << "Confirm password is not same." << endl;
        }
        else
        {
            break;
        }
        system("cls");
        intro();
    }
}
// Function for User Register
void userRegister()
{
    cout << BLUE << ">>>>>>>User Register" << endl;
    while (1)
    {

        cout << YELLOW << "Enter your User Name :";
        getline(cin, userName);

        if (containsCharacter(userName))
        {
            cout << RED << "Error: The line contains only character. Please enter a valid name." << endl;
        }
        else
        {
            break;
        }
    }

    passwordCheck();

    confirmStart();
    // Save user data on system
    string config = userName + userPassword;

    ofstream Register;
    Register.open("config_bucket_list.txt", ios::out | ios::app);
    Register << "All config data of User" << endl
             << config << endl;
    Register.close();
}
// Function of forget password
void forgetPassword()
{
forgetFirst:
    cout << ">>>>>>>>>>>>>>Forget Password" << endl;
    cout << YELLOW << "Enter your User Name :";
    getline(cin, userName);

    if (containsCharacter(userName))
    {
        cout << RED << "Error: The line contains only character. Please enter a valid name." << endl;
        goto forgetFirst;
    }
    else
    {

        ifstream forget;
        forget.open("config_bucket_list.txt");

        string userLoginInfo = userName;
        string fileContent((istreambuf_iterator<char>(forget)), istreambuf_iterator<char>());

        if (fileContent.find(userLoginInfo) != string::npos)
        {
            userRegister();
        }
        else
        {
            cout << endl
                 << endl
                 << RED << "User name is not correct. Please Try Again" << endl;
            goto forgetFirst;
        }
        forget.close();
    }
}
void userLogin()
{
first:

    cout << BLUE << ">>>>>>>User Log In" << endl;
    // Input User name for login
    cout << YELLOW << "Enter your User Name :";
    getline(cin, userName);

    if (containsCharacter(userName))
    {
        cout << RED << "Error: The line contains only character. Please enter a valid name." << endl;
        goto first;
    }
    else
    {
    }
second:
    // Input password for login
    cout << YELLOW << "Enter Password :";
    // cin >> userPassword;
    getline(cin, userPassword);

    if (userPassword.length() < 4)
    {
        cout << RED << "Your password length is less than . Please enter a strong passsword." << endl;
        goto second;
    }
    ifstream Login;
    Login.open("config_bucket_list.txt");
    if (!Login.is_open())
    {
        cout << RED << "No user found. Please Register before login" << endl;
        userRegister();
    }
    else
    {

        string loginInfo = userName + userPassword;
        string fileContent((istreambuf_iterator<char>(Login)), istreambuf_iterator<char>());

        if (fileContent.find(loginInfo) != string::npos)
        {
        }
        else
        {

            if (j == 4)
            {
                forgetPassword();
            }

            j++;
            cout << endl
                 << endl
                 << RED << "User info is not correct. Please Try Again" << endl;

            goto first;
        }
        Login.close();
    }

    // Check username and password for login.
}
// Function for Check login info.
void checkLogin()
{
    while (1)
    {

        cout << YELLOW << "Enter your password: ";
        string checkPass;

        getline(cin, checkPass);
        if (checkPass == userPassword)
        {
            break;
        }
        else
        {
            if (k == 4)
            {
                system("cls");
                userLogin();
            }
            k++;

            cout << RED << "Wrong password. Try again." << endl;
        }
    }
}

void deleteGoal()
{
        // Check if the file is empty.
            ifstream file("bucket_list.txt");
    bool is_empty = true;
    char c;
    while (file >> c)
    {
        is_empty = false;
        break;
    }

    // Close the file.
    file.close();

    // Print the result.
    if (is_empty)
    {

        cout <<RED<< "No goals added here for delete." << endl<<endl;
    }else{
    // Input number for delete this goal
    cout << CYAN << "Are you sure that you want to delete all goals?" << endl;
    cout << YELLOW << "Write Yes/No :";
    cin >> deleteGoalNumber;
    // cin.clear();
    // cin.ignore();

    // Empty File
    ofstream emptyFile;
    emptyFile.open("Bucket_list.txt");
    if (!emptyFile.is_open())
    {
        cout << "No Goals added here." << endl;
    }
    else
    {
        if (deleteGoalNumber == "Yes" || deleteGoalNumber == "yes")
        {

            emptyFile << "";
            emptyFile.close();
            cout <<RED<< "Your all goals are deleted." << endl<<endl<<endl;
        }
    }
    }
    // Loop for print 1st to previous goal of goal number
    // ofstream deleteGoal;
    // deleteGoal.open("Bucket_list.txt", ios::out | ios::app);

    // goal[0][i] =1
    // goal[1][i] =2
    // goal[2][i] =3
    // goal[3][i] =4

    // for (int i = 0; i < deleteGoalNumber - 1; i++)
    // {
    //     deleteGoal << i + 1 << ". " << goal[i][i] << " ::: " << goalDay[i][i] << "/" << goalMonth[i][i] << "/" << goalYear[i][i] << endl; // Showing format::: test 21/10/2006
    // }
    // // // Loop for print after goal to last goal of goal number
    // while (deleteGoalNumber != mg)
    // {
    //     int j = deleteGoalNumber;
    //     deleteGoal << j << ". " << goal[j][j] << " ::: " << goalDay[j][j] << "/" << goalMonth[j][j] << "/" << goalYear[j][j] << endl; // Showing format::: test 21/10/2006
    //     deleteGoalNumber++;
    // }
    // deleteGoal.close();
    // cout << GREEN << "The goal is deleted." << endl
    //      << endl;
}

// Main function of this Program
int main()
{

    // Intro
programStart:
    cout << GREEN << "***************Developed by Istiak Rahman*************" << endl;
    ifstream openCheck("config_bucket_list.txt");
    if (!openCheck.is_open())
    {
        intro();
        userRegister();
    }
    else
    {
        intro();
        userLogin();
    }

    system("CLS");
    intro();
    // Account Login

// Options of this program
start:
    options();

    cin >> myWish;
    // Clear cin command by build in function
    cin.clear();
    // Ignor cin command by build in function
    cin.ignore();
    switch (myWish)
    {
    case 1:
        // 1. Add your Goal
        checkLogin();
        addGoal();

        goto start;

        break;
    case 2:
        checkLogin();

        deleteGoal();
        goto start;
        break;
    case 3:
        showGoals();
        goto start;
        break;
    case 4:

        system("cls");
        intro();
        goto start;
        break;
        // case 5:
        //     system("CLS");
        //     goto programStart;
        //     break;

    case 5:
        cout << GREEN << "Thank you for using my software.";
        Sleep(1000);
        exit(1);

        break;
    default:

        cout << RED << "Wrong command. Select a option from this choice." << endl;
        goto start;
        break;
    }
}
