#include "Store.h"
#include<iostream>
#include<string>
#include<fstream>
#include<list>

using namespace std;
#define CLEAR system("cls");
#define PAUSE system("pause");
const string fileName = "DataBase.txt";
const string Users = "Users.txt";
int countArr = 0;
vehicle* vehicleArr;
list<user> users;
void init()
{
	ifstream fin;
	fin.open(fileName);
	bool isOPen = fin.is_open();

	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else {
		vehicle temp;
		while (!fin.eof())
		{
			
			fin >> temp.id;
			if (temp.id != NULL) 
			{
				//cars
				fin, temp.car.id;
				getline(fin, temp.car.brandCar.marka);
				getline(fin, temp.car.brandCar.model);
				fin >> temp.car.brandCar.year;
				getline(fin, temp.car.engine.title);
				getline(fin, temp.car.engine.brand.marka);
				getline(fin, temp.car.engine.brand.model);
				fin>> temp.car.engine.brand.year;
				fin>> temp.car.engine.EnginVol;
				getline(fin, temp.car.engine.petroltype);
				fin, temp.car.engine.condition;
				getline(fin, temp.car.engine.catalogNumb);
				getline(fin, temp.car.engine.contact.name);
				getline(fin, temp.car.engine.contact.phoneNumb);
				getline(fin, temp.car.engine.contact.email);
				getline(fin, temp.car.transmission.title);
				getline(fin, temp.car.transmission.brand.marka);
				getline(fin, temp.car.transmission.brand.model);
				fin, temp.car.transmission.brand.year;
				fin, temp.car.transmission.EnginVol;
				getline(fin, temp.car.transmission.petroltype);
				fin, temp.car.transmission.condition;
				getline(fin, temp.car.transmission.catalogNumb);
				getline(fin, temp.car.transmission.contact.name);
				getline(fin, temp.car.transmission.contact.phoneNumb);
				getline(fin, temp.car.transmission.contact.email);
				getline(fin, temp.car.body.title);
				getline(fin, temp.car.body.brand.marka);
				getline(fin, temp.car.body.brand.model); 
				fin, temp.car.body.brand.year;
				getline(fin, temp.car.body.type.bodytype);
				fin, temp.car.body.type.restyle;
				getline(fin, temp.car.body.contact.name);
				getline(fin, temp.car.body.contact.phoneNumb);
				getline(fin, temp.car.body.contact.email);
				getline(fin, temp.car.light.title);
				getline(fin, temp.car.light.brand.marka);
				getline(fin, temp.car.light.brand.model);
				fin, temp.car.light.brand.year;
				getline(fin, temp.car.light.contact.name);
				getline(fin, temp.car.light.contact.phoneNumb);
				getline(fin, temp.car.light.contact.email);
				getline(fin, temp.car.suspension.title);
				getline(fin, temp.car.suspension.brand.marka);
				getline(fin, temp.car.suspension.brand.model);
				fin, temp.car.suspension.brand.year;
				fin, temp.car.suspension.condition;
				getline(fin, temp.car.suspension.catalogNumb);
				getline(fin, temp.car.suspension.contact.name);
				getline(fin, temp.car.suspension.contact.phoneNumb);
				getline(fin, temp.car.suspension.contact.email);
				getline(fin, temp.car.wheels.title);
				fin, temp.car.wheels.radius;
				getline(fin, temp.car.wheels.season);
				getline(fin, temp.car.wheels.size);
				getline(fin, temp.car.wheels.contact.name);
				getline(fin, temp.car.wheels.contact.phoneNumb);
				getline(fin, temp.car.wheels.contact.email);
				getline(fin, temp.car.salon.title);
				getline(fin, temp.car.salon.brand.marka);
				getline(fin, temp.car.salon.brand.model);
				fin, temp.car.salon.brand.year;
				fin, temp.car.salon.condition;
				getline(fin, temp.car.salon.Bodytype.bodytype);
				fin, temp.car.salon.Bodytype.restyle;
				getline(fin, temp.car.salon.catalogNumb);
				getline(fin, temp.car.salon.contact.name);
				getline(fin, temp.car.salon.contact.phoneNumb);
				getline(fin, temp.car.salon.contact.email);
				getline(fin, temp.car.elecronic.title);
				getline(fin, temp.car.elecronic.brand.marka);
				getline(fin, temp.car.elecronic.brand.model);
				fin, temp.car.elecronic.brand.year;
				getline(fin, temp.car.elecronic.Bodytype.bodytype);
				fin, temp.car.elecronic.Bodytype.restyle;
				getline(fin, temp.car.elecronic.catalogNumb);
				getline(fin, temp.car.elecronic.contact.name);
				getline(fin, temp.car.elecronic.contact.phoneNumb);
				getline(fin, temp.car.elecronic.contact.email);
				getline(fin, temp.car.other.title);
				getline(fin, temp.car.other.brand.marka);
				getline(fin, temp.car.other.brand.model);
				fin, temp.car.other.brand.year;
				getline(fin, temp.car.other.contact.name);
				getline(fin, temp.car.other.contact.phoneNumb);
				getline(fin, temp.car.other.contact.email);

				//trucks
				fin, temp.truck.id;
				getline(fin, temp.truck.brandCar.marka);
				getline(fin, temp.truck.brandCar.model);
				fin >> temp.truck.brandCar.year;
				getline(fin, temp.truck.engine.title);
				getline(fin, temp.truck.engine.brand.marka);
				getline(fin, temp.truck.engine.brand.model);
				fin >> temp.truck.engine.brand.year;
				fin >> temp.truck.engine.EnginVol;
				getline(fin, temp.truck.engine.petroltype);
				fin, temp.truck.engine.condition;
				getline(fin, temp.truck.engine.catalogNumb);
				getline(fin, temp.truck.engine.contact.name);
				getline(fin, temp.truck.engine.contact.phoneNumb);
				getline(fin, temp.truck.engine.contact.email);
				getline(fin, temp.truck.transmission.title);
				getline(fin, temp.truck.transmission.brand.marka);
				getline(fin, temp.truck.transmission.brand.model);
				fin, temp.truck.transmission.brand.year;
				fin, temp.truck.transmission.EnginVol;
				getline(fin, temp.truck.transmission.petroltype);
				fin, temp.truck.transmission.condition;
				getline(fin, temp.truck.transmission.catalogNumb);
				getline(fin, temp.truck.transmission.contact.name);
				getline(fin, temp.truck.transmission.contact.phoneNumb);
				getline(fin, temp.truck.transmission.contact.email);
				getline(fin, temp.truck.body.title);
				getline(fin, temp.truck.body.brand.marka);
				getline(fin, temp.truck.body.brand.model);
				fin, temp.truck.body.brand.year;
				getline(fin, temp.truck.body.type.bodytype);
				fin, temp.truck.body.type.restyle;
				getline(fin, temp.truck.body.contact.name);
				getline(fin, temp.truck.body.contact.phoneNumb);
				getline(fin, temp.truck.body.contact.email);
				getline(fin, temp.truck.light.title);
				getline(fin, temp.truck.light.brand.marka);
				getline(fin, temp.truck.light.brand.model);
				fin, temp.truck.light.brand.year;
				getline(fin, temp.truck.light.contact.name);
				getline(fin, temp.truck.light.contact.phoneNumb);
				getline(fin, temp.truck.light.contact.email);
				getline(fin, temp.truck.suspension.title);
				getline(fin, temp.truck.suspension.brand.marka);
				getline(fin, temp.truck.suspension.brand.model);
				fin, temp.truck.suspension.brand.year;
				fin, temp.truck.suspension.condition;
				getline(fin, temp.truck.suspension.catalogNumb);
				getline(fin, temp.truck.suspension.contact.name);
				getline(fin, temp.truck.suspension.contact.phoneNumb);
				getline(fin, temp.truck.suspension.contact.email);
				getline(fin, temp.truck.wheels.title);
				fin, temp.truck.wheels.radius;
				getline(fin, temp.truck.wheels.season);
				getline(fin, temp.truck.wheels.size);
				getline(fin, temp.truck.wheels.contact.name);
				getline(fin, temp.truck.wheels.contact.phoneNumb);
				getline(fin, temp.truck.wheels.contact.email);
				getline(fin, temp.truck.salon.title);
				getline(fin, temp.truck.salon.brand.marka);
				getline(fin, temp.truck.salon.brand.model);
				fin, temp.truck.salon.brand.year;
				fin, temp.truck.salon.condition;
				getline(fin, temp.truck.salon.Bodytype.bodytype);
				fin, temp.truck.salon.Bodytype.restyle;
				getline(fin, temp.truck.salon.catalogNumb);
				getline(fin, temp.truck.salon.contact.name);
				getline(fin, temp.truck.salon.contact.phoneNumb);
				getline(fin, temp.truck.salon.contact.email);
				getline(fin, temp.truck.elecronic.title);
				getline(fin, temp.truck.elecronic.brand.marka);
				getline(fin, temp.truck.elecronic.brand.model);
				fin, temp.truck.elecronic.brand.year;
				getline(fin, temp.truck.elecronic.Bodytype.bodytype);
				fin, temp.truck.elecronic.Bodytype.restyle;
				getline(fin, temp.truck.elecronic.Bodytype.bodytype);
				getline(fin, temp.truck.elecronic.catalogNumb);
				getline(fin, temp.truck.elecronic.contact.name);
				getline(fin, temp.truck.elecronic.contact.phoneNumb);
				getline(fin, temp.truck.elecronic.contact.email);
				getline(fin, temp.truck.other.title);
				getline(fin, temp.truck.other.brand.marka);
				getline(fin, temp.truck.other.brand.model);
				fin, temp.truck.other.brand.year;
				getline(fin, temp.truck.other.contact.name);
				getline(fin, temp.truck.other.contact.phoneNumb);
				getline(fin, temp.truck.other.contact.email);

				//bus
				fin, temp.bus.id;
				getline(fin, temp.bus.brandCar.marka);
				getline(fin, temp.bus.brandCar.model);
				fin >> temp.bus.brandCar.year;
				getline(fin, temp.bus.engine.title);
				getline(fin, temp.bus.engine.brand.marka);
				getline(fin, temp.bus.engine.brand.model);
				fin >> temp.bus.engine.brand.year;
				fin >> temp.bus.engine.EnginVol;
				getline(fin, temp.bus.engine.petroltype);
				fin, temp.bus.engine.condition;
				getline(fin, temp.bus.engine.catalogNumb);
				getline(fin, temp.bus.engine.contact.name);
				getline(fin, temp.bus.engine.contact.phoneNumb);
				getline(fin, temp.bus.engine.contact.email);
				getline(fin, temp.bus.transmission.title);
				getline(fin, temp.bus.transmission.brand.marka);
				getline(fin, temp.bus.transmission.brand.model);
				fin, temp.bus.transmission.brand.year;
				fin, temp.bus.transmission.EnginVol;
				getline(fin, temp.bus.transmission.petroltype);
				fin, temp.bus.transmission.condition;
				getline(fin, temp.bus.transmission.catalogNumb);
				getline(fin, temp.bus.transmission.contact.name);
				getline(fin, temp.bus.transmission.contact.phoneNumb);
				getline(fin, temp.bus.transmission.contact.email);
				getline(fin, temp.bus.body.title);
				getline(fin, temp.bus.body.brand.marka);
				getline(fin, temp.bus.body.brand.model);
				fin, temp.bus.body.brand.year;
				getline(fin, temp.bus.body.type.bodytype);
				fin, temp.bus.body.type.restyle;
				getline(fin, temp.bus.body.contact.name);
				getline(fin, temp.bus.body.contact.phoneNumb);
				getline(fin, temp.bus.body.contact.email);
				getline(fin, temp.bus.light.title);
				getline(fin, temp.bus.light.brand.marka);
				getline(fin, temp.bus.light.brand.model);
				fin, temp.bus.light.brand.year;
				getline(fin, temp.bus.light.contact.name);
				getline(fin, temp.bus.light.contact.phoneNumb);
				getline(fin, temp.bus.light.contact.email);
				getline(fin, temp.bus.suspension.title);
				getline(fin, temp.bus.suspension.brand.marka);
				getline(fin, temp.bus.suspension.brand.model);
				fin, temp.bus.suspension.brand.year;
				fin, temp.bus.suspension.condition;
				getline(fin, temp.bus.suspension.catalogNumb);
				getline(fin, temp.bus.suspension.contact.name);
				getline(fin, temp.bus.suspension.contact.phoneNumb);
				getline(fin, temp.bus.suspension.contact.email);
				getline(fin, temp.bus.wheels.title);
				fin, temp.bus.wheels.radius;
				getline(fin, temp.bus.wheels.season);
				getline(fin, temp.bus.wheels.size);
				getline(fin, temp.bus.wheels.contact.name);
				getline(fin, temp.bus.wheels.contact.phoneNumb);
				getline(fin, temp.bus.wheels.contact.email);
				getline(fin, temp.bus.salon.title);
				getline(fin, temp.bus.salon.brand.marka);
				getline(fin, temp.bus.salon.brand.model);
				fin, temp.bus.salon.brand.year;
				fin, temp.bus.salon.condition;
				getline(fin, temp.bus.salon.Bodytype.bodytype);
				fin, temp.bus.salon.Bodytype.restyle;
				getline(fin, temp.bus.salon.catalogNumb);
				getline(fin, temp.bus.salon.contact.name);
				getline(fin, temp.bus.salon.contact.phoneNumb);
				getline(fin, temp.bus.salon.contact.email);
				getline(fin, temp.bus.elecronic.title);
				getline(fin, temp.bus.elecronic.brand.marka);
				getline(fin, temp.bus.elecronic.brand.model);
				fin, temp.bus.elecronic.brand.year;
				getline(fin, temp.bus.elecronic.Bodytype.bodytype);
				fin, temp.bus.elecronic.Bodytype.restyle;
				getline(fin, temp.bus.elecronic.Bodytype.bodytype);
				getline(fin, temp.bus.elecronic.catalogNumb);
				getline(fin, temp.bus.elecronic.contact.name);
				getline(fin, temp.bus.elecronic.contact.phoneNumb);
				getline(fin, temp.bus.elecronic.contact.email);
				getline(fin, temp.bus.other.title);
				getline(fin, temp.bus.other.brand.marka);
				getline(fin, temp.bus.other.brand.model);
				fin, temp.bus.other.brand.year;
				getline(fin, temp.bus.other.contact.name);
				getline(fin, temp.bus.other.contact.phoneNumb);
				getline(fin, temp.bus.other.contact.email);
				//bikes
				fin, temp.bike.id;
				getline(fin, temp.bike.brandCar.marka);
				getline(fin, temp.bike.brandCar.model);
				fin >> temp.bike.brandCar.year;
				getline(fin, temp.bike.engine.title);
				getline(fin, temp.bike.engine.brand.marka);
				getline(fin, temp.bike.engine.brand.model);
				fin >> temp.bike.engine.brand.year;
				fin >> temp.bike.engine.EnginVol;
				getline(fin, temp.bike.engine.petroltype);
				fin, temp.bike.engine.condition;
				getline(fin, temp.bike.engine.catalogNumb);
				getline(fin, temp.bike.engine.contact.name);
				getline(fin, temp.bike.engine.contact.phoneNumb);
				getline(fin, temp.bike.engine.contact.email);
				getline(fin, temp.bike.transmission.title);
				getline(fin, temp.bike.transmission.brand.marka);
				getline(fin, temp.bike.transmission.brand.model);
				fin, temp.bike.transmission.brand.year;
				fin, temp.bike.transmission.EnginVol;
				getline(fin, temp.bike.transmission.petroltype);
				fin, temp.bike.transmission.condition;
				getline(fin, temp.bike.transmission.catalogNumb);
				getline(fin, temp.bike.transmission.contact.name);
				getline(fin, temp.bike.transmission.contact.phoneNumb);
				getline(fin, temp.bike.transmission.contact.email);
				getline(fin, temp.bike.light.title);
				getline(fin, temp.bike.light.brand.marka);
				getline(fin, temp.bike.light.brand.model);
				fin, temp.bike.light.brand.year;
				getline(fin, temp.bike.light.contact.name);
				getline(fin, temp.bike.light.contact.phoneNumb);
				getline(fin, temp.bike.light.contact.email);
				getline(fin, temp.bike.suspension.title);
				getline(fin, temp.bike.suspension.brand.marka);
				getline(fin, temp.bike.suspension.brand.model);
				fin, temp.bike.suspension.brand.year;
				fin, temp.bike.suspension.condition;
				getline(fin, temp.bike.suspension.catalogNumb);
				getline(fin, temp.bike.suspension.contact.name);
				getline(fin, temp.bike.suspension.contact.phoneNumb);
				getline(fin, temp.bike.suspension.contact.email);
				getline(fin, temp.bike.wheels.title);
				fin, temp.bike.wheels.radius;
				getline(fin, temp.bike.wheels.season);
				getline(fin, temp.bike.wheels.size);
				getline(fin, temp.bike.wheels.contact.name);
				getline(fin, temp.bike.wheels.contact.phoneNumb);
				getline(fin, temp.bike.wheels.contact.email);
				getline(fin, temp.bike.elecronic.title);
				getline(fin, temp.bike.elecronic.brand.marka);
				getline(fin, temp.bike.elecronic.brand.model);
				fin, temp.bike.elecronic.brand.year;
				getline(fin, temp.bike.elecronic.Bodytype.bodytype);
				fin, temp.bike.elecronic.Bodytype.restyle;
				getline(fin, temp.bike.elecronic.Bodytype.bodytype);
				getline(fin, temp.bike.elecronic.catalogNumb);
				getline(fin, temp.bike.elecronic.contact.name);
				getline(fin, temp.bike.elecronic.contact.phoneNumb);
				getline(fin, temp.bike.elecronic.contact.email);
				getline(fin, temp.bike.other.title);
				getline(fin, temp.bike.other.brand.marka);
				getline(fin, temp.bike.other.brand.model);
				fin, temp.bike.other.brand.year;
				getline(fin, temp.bike.other.contact.name);
				getline(fin, temp.bike.other.contact.phoneNumb);
				getline(fin, temp.bike.other.contact.email);
				//contacts.push_back(temp);
			}

		}

	}

	fin.close();

}

void initUser()
{
	ifstream fin2;
	fin2.open(Users);
	bool isOpenUser = fin2.is_open();

	if (isOpenUser == false)
	{
		cout << "Error" << endl;
	}
	else {
		user temp;
		while (!fin2.eof())
		{
			getline(fin2, temp.login);
			if (temp.login != "") {
				getline(fin2, temp.login);
				getline(fin2, temp.password);
				getline(fin2, temp.contact.name);
				getline(fin2, temp.contact.phoneNumb);
				getline(fin2, temp.contact.email);
				users.push_back(temp);
			}
		}

	}
	fin2.close();
}

void showCars()
{
}

void showTrucks()
{
}

void showBus()
{
}

void showBikes()
{
}

void insert()
{
	vehicle* temp = new vehicle[countArr + 1];
	for (int i = 0; i < countArr; i++)
	{
		temp[i] = vehicleArr[i];
	}
	countArr++;
	vehicleArr = new vehicle[countArr];
	for (int i = 0; i < countArr; i++)
	{
		vehicleArr[i] = temp[i];
	}
	delete[]temp;
}

void addNew()
{
	int action = 0;
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		/*vehicle* temp = new vehicle[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = vehicleArr[i];
		}*/

		vehicle newVehicle;
		system("cls");
		cout << "Оберiть категорiю: " << endl;
		cout << "1. Легковi: " << endl;
		cout << "2. Вантажнi: " << endl;
		cout << "3. Буси: " << endl;
		cout << "4. Мотоцикли i трактори: " << endl;
		cout << "5. Вийти." << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			int actionCar = 0;
			system("cls");
			cout << "Оберiть категорiю: " << endl;
			cout << "1. Двигун і навісне: " << endl;
			cout << "2. Трансмісія: " << endl;
			cout << "3. Елементи кузова і скло: " << endl;
			cout << "4. Фари і оптика: " << endl;
			cout << "5. Підвіска: " << endl;
			cout << "6. Колеса: " << endl;
			cout << "7. Салон і комплектуючі: " << endl;
			cout << "8. Електроніка і проводка: " << endl;
			cout << "9. Інше: " << endl;
			cout << "0. Вийти: " << endl;
			cin >> actionCar;
			switch (actionCar)
			{
			case 1:
			{
				cout << "Опис" << endl;
				cin>> newVehicle.car.engine.title;
				cout << "Марка" << endl;
				cin>> newVehicle.car.engine.brand.marka;
				cout << "модель:" << endl;
				cin>> newVehicle.car.engine.brand.model;
				cout << "Рік випуску:" << endl;
				cin>> newVehicle.car.engine.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin>> newVehicle.car.engine.EnginVol;
				cout << "Тип пального:" << endl;
				cin>> newVehicle.car.engine.petroltype;
				cout << "Стан (1-5):" << endl;
				cin>> newVehicle.car.engine.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin>> newVehicle.car.engine.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin>> newVehicle.car.engine.contact.name;
				cout << "Номер телефону:" << endl;
				cin>> newVehicle.car.engine.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin>> newVehicle.car.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.car.transmission.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.car.transmission.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.car.transmission.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.car.transmission.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.car.transmission.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.car.transmission.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.car.transmission.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.car.transmission.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.transmission.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.transmission.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Опис" << endl;
				cin>> newVehicle.car.body.title;
				cout << "Марка:" << endl;
				cin>> newVehicle.car.body.brand.marka;
				cout << "модель:" << endl;
				cin>> newVehicle.car.body.brand.model;
				cout << "Рік випуску:" << endl;
				cin>> newVehicle.car.body.brand.year;
				cout << "Тип кузова:" << endl;
				cin>> newVehicle.car.body.type.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin>> newVehicle.car.body.type.restyle;
				cout << "Контактні дані (ім'я):" << endl;
				cin>> newVehicle.car.body.contact.name;
				cout << "Номер телефону:" << endl;
				cin>> newVehicle.car.body.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin>> newVehicle.car.body.contact.email;
			}break;
			case 4:
			{
				cout << "Опис" << endl;
				cin>> newVehicle.car.light.title;
				cout << "Марка:" << endl;
				cin>> newVehicle.car.light.brand.marka;
				cout << "модель:" << endl;
				cin>> newVehicle.car.light.brand.model;
				cout << "Рік випуску:" << endl;
				cin>> newVehicle.car.light.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin>> newVehicle.car.light.contact.name;
				cout << "Номер телефону:" << endl;
				cin>> newVehicle.car.light.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin>> newVehicle.car.light.contact.email;
			}break;
			case 5:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.car.suspension.title;
				cout << "Марка" << endl;
				cin >> newVehicle.car.suspension.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.car.suspension.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.car.suspension.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.car.suspension.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.car.suspension.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.suspension.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.suspension.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.car.wheels.title;
				cout << "Радіус:" << endl;
				cin >> newVehicle.car.wheels.radius;
				cout << "Сезон:" << endl;
				cin >> newVehicle.car.wheels.season;
				cout << "Розмір (параметри):" << endl;
				cin >> newVehicle.car.wheels.size;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.wheels.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.wheels.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.car.salon.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.car.salon.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.car.salon.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.car.salon.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.car.salon.condition;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.car.salon.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.car.salon.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.car.salon.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.salon.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.salon.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.car.elecronic.title;
				cout << "Марка" << endl;
				cin >> newVehicle.car.elecronic.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.car.elecronic.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.car.elecronic.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.car.elecronic.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.car.elecronic.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.car.elecronic.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.elecronic.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.elecronic.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.car.other.title;
				cout << "Марка" << endl;
				cin >> newVehicle.car.other.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.car.other.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.car.other.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.car.other.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.car.other.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.car.other.contact.email;
			}break;
			case 0:
			{
				cout << "Good bye!" << endl;
			}break;
			default:
				break;
			}
		}break;
		case 2:
		{
			int actionTruck = 0;
			system("cls");
			cout << "Оберiть категорiю: " << endl;
			cout << "1. Двигун і навісне: " << endl;
			cout << "2. Трансмісія: " << endl;
			cout << "3. Елементи кузова і скло: " << endl;
			cout << "4. Фари і оптика: " << endl;
			cout << "5. Підвіска: " << endl;
			cout << "6. Колеса: " << endl;
			cout << "7. Салон і комплектуючі: " << endl;
			cout << "8. Електроніка і проводка: " << endl;
			cout << "9. Інше: " << endl;
			cout << "0. Вийти: " << endl;
			cin >> actionTruck;
			switch (actionTruck)
			{
			case 1:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.engine.title;
				cout << "Марка" << endl;
				cin >> newVehicle.truck.engine.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.engine.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.engine.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.truck.engine.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.truck.engine.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.truck.engine.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.truck.engine.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.engine.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.engine.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.truck.transmission.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.truck.transmission.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.transmission.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.transmission.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.truck.transmission.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.truck.transmission.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.truck.transmission.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.truck.transmission.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.transmission.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.transmission.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.body.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.truck.body.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.body.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.body.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.truck.body.type.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.truck.body.type.restyle;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.body.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.body.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.body.contact.email;
			}break;
			case 4:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.light.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.truck.light.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.light.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.light.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.light.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.light.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.light.contact.email;
			}break;
			case 5:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.suspension.title;
				cout << "Марка" << endl;
				cin >> newVehicle.truck.suspension.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.suspension.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.suspension.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.truck.suspension.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.truck.suspension.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.suspension.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.suspension.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.truck.wheels.title;
				cout << "Радіус:" << endl;
				cin >> newVehicle.truck.wheels.radius;
				cout << "Сезон:" << endl;
				cin >> newVehicle.truck.wheels.season;
				cout << "Розмір (параметри):" << endl;
				cin >> newVehicle.truck.wheels.size;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.wheels.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.wheels.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.truck.salon.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.truck.salon.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.salon.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.salon.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.truck.salon.condition;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.truck.salon.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.truck.salon.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.truck.salon.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.salon.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.salon.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.elecronic.title;
				cout << "Марка" << endl;
				cin >> newVehicle.truck.elecronic.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.elecronic.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.elecronic.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.truck.elecronic.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.truck.elecronic.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.truck.elecronic.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.elecronic.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.elecronic.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.truck.other.title;
				cout << "Марка" << endl;
				cin >> newVehicle.truck.other.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.truck.other.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.truck.other.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.truck.other.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.truck.other.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.truck.other.contact.email;
			}break;
			case 0:
			{
				cout << "Good bye!" << endl;
			}break;
			default:
				break;
			}
		}break;
		case 3:
		{
			int actionBus = 0;
			system("cls");
			cout << "Оберiть категорiю: " << endl;
			cout << "1. Двигун і навісне: " << endl;
			cout << "2. Трансмісія: " << endl;
			cout << "3. Елементи кузова і скло: " << endl;
			cout << "4. Фари і оптика: " << endl;
			cout << "5. Підвіска: " << endl;
			cout << "6. Колеса: " << endl;
			cout << "7. Салон і комплектуючі: " << endl;
			cout << "8. Електроніка і проводка: " << endl;
			cout << "9. Інше: " << endl;
			cout << "0. Вийти: " << endl;
			cin >> actionBus;
			switch (actionBus)
			{
			case 1:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.engine.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bus.engine.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.engine.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.engine.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.bus.engine.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.bus.engine.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bus.engine.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bus.engine.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.engine.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.engine.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.bus.transmission.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bus.transmission.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.transmission.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.transmission.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.bus.transmission.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.bus.transmission.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bus.transmission.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bus.transmission.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.transmission.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.transmission.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.body.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bus.body.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.body.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.body.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.bus.body.type.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.bus.body.type.restyle;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.body.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.body.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.body.contact.email;
			}break;
			case 4:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.light.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bus.light.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.light.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.light.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.light.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.light.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.light.contact.email;
			}break;
			case 5:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.suspension.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bus.suspension.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.suspension.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.suspension.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bus.suspension.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bus.suspension.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.suspension.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.suspension.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.bus.wheels.title;
				cout << "Радіус:" << endl;
				cin >> newVehicle.bus.wheels.radius;
				cout << "Сезон:" << endl;
				cin >> newVehicle.bus.wheels.season;
				cout << "Розмір (параметри):" << endl;
				cin >> newVehicle.bus.wheels.size;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.wheels.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.wheels.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.bus.salon.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bus.salon.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.salon.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.salon.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bus.salon.condition;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.bus.salon.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.bus.salon.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bus.salon.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.salon.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.salon.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.elecronic.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bus.elecronic.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.elecronic.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.elecronic.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.bus.elecronic.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.bus.elecronic.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bus.elecronic.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.elecronic.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.elecronic.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bus.other.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bus.other.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bus.other.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bus.other.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bus.other.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bus.other.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bus.other.contact.email;
			}break;
			case 0:
			{
				cout << "Good bye!" << endl;
			}break;
			default:
				break;
			}
		}break;
		case 4:
		{
			int actionBike = 0;
			system("cls");
			cout << "Оберiть категорiю: " << endl;
			cout << "1. Двигун і навісне: " << endl;
			cout << "2. Трансмісія: " << endl;			
			cout << "3. Фари і оптика: " << endl;
			cout << "4. Підвіска: " << endl;
			cout << "5. Колеса: " << endl;	
			cout << "6. Електроніка і проводка: " << endl;
			cout << "7. Інше: " << endl;
			cout << "0. Вийти: " << endl;
			cin >> actionBike;
			switch (actionBike)
			{
			case 1:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bike.engine.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bike.engine.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.engine.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.engine.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.bike.engine.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.bike.engine.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bike.engine.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bike.engine.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.engine.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.engine.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.bike.transmission.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bike.transmission.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.transmission.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.transmission.brand.year;
				cout << "Об'єм двигуна:" << endl;
				cin >> newVehicle.bike.transmission.EnginVol;
				cout << "Тип пального:" << endl;
				cin >> newVehicle.bike.transmission.petroltype;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bike.transmission.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bike.transmission.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.transmission.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.transmission.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.transmission.contact.email;
			}break;

			
			case 3:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bike.light.title;
				cout << "Марка:" << endl;
				cin >> newVehicle.bike.light.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.light.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.light.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.light.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.light.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.light.contact.email;
			}break;
			case 4:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bike.suspension.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bike.suspension.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.suspension.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.suspension.brand.year;
				cout << "Стан (1-5):" << endl;
				cin >> newVehicle.bike.suspension.condition;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bike.suspension.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.suspension.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.suspension.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.suspension.contact.email;
			}break;
			case 5:
			{
				cout << "Опис:" << endl;
				cin >> newVehicle.bike.wheels.title;
				cout << "Радіус:" << endl;
				cin >> newVehicle.bike.wheels.radius;
				cout << "Сезон:" << endl;
				cin >> newVehicle.bike.wheels.season;
				cout << "Розмір (параметри):" << endl;
				cin >> newVehicle.bike.wheels.size;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.wheels.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.wheels.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.wheels.contact.email;
			}break;
			
			case 6:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bike.elecronic.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bike.elecronic.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.elecronic.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.elecronic.brand.year;
				cout << "Тип кузова:" << endl;
				cin >> newVehicle.bike.elecronic.Bodytype.bodytype;
				cout << "Рестайл (1)/ Дорестайл (0):" << endl;
				cin >> newVehicle.bike.elecronic.Bodytype.restyle;
				cout << "Каталожний номер (якщо є):" << endl;
				cin >> newVehicle.bike.elecronic.catalogNumb;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.elecronic.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.elecronic.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.elecronic.contact.email;
			}break;
			case 7:
			{
				cout << "Опис" << endl;
				cin >> newVehicle.bike.other.title;
				cout << "Марка" << endl;
				cin >> newVehicle.bike.other.brand.marka;
				cout << "модель:" << endl;
				cin >> newVehicle.bike.other.brand.model;
				cout << "Рік випуску:" << endl;
				cin >> newVehicle.bike.other.brand.year;
				cout << "Контактні дані (ім'я):" << endl;
				cin >> newVehicle.bike.other.contact.name;
				cout << "Номер телефону:" << endl;
				cin >> newVehicle.bike.other.contact.phoneNumb;
				cout << "Ел. пошта:" << endl;
				cin >> newVehicle.bike.other.contact.email;
			}break;
			case 0:
			{
				cout << "Good bye!" << endl;
			}break;
			default:
				break;
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
		insert();
	}
	else
	{
		cout << "ERROR! File not open." << endl;
	}

}

void offerNew()
{

}

void addNewUser()
{
	{
		user newUser;
		cout << "Введіть логін: ";
		//cin.ignore();
		cin>> newUser.login;
		cout << "Введіть пароль: ";
		cin >> newUser.password;
		
		cout << "Введіть ім'я нового користувача: ";
		cin.ignore();
		getline(cin, newUser.contact.name);
		cout << "Введіть контактний номер телефону:" << endl;
		cin >> newUser.contact.phoneNumb;
		cout << "Введіть email: ";
		cin >> newUser.contact.email;
		
		
		

		users.push_back(newUser);

		ofstream fout;
		fout.open(Users, fstream::app);

		bool isOpen = fout.is_open();
		if (isOpen == false) {
			cout << "Error: Application can't connect to database file!" << endl;
		}
		else {
			fout << newUser.login << endl;
			fout << newUser.password << endl;
			fout << newUser.contact.name << endl;
			fout << newUser.contact.phoneNumb << endl;
			fout << newUser.contact.email << endl;
		}
		fout.close();
		cout << "Успішно додано нового користувача." << endl;
		PAUSE
			CLEAR
	}
}

void authorization()
{
	string login;
	string password;
	int tryAgain = 0;
begin:
	cout << "Логін:" << endl;
	cin >> login;
	cout << "Пароль: " << endl;
	cin >> password;

	for (user item : users)
	{
		if (item.login == login || item.password == password)
		{
			cout << "Ви увійшли як " << login << endl;

		}
		else
			CLEAR

			cout << "Невірний логін чи пароль, або користувач з таким логіном не існує!" << endl;
		cout << "1. Спробувати знову: " << endl;
		cout << "2. Вихід." << endl;
		cin >> tryAgain;
		if (tryAgain == 1)
		{
			goto begin;
		}
		else
			break;
		return; //Не знаю як тут зробити, щоб воно геть повернуло на початок функції мейн. Тому хай поки буде так.
	}
}
