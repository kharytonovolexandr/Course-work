#include<iostream>
#include<string>
#include "Store.h"

using namespace std;
int main()
{
	setlocale(0, "");
	init();
	initUser();
	int action = 0;
	int actionClient = 0;
	do
	{
		
		cout << "1. Sign in as client:" << endl;
		cout << "2. Sign in as admin:" << endl;
		cout << "3. Create new account:" << endl;
		cout << "4. Exit:" << endl;
		cin >> actionClient;
		switch (actionClient)
		{
		case 1:
		{
			authorization();
			do
			{
				system("cls");
				cout << "Choose category: " << endl;
				cout << "1. Cars: " << endl;
				cout << "2. Trucks: " << endl;
				cout << "3. Buses/miniven: " << endl;
				cout << "4. Bikes and tractors: " << endl;
				cout << "5. Exit." << endl;
				cin >> actionClient;
				switch (actionClient)
				{
				case 1:
				{
					int a = 0;
					cin >> a;
					cout << "1. Create announcement." << endl;
					cout << "2. Watch in category 'Cars'. " << endl;
					if (a == 1)
					{
						system("cls");
						offerNew();
					}
					else if (a == 2)


					{
						system("cls");
						showCars();
					}
				}break;
				case 2:
				{
					int a = 0;
					cout << "1. Create announcement." << endl;
					cout << "2. Watch in category 'Trucks'. " << endl;
					cin >> a;
					if (a == 1)
					{
						system("cls");
						offerNew();
					}
					else if (a == 2)
					{
						system("cls");
						showTrucks();
					}
				}break;
				case 3:
				{
					int a = 0;
					cout << "1. Create announcement." << endl;
					cout << "2. Watch in category 'Buses'. " << endl;
					cin >> a;
					if (a == 1)
					{
						system("cls");
						offerNew();
					}
					else if (a == 2)
					{
						system("cls");
						showBus();
					}
				}break;
				case 4:
				{
					int a = 0;
					cout << "1. Create announcement." << endl;
					cout << "2. Watch in category 'Bikes and tractors'. " << endl;
					cin >> a;
					if (a == 1)
					{
						system("cls");
						offerNew();
					}
					else if (a == 2)
					{
						system("cls");
						showBikes();
					}
				}break;
				case 5:
				{
					system("cls");
					cout << "Good bye!" << endl;
				}break;
				default:
					break;

				}


			} while (actionClient != 5);
		}break;
		case 2:
		{
			system("cls");
			authorization();
		}break;
		case 3:
		{
			system("cls");
			addNewUser();
		}break;
		case 4:
		{
			system("cls");
			cout << "Good bye!" << endl;
		}break;

		}break;

		
	} while (action != 4);
	system("pause");
	return 0;
}