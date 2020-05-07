#include<iostream>
#include<string>
#include "Store.h"

using namespace std;
int main()
{
	initSomething();
	//initCars();
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
					cout << "1. Create announcement." << endl;
					cout << "2. Watch in category 'Cars'. " << endl;
					cin >> a;
					if (a == 1)
					{
						system("cls");
						addSome();
						//offerNewCar();
					}
					else if (a == 2)
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
								showSome();
								//showCarsEngine();
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
						offerNewTruck();
					}
					else if (a == 2)
					{
						int actionTruck = 0;
						do {
							system("cls");
							menu();
							cin >> actionTruck;
							switch (actionTruck)
							{
							case 1:
							{
								system("cls");
								showTruckEngine();
								system("pause");
							}break;
							case 2:
							{
								system("cls");
								showTruckTransmission();
								system("pause");
							}break;
							case 3:
							{
								system("cls");
								showTruckBody();
								system("pause");
							}break;
							case 4:
							{
								system("cls");
								showTruckLight();
								system("pause");
							}break;
							case 5:
							{
								system("cls");
								showTruckSuspension();
								system("pause");
							}break;
							case 6:
							{
								system("cls");
								showTruckWheels();
								system("pause");
							}break;
							case 7:
							{
								system("cls");
								showTruckSalon();
								system("pause");
							}break;
							case 8:
							{
								system("cls");
								showTruckElectric();
								system("pause");
							}break;
							case 9:
							{
								system("cls");
								showTruckOther();
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
						} while (actionTruck!=0);
										 
					
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
						offerNewBus();
					}
					else if (a == 2)
					{
						int actionBus = 0;
						do {
							system("cls");
							menu();
							cin >> actionBus;
							switch (actionBus)
							{
							case 1:
							{
								system("cls");
								showBusEngine();
								system("pause");
							}break;
							case 2:
							{
								system("cls");
								showBusTransmission();
								system("pause");
							}break;
							case 3:
							{
								system("cls");
								showBusBody();
								system("pause");
							}break;
							case 4:
							{
								system("cls");
								showBusLight();
								system("pause");
							}break;
							case 5:
							{
								system("cls");
								showBusSuspension();
								system("pause");
							}break;
							case 6:
							{
								system("cls");
								showBusWheels();
								system("pause");
							}break;
							case 7:
							{
								system("cls");
								showBusSalon();
								system("pause");
							}break;
							case 8:
							{
								system("cls");
								showBusElectric();
								system("pause");
							}break;
							case 9:
							{
								system("cls");
								showBusOther();
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
						} while (actionBus != 0);
						
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
						offerNewBike();
					}
					else if (a == 2)
					{
						int actionBike = 0;
						do {
							system("cls");
							BikeMenu();
							cin >> actionBike;
							switch (actionBike)
							{
							case 1:
							{
								system("cls");
								showBikesEngine();
								system("pause");
							}break;
							case 2:
							{
								system("cls");
								showBikeTransmission();
								system("pause");
							}break;
							
							case 3:
							{
								system("cls");
								showBikeLight();
								system("pause");
							}break;
							case 4:
							{
								system("cls");
								showBikeSuspensin();
								system("pause");
							}break;
							case 5:
							{
								system("cls");
								showBikeWheels();
								system("pause");
							}break;
							
							case 6:
							{
								system("cls");
								showBikeElectric();
								system("pause");
							}break;
							case 7:
							{
								system("cls");
								showBikeOther();
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
						} while (actionBike != 0);
						
				
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
			string login;
			string password;
			system("cls");
			cout << "Login:" << endl;
			cin >> login;
			cout << "Password" << endl;
			cin >> password;
			if (login=="admin"&&password=="1111")
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