#include<iostream>
#include<string>
#include "Store.h"

using namespace std;
int main()
{
	initCarsEngine();
	initCarsTransmission();
	initCarsBody();
	initCarsLight();
	initCarsSuspension();
	initCarsWheels();
	initCarsSalon();
	initCarsElectro();
	initCarsOther();
	initUser();
	int action = 0;
	int actionClient = 0;
	do
	{
		cout << "*******DETAILS STORE*******" << endl;
		cout << "***************************" << endl;
		cout << "1. Sign in as client:" << endl;
		cout << "2. Sign in as admin:" << endl;
		cout << "3. Create new account:" << endl;
		cout << "4. Specific service:" << endl;
		cout << "5. Exit:" << endl;
		cout << "***************************" << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			authorization();
			do
			{


				system("cls");
				cout << "1. Create announcement." << endl;
				cout << "2. Watch " << endl;
				cout << "3. Search " << endl;
				cout << "4.Exit " << endl;
				cin >> actionClient;
				switch (actionClient)
				{
				case 1:
				{
					system("cls");
					offerNewCar();
				}break;
				case 2:
				{
					int actionCar = 0;
					do {
						system("cls");
						menu();
						cin >> actionCar;
						switch (actionCar)
						{
						case 1:
						{
							system("cls");
							showCarsEngine();
							system("pause");
						}break;
						case 2:
						{
							system("cls");
							showCarsTransmission();
							system("pause");
						}break;
						case 3:
						{
							system("cls");
							showCarsBody();
							system("pause");
						}break;
						case 4:
						{
							system("cls");
							showCarsLight();
							system("pause");
						}break;
						case 5:
						{
							system("cls");
							showCarsSuspension();
							system("pause");
						}break;
						case 6:
						{
							system("cls");
							showCarsWheels();
							system("pause");
						}break;
						case 7:
						{
							system("cls");
							showCarsSalon();
							system("pause");
						}break;
						case 8:
						{
							system("cls");
							showCarsElectric();
							system("pause");
						}break;
						case 9:
						{
							system("cls");
							showCarsOther();
							system("pause");
						}break;
						case 0:
						{
							system("cls");

						}break;
						default:
						{
						}break;
						}
					} while (actionCar != 0);


				}break;
				case 3:
				{
					system("cls");
					searchCar();
				}break;
				case 4:
				{
					cout << "Good bye!" << endl;
				}break;
				default:
					break;
				}
			} while (actionClient != 4);
		}break;
		case 2:
		{
			string login;
			string password;
			system("cls");
			cout << "Login:" << endl;
			cin >> login;
			cout << "Password" << endl;
			cin >> password;
			if (login == "admin" && password == "1111")
			{

			}

		}break;
		case 3:
		{
			system("cls");
			addNewUser();
		}break;
		case 4:
		{

		}break;
		case 5:
		{
			system("cls");
			cout << "Good bye!" << endl;
		}break;
		}break;
		

		
	} while (action != 5);
	system("pause");
	return 0;
}