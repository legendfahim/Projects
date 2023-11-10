#include <iostream>
#include <conio.h>
using namespace std;

int main()
{

	// main program start.

	cout << "							Welcome To IR  ATM							";

	int balance = 0;
	int a;
	char want;

	// main loop

	while (1)
	{

		cout << endl
			 << endl;
		cout << "What do you want" << endl
			 << "1. Balance Check" << endl
			 << "2. Add Money" << endl
			 << "3. Cash Out" << endl
			 << "4. Reset Balance" << endl
			 << "5. Clear" << endl
			 << "6. Exit" << endl;
		cout << endl
			 << "								Developed By Istiak Rahman" << endl;
		cout << "Your command : ";
		cin >> want;

		// main switch of this program

		switch (want)
		{
		case '1':
			cout << "Your balance is " << balance;
			break;
		case '2':
			cout << "How many money do you want to add?" << endl
				 << "1. 50" << endl
				 << "2. 100" << endl
				 << "3. 500" << endl
				 << "4. 1000" << endl
				 << "5. Custom Ammount " << endl;
			int custom_ammount;
			cout << "Your command : ";
			cin >> custom_ammount;

			// custom balace switch

			switch (custom_ammount)
			{

			case 1:
				balance = balance + 50;
				cout << "Your money is added";
				break;

			case 2:
				balance = balance + 100;
				cout << "Your money is added";
				break;

			case 3:
				balance = balance + 500;
				cout << "Your money is added";
				break;
			case 4:
				balance = balance + 1000;
				cout << "Your money is added";
				break;

			case 5:
				cout << "How much money do you want to add?" << endl;
				cout << "Your ammount :";
				cin >> a;
				balance = balance + a;
				cout << "Your money is added";
				break;
			default:
				cout << "Wrong command";
				break;
			}
			break;

		case '3':
			cout << "How much money money do you want to cash out?" << endl;
			cout << "Inter your ammount :";
			int cash_out;
			cin >> cash_out;
			if (balance < cash_out)
			{
				cout << "Your balance is low.";
			}
			else
			{
				balance = balance - cash_out;
				cout << "Cash Out Successful";
				break;
			}
		case '4':
			balance = 0;
			cout << "Your Balance is reseted";
			break;

		case '5':
			system("cls");
			cout << "Thank You.";

			break;

		case '6':
			exit(1);
		default:
			cout << "Wrong command";
			break;
		}

	}
		getch();
}