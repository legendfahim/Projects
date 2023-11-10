#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <cstdio>

using namespace std;
char choice;
string fileName;
string fileCreate;
string text;
string deleteFileName;

// Function for Intro

void intro()
{
  cout << "******************************Developed by Istiak Rahman********************************" << endl
       << "To get Exit Press ' CTRL + C '" << endl
       << "Choose a option :" << endl
       << "1. File open" << endl
       << "2. Create file" << endl
       << "3. Delete file" << endl
       << "4. Exit" << endl
       << "My choice :";
}

// Function for File open
void fileOpen()
{
  while (1)
  {

    cout << "To get Exit Press ' CTRL + C '" << endl;
    cout << "Enter your file name :";
    cin >> fileName;
    fileName = fileName + ".txt";
    ifstream file(fileName);

    if (!file.is_open())
    {
      system("CLS");
      cout << "No txt file can not found of this name." << endl;
      continue;
    }
    else
    {

      system("CLS");
      cout << "File name : " << fileName << endl
           << endl;

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

        cout << "Empty File...." << endl
             << endl;
        break;
      }
      else
      {

        cout << file.rdbuf();

        cout << endl
             << endl;
        break;
      }
    }
  }
}
// Function for File create
void createFile()
{
  while (1)
  {

    cout << "To get Exit Press ' CTRL + C '" << endl;
    cout << "Enter your file name :";
    cin >> fileCreate;
    fileCreate = fileCreate + ".txt";
    ifstream fileNameCheck(fileCreate);
    if (fileNameCheck.is_open())
    {
      system("CLS");
      cout << "The file is already exist. Please create with another name." << endl;
      continue;
    }
    else
    {
      ofstream file(fileCreate);
      while (1)
      {
        getline(cin, text);
        file << text << endl;
      }
    }
  }
}
// Function for delete .txt file
void deleteFile()
{
  while (1)
  {

  
  
  // Get the name of the file to delete.
  string fileName;
  cout <<"Write with extention"<<endl<< "Enter the name of the file you want to delete: ";
  cin >> fileName;

  // Delete the file.
  int success = remove(fileName.c_str());

  // Check if the file was deleted successfully.
  if (success) {
    cout << "The file could not be deleted."<<endl;
    continue;
  } else {
    system("CLS");
    cout << "The file was deleted successfully."<<endl;
    break;
  }

  }
}

int main()
{
  // Exit from program
  while (1)
  {
  Start:

    intro();

    cin >> choice;
    switch (choice)
    {
    case '1':
      fileOpen();
      goto Start;

      break;

    case '2':
      createFile();
      goto Start;

      break;
    case '3':

      deleteFile();
      goto Start;
      break;

    case '4':
      cout << "Thank you for using my software";
      Sleep(1500);
      exit(1);
    default:
      system("CLS");
      cout << "Wrong choice." << endl;
      goto Start;
      break;
    }
  }

  // Create a string to store the user's input.
  // string text;

  // Loop until the user presses `Ctrl`+`C`.
  // cout << "Enter some text: ";
  // while (true)
  // {
  // Get the user's input.

  // getline(cin, text);

  // Print the user's input to the console.

  //   ofstream file("textfile.txt", ios::out | ios::app);
  //   file << text << endl;
  // }

  return 0;
}