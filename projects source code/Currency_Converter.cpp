#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string currency;
string ammount;
float currencyAmmount;
double rate;
double total;


// Function for coverte to capital letter
string Upper_Case(string name)
{

     for (int i = 0; i < name.length(); i++)
     {
          name[i] = toupper(name[i]);
     }
     return name;
}

int main()
{
     while (1)
     {
          cout << setprecision(15);
          // Into

          cout << "*********************************Developed by Istiak Rahman*********************************" << endl;
          cout << "Welcome to Currency Converter." << endl
               << "You can convert any currency to BDT(Bangladeshi Taka)"
               << endl;
          cout << endl;
     Start:
          cout << "Your currency name :";
          getline(cin, currency);
          // convert to Uppercase
          currency = Upper_Case(currency);
          // double valueNumber = currencyValue(currency_value);

          if (currency == "DOLLER")
          {
               rate = 109.26;
          }
          else if (currency == "RUPEE")
          {
               rate = 1.32;
          }
          else if (currency== "EURO")
          {
               rate = 118.41;
          }
          else if (currency == "RIAL")
          {
               rate = 0.0026;
          }
          else if (currency == "BITCOIN")
          {
               rate = 2903085.16;
          }
          else
          {
               rate =0 ;
               cout << "No currency found of this name. Please check your Currency Name Spelling." << endl;
              goto Start;;
          }

     Ammount:
          cout << endl
               << "Currency ammount :";
          cin >> ammount;
          cin.clear();
          cin.ignore();

          currencyAmmount = stof(ammount);
          if (currencyAmmount < 0)
          {
               cout << "Please enter only number." << endl;
             

               goto Ammount;
          }

          total = currencyAmmount * rate;
          system("CLS");

          cout << "Your convertion ammount : " << total << endl
               << endl;

     }
}
