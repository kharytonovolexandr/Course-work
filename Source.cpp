#include<iostream>
#include<string>
#include "Store.h"

using namespace std;
void main()
{
	init();
	initUser();
	setlocale(LC_ALL, "Russian");
	int action = 0;
	int actionClient = 0;
	do
	{
		cout << "1. Увiйти як клiєнт:" << endl;
		cout << "2. Увiйти як адмiн:" << endl;
		cout << "3. Зареєструватися:" << endl;
		cout << "4. Вийти:" << endl;
		cin >> actionClient;
		switch (actionClient)
		{
		case 1:
		{
			do
			{
				cout << "Оберiть категорiю: " << endl;
				cout << "1. Легковi: " << endl;
				cout << "2. Вантажнi: " << endl;
				cout << "3. Буси: " << endl;
				cout << "4. Мотоцикли i трактори: " << endl;
				cout << "5. Вийти." << endl;
				cin >> actionClient;
				switch (actionClient)
				{
				case 1:
				{
					showCars();
				}break;
				case 2:
				{
					showTrucks();
				}break;
				case 3:
				{
					showBus();
				}break;
				case 4:
				{
					showBikes();
				}break;
				case 5:
				{
					cout << "Good bye!" << endl;
				}break;
				default:
					break;
				}


			} while (actionClient != 5);
		}break;
		case 2:
		{

		}break;
		case 3:
		{

		}break;
		case 4:
		{

		}break;

		
		}
	} while (action != 4);
}