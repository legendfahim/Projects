#include <iostream>
using namespace std;

int main()
{
	cout << "						***************IR Calculator************" << endl;
	int number;
	int count;
	int second;
	char obj;
	int d = 0;
	int num1;
	int num2;
	while (1)
	{

		cout << "What are you want to do?"
			 << endl
			 << "1. +" << endl
			 << "2. -" << endl
			 << "3. *" << endl
			 << "4. /" << endl
			 << "5. Clear All" << endl
			 << "6. End Task" << endl;

		cout << " 											Developed By Istiak Rahman" << endl;
		cout << "Your command :";
		cin >> obj;

		switch (obj)
		{
		case '1':

			cout << "How many number do you want to calculate?" << endl;
			cout << "Your command :";
			cin >> number;

			for (int i = 0; i < number; i++)
			{

				cout << "Inter your " << i + 1 << " number :" << endl;
				cin >> count;
				d = d + count;
			}

			cout << "Your calculation is " << d << endl;

			break;

		case '2':

			cout << "How many number do you want to calculate?" << endl;
			cout << "Your command :";
			cin >> number;

			for (int i = 0; i < number; i++)
			{

				cout << "Inter your " << i + 1 << " number :";
				cin >> count;
				d = count - d;
			}

			cout << "Your calculation is " << d << endl;

			break;
		case '3':

			cout << "How many number do you want to calculate?" << endl;
			cout << "Your command :";
			cin >> number;

			for (int i = 0; i < number; i++)
			{

				cout << "Inter your " << i + 1 << " number :";
				cin >> count;

				d = count * count;
			}

			cout << "Your calculation is " << d << endl;

			break;

		case '4':

			cout << "Inter Your First Number :" << endl;
			cin >> num1;
			cout << "Inter Your Second Number :";
			cin >> num2;

			d = num1 / num2;

			cout << "Your calculation is " << d << endl;

			break;
		case '5':
			system("cls");
			break;
		case '6':
			cout << " Thank You:)";
			exit(1);

			break;
		default:
			cout<<"Wrong Command";
			break;
		}
	}
}
