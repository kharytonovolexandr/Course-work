#include "Store.h"
#include<iostream>
#include<string>
#include<fstream>
#include<list>

using namespace std;
#define CLEAR system("cls");
#define PAUSE system("pause");
const string fileName = "tempBase.txt";
const string Data = "dataBase.txt";
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
	int actionCar = 0;
	do {
		system("cls");
		cout << "Choose category: " << endl;
		cout << "1. Engine: " << endl;
		cout << "2. Transmission: " << endl;
		cout << "3. Body and windows: " << endl;
		cout << "4. Headlights: " << endl;
		cout << "5. Suspension: " << endl;
		cout << "6. Wheels: " << endl;
		cout << "7. Salon: " << endl;
		cout << "8. Electronic: " << endl;
		cout << "9. Other: " << endl;
		cout << "0. Exit: " << endl;
		cin >> actionCar;
		switch (actionCar)
		{
		case 1:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].car.engine.title<<endl;
				cout << "Brand" << vehicleArr[i].car.engine.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.engine.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.engine.brand.year << endl;
				cout << "Engine volume:" << vehicleArr[i].car.engine.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].car.engine.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].car.engine.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].car.engine.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].car.engine.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.engine.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.engine.contact.email << endl;

			}
		}break;
		case 2:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].car.transmission.title<<endl;
				cout << "Brand" << vehicleArr[i].car.transmission.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.transmission.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.transmission.brand.year << endl;
				cout << "transmission volume:" << vehicleArr[i].car.transmission.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].car.transmission.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].car.transmission.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].car.transmission.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].car.transmission.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.transmission.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.transmission.contact.email << endl;

			}
		}break;
		case 3:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].car.body.title<<endl;
				cout << "Brand" << vehicleArr[i].car.body.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.body.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.body.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].car.body.type.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].car.body.type.restyle << endl;
				cout << "Name:" << vehicleArr[i].car.body.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.body.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.body.contact.email << endl;
			}
		}break;
		case 4:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].car.light.title<<endl;
				cout << "Brand" << vehicleArr[i].car.light.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.light.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.light.brand.year << endl;
				cout << "Name:" << vehicleArr[i].car.light.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.light.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.light.contact.email << endl;
			}
		}break;
		case 5:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].car.suspension.title<<endl;
				cout << "Brand" << vehicleArr[i].car.suspension.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.suspension.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.suspension.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].car.suspension.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].car.suspension.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].car.suspension.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.suspension.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.suspension.contact.email << endl;

			}
		}break;
		case 6:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].car.wheels.title << endl;
				cout << "Radius:" << vehicleArr[i].car.wheels.radius << endl;
				cout << "Season:" << vehicleArr[i].car.wheels.season << endl;
				cout << "Size (parameters):" << vehicleArr[i].car.wheels.size << endl;
				cout << "Name:" << vehicleArr[i].car.wheels.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.wheels.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.wheels.contact.email << endl;
			}
		}break;
		case 7:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].car.salon.title << endl;
				cout << "Brand:" << vehicleArr[i].car.salon.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.salon.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.salon.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].car.salon.condition << endl;
				cout << "Body type:" << vehicleArr[i].car.salon.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].car.salon.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].car.salon.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].car.salon.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.salon.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.salon.contact.email << endl;
			}
		}break;
		case 8:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].car.elecronic.title << endl;
				cout << "Brand:" << vehicleArr[i].car.elecronic.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.elecronic.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.elecronic.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].car.elecronic.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].car.elecronic.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].car.elecronic.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].car.elecronic.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.elecronic.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.elecronic.contact.email << endl;
			}
		}break;
		case 9:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].car.other.title << endl;
				cout << "Brand:" << vehicleArr[i].car.other.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].car.other.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].car.other.brand.year << endl;
				cout << "Name:" << vehicleArr[i].car.other.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].car.other.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].car.other.contact.email << endl;
			}
		}break;
		}
	}while (actionCar != 0);
}

void showTrucks()
{
	int actionTruck = 0;
	do {
		system("cls");
		cout << "Choose category: " << endl;
		cout << "1. Engine: " << endl;
		cout << "2. Transmission: " << endl;
		cout << "3. Body and windows: " << endl;
		cout << "4. Headlights: " << endl;
		cout << "5. Suspension: " << endl;
		cout << "6. Wheels: " << endl;
		cout << "7. Salon: " << endl;
		cout << "8. Electronic: " << endl;
		cout << "9. Other: " << endl;
		cout << "0. Exit: " << endl;
		cin >> actionTruck;
		switch (actionTruck)
		{
		case 1:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].truck.engine.title<<endl;
				cout << "Brand" << vehicleArr[i].truck.engine.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.engine.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.engine.brand.year << endl;
				cout << "Engine volume:" << vehicleArr[i].truck.engine.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].truck.engine.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].truck.engine.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].truck.engine.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].truck.engine.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.engine.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.engine.contact.email << endl;

			}
		}break;
		case 2:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].truck.transmission.title<<endl;
				cout << "Brand" << vehicleArr[i].truck.transmission.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.transmission.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.transmission.brand.year << endl;
				cout << "transmission volume:" << vehicleArr[i].truck.transmission.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].truck.transmission.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].truck.transmission.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].truck.transmission.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].truck.transmission.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.transmission.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.transmission.contact.email << endl;

			}
		}break;
		case 3:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].truck.body.title<<endl;
				cout << "Brand" << vehicleArr[i].truck.body.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.body.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.body.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].truck.body.type.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].truck.body.type.restyle << endl;
				cout << "Name:" << vehicleArr[i].truck.body.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.body.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.body.contact.email << endl;
			}
		}break;
		case 4:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].truck.light.title<<endl;
				cout << "Brand" << vehicleArr[i].truck.light.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.light.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.light.brand.year << endl;
				cout << "Name:" << vehicleArr[i].truck.light.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.light.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.light.contact.email << endl;
			}
		}break;
		case 5:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].truck.suspension.title<<endl;
				cout << "Brand" << vehicleArr[i].truck.suspension.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.suspension.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.suspension.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].truck.suspension.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].truck.suspension.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].truck.suspension.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.suspension.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.suspension.contact.email << endl;

			}
		}break;
		case 6:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].truck.wheels.title << endl;
				cout << "Radius:" << vehicleArr[i].truck.wheels.radius << endl;
				cout << "Season:" << vehicleArr[i].truck.wheels.season << endl;
				cout << "Size (parameters):" << vehicleArr[i].truck.wheels.size << endl;
				cout << "Name:" << vehicleArr[i].truck.wheels.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.wheels.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.wheels.contact.email << endl;
			}
		}break;
		case 7:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].truck.salon.title << endl;
				cout << "Brand:" << vehicleArr[i].truck.salon.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.salon.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.salon.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].truck.salon.condition << endl;
				cout << "Body type:" << vehicleArr[i].truck.salon.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].truck.salon.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].truck.salon.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].truck.salon.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.salon.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.salon.contact.email << endl;
			}
		}break;
		case 8:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].truck.elecronic.title << endl;
				cout << "Brand:" << vehicleArr[i].truck.elecronic.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.elecronic.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.elecronic.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].truck.elecronic.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].truck.elecronic.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].truck.elecronic.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].truck.elecronic.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.elecronic.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.elecronic.contact.email << endl;
			}
		}break;
		case 9:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].truck.other.title << endl;
				cout << "Brand:" << vehicleArr[i].truck.other.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].truck.other.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].truck.other.brand.year << endl;
				cout << "Name:" << vehicleArr[i].truck.other.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].truck.other.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].truck.other.contact.email << endl;
			}
		}break;
		}
	} while (actionTruck != 0);
}

void showBus()
{
	int actionBus = 0;
	do {
		system("cls");
		cout << "Choose category: " << endl;
		cout << "1. Engine: " << endl;
		cout << "2. Transmission: " << endl;
		cout << "3. Body and windows: " << endl;
		cout << "4. Headlights: " << endl;
		cout << "5. Suspension: " << endl;
		cout << "6. Wheels: " << endl;
		cout << "7. Salon: " << endl;
		cout << "8. Electronic: " << endl;
		cout << "9. Other: " << endl;
		cout << "0. Exit: " << endl;
		cin >> actionBus;
		switch (actionBus)
		{
		case 1:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bus.engine.title<<endl;
				cout << "Brand" << vehicleArr[i].bus.engine.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.engine.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.engine.brand.year << endl;
				cout << "Engine volume:" << vehicleArr[i].bus.engine.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].bus.engine.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bus.engine.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bus.engine.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bus.engine.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.engine.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.engine.contact.email << endl;

			}
		}break;
		case 2:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bus.transmission.title<<endl;
				cout << "Brand" << vehicleArr[i].bus.transmission.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.transmission.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.transmission.brand.year << endl;
				cout << "transmission volume:" << vehicleArr[i].bus.transmission.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].bus.transmission.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bus.transmission.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bus.transmission.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bus.transmission.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.transmission.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.transmission.contact.email << endl;

			}
		}break;
		case 3:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bus.body.title<<endl;
				cout << "Brand" << vehicleArr[i].bus.body.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.body.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.body.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].bus.body.type.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].bus.body.type.restyle << endl;
				cout << "Name:" << vehicleArr[i].bus.body.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.body.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.body.contact.email << endl;
			}
		}break;
		case 4:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bus.light.title<<endl;
				cout << "Brand" << vehicleArr[i].bus.light.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.light.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.light.brand.year << endl;
				cout << "Name:" << vehicleArr[i].bus.light.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.light.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.light.contact.email << endl;
			}
		}break;
		case 5:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bus.suspension.title<<endl;
				cout << "Brand" << vehicleArr[i].bus.suspension.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.suspension.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.suspension.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bus.suspension.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bus.suspension.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bus.suspension.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.suspension.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.suspension.contact.email << endl;

			}
		}break;
		case 6:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bus.wheels.title << endl;
				cout << "Radius:" << vehicleArr[i].bus.wheels.radius << endl;
				cout << "Season:" << vehicleArr[i].bus.wheels.season << endl;
				cout << "Size (parameters):" << vehicleArr[i].bus.wheels.size << endl;
				cout << "Name:" << vehicleArr[i].bus.wheels.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.wheels.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.wheels.contact.email << endl;
			}
		}break;
		case 7:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bus.salon.title << endl;
				cout << "Brand:" << vehicleArr[i].bus.salon.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.salon.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.salon.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bus.salon.condition << endl;
				cout << "Body type:" << vehicleArr[i].bus.salon.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].bus.salon.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].bus.salon.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bus.salon.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.salon.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.salon.contact.email << endl;
			}
		}break;
		case 8:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bus.elecronic.title << endl;
				cout << "Brand:" << vehicleArr[i].bus.elecronic.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.elecronic.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.elecronic.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].bus.elecronic.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].bus.elecronic.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].bus.elecronic.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bus.elecronic.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.elecronic.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.elecronic.contact.email << endl;
			}
		}break;
		case 9:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bus.other.title << endl;
				cout << "Brand:" << vehicleArr[i].bus.other.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bus.other.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bus.other.brand.year << endl;
				cout << "Name:" << vehicleArr[i].bus.other.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bus.other.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bus.other.contact.email << endl;
			}
		}break;
		}
	} while (actionBus != 0);
}

void showBikes()
{
	int actionBike = 0;
	do {
		system("cls");
		cout << "Choose category: " << endl;
		cout << "1. Engine: " << endl;
		cout << "2. Transmission: " << endl;
		cout << "3. Headlights: " << endl;
		cout << "4. Suspension: " << endl;
		cout << "5. Wheels: " << endl;
		cout << "6. Electronic: " << endl;
		cout << "7. Other: " << endl;
		cout << "0. Exit: " << endl;
		cin >> actionBike;
		switch (actionBike)
		{
		case 1:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bike.engine.title<<endl;
				cout << "Brand" << vehicleArr[i].bike.engine.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.engine.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.engine.brand.year << endl;
				cout << "Engine volume:" << vehicleArr[i].bike.engine.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].bike.engine.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bike.engine.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bike.engine.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bike.engine.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.engine.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.engine.contact.email << endl;

			}
		}break;
		case 2:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bike.transmission.title<<endl;
				cout << "Brand" << vehicleArr[i].bike.transmission.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.transmission.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.transmission.brand.year << endl;
				cout << "transmission volume:" << vehicleArr[i].bike.transmission.EnginVol << endl;
				cout << "Petrol type:" << vehicleArr[i].bike.transmission.petroltype << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bike.transmission.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bike.transmission.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bike.transmission.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.transmission.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.transmission.contact.email << endl;

			}
		}break;
		
		case 3:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bike.light.title<<endl;
				cout << "Brand" << vehicleArr[i].bike.light.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.light.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.light.brand.year << endl;
				cout << "Name:" << vehicleArr[i].bike.light.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.light.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.light.contact.email << endl;
			}
		}break;
		case 4:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title: " << vehicleArr[i].bike.suspension.title<<endl;
				cout << "Brand" << vehicleArr[i].bike.suspension.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.suspension.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.suspension.brand.year << endl;
				cout << "Condition (1-5):" << vehicleArr[i].bike.suspension.condition << endl;
				cout << "Catalogue number:" << vehicleArr[i].bike.suspension.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bike.suspension.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.suspension.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.suspension.contact.email << endl;

			}
		}break;
		case 5:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bike.wheels.title << endl;
				cout << "Radius:" << vehicleArr[i].bike.wheels.radius << endl;
				cout << "Season:" << vehicleArr[i].bike.wheels.season << endl;
				cout << "Size (parameters):" << vehicleArr[i].bike.wheels.size << endl;
				cout << "Name:" << vehicleArr[i].bike.wheels.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.wheels.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.wheels.contact.email << endl;
			}
		}break;
		
		case 6:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bike.elecronic.title << endl;
				cout << "Brand:" << vehicleArr[i].bike.elecronic.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.elecronic.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.elecronic.brand.year << endl;
				cout << "Body type:" << vehicleArr[i].bike.elecronic.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0):" << vehicleArr[i].bike.elecronic.Bodytype.restyle << endl;
				cout << "Catalogue number:" << vehicleArr[i].bike.elecronic.catalogNumb << endl;
				cout << "Name:" << vehicleArr[i].bike.elecronic.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.elecronic.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.elecronic.contact.email << endl;
			}
		}break;
		case 7:
		{
			for (int i = 0; i < countArr; i++)
			{
				cout << "Title:" << vehicleArr[i].bike.other.title << endl;
				cout << "Brand:" << vehicleArr[i].bike.other.brand.marka << endl;
				cout << "Model:" << vehicleArr[i].bike.other.brand.model << endl;
				cout << "Production year:" << vehicleArr[i].bike.other.brand.year << endl;
				cout << "Name:" << vehicleArr[i].bike.other.contact.name << endl;
				cout << "Phone number:" << vehicleArr[i].bike.other.contact.phoneNumb << endl;
				cout << "Email:" << vehicleArr[i].bike.other.contact.email << endl;
			}
		}break;
		}
	} while (actionBike != 0);
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

void offerNew()
{
	int action = 0;
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		vehicle* temp = new vehicle[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = vehicleArr[i];
		}
		 
		vehicle newVehicle;
		system("cls");
		cout << "Choose category: " << endl;
		cout << "1. Cars: " << endl;
		cout << "2. Trucks: " << endl;
		cout << "3. Buses/miniven: " << endl;
		cout << "4. Bikes and tractors: " << endl;
		cout << "5. Exit." << endl;
		cin >> action;
		switch (action)
		{
		case 1:
		{
			int actionCar = 0;
			system("cls");
			cout << "Choose category: " << endl;
			cout << "1. Engine: " << endl;
			cout << "2. Transmission: " << endl;
			cout << "3. Body and windows: " << endl;
			cout << "4. Headlights: " << endl;
			cout << "5. Suspension: " << endl;
			cout << "6. Wheels: " << endl;
			cout << "7. Salon: " << endl;
			cout << "8. Electronic: " << endl;
			cout << "9. iнше: " << endl;
			cout << "0. Other: " << endl;
			cin >> actionCar;
			switch (actionCar)
			{
			case 1:
			{
				cout << "Title" << endl;
				cin>> newVehicle.car.engine.title;
				cout << "Brand" << endl;
				cin>> newVehicle.car.engine.brand.marka;
				cout << "Model:" << endl;
				cin>> newVehicle.car.engine.brand.model;
				cout << "Production year:" << endl;
				cin>> newVehicle.car.engine.brand.year;
				cout << "Engine volume:" << endl;
				cin>> newVehicle.car.engine.EnginVol;
				cout << "Petrol type:" << endl;
				cin>> newVehicle.car.engine.petroltype;
				cout << "Condition (1-5):" << endl;
				cin>> newVehicle.car.engine.condition;
				cout << "Catalogue number:" << endl;
				cin>> newVehicle.car.engine.catalogNumb;
				cout << "Name:" << endl;
				cin>> newVehicle.car.engine.contact.name;
				cout << "Phone number:" << endl;
				cin>> newVehicle.car.engine.contact.phoneNumb;
				cout << "Email:" << endl;
				cin>> newVehicle.car.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.car.transmission.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.car.transmission.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.car.transmission.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.car.transmission.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.car.transmission.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.car.transmission.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.car.transmission.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.car.transmission.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.car.transmission.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.transmission.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.car.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Title" << endl;
				cin>> newVehicle.car.body.title;
				cout << "Brand:" << endl;
				cin>> newVehicle.car.body.brand.marka;
				cout << "Model:" << endl;
				cin>> newVehicle.car.body.brand.model;
				cout << "Production year:" << endl;
				cin>> newVehicle.car.body.brand.year;
				cout << "Body type:" << endl;
				cin>> newVehicle.car.body.type.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin>> newVehicle.car.body.type.restyle;
				cout << "Name:" << endl;
				cin>> newVehicle.car.body.contact.name;
				cout << "Phone number:" << endl;
				cin>> newVehicle.car.body.contact.phoneNumb;
				cout << "Email:" << endl;
				cin>> newVehicle.car.body.contact.email;
			}break;
			case 4:
			{
				cout << "Title" << endl;
				cin>> newVehicle.car.light.title;
				cout << "Brand:" << endl;
				cin>> newVehicle.car.light.brand.marka;
				cout << "Model:" << endl;
				cin>> newVehicle.car.light.brand.model;
				cout << "Production year:" << endl;
				cin>> newVehicle.car.light.brand.year;
				cout << "Name:" << endl;
				cin>> newVehicle.car.light.contact.name;
				cout << "Phone number:" << endl;
				cin>> newVehicle.car.light.contact.phoneNumb;
				cout << "Email:" << endl;
				cin>> newVehicle.car.light.contact.email;
			}break;
			case 5:
			{
				cout << "Title" << endl;
				cin >> newVehicle.car.suspension.title;
				cout << "Brand" << endl;
				cin >> newVehicle.car.suspension.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.car.suspension.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.car.suspension.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.car.suspension.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.car.suspension.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.car.suspension.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.suspension.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.car.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.car.wheels.title;
				cout << "Radius:" << endl;
				cin >> newVehicle.car.wheels.radius;
				cout << "Season:" << endl;
				cin >> newVehicle.car.wheels.season;
				cout << "Size (parameters):" << endl;
				cin >> newVehicle.car.wheels.size;
				cout << "Name:" << endl;
				cin >> newVehicle.car.wheels.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.wheels.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.car.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.car.salon.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.car.salon.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.car.salon.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.car.salon.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.car.salon.condition;
				cout << "Body type:" << endl;
				cin >> newVehicle.car.salon.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.car.salon.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.car.salon.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.car.salon.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.salon.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.car.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Title" << endl;
				cin >> newVehicle.car.elecronic.title;
				cout << "Brand" << endl;
				cin >> newVehicle.car.elecronic.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.car.elecronic.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.car.elecronic.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.car.elecronic.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.car.elecronic.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.car.elecronic.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.car.elecronic.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.elecronic.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.car.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Title" << endl;
				cin >> newVehicle.car.other.title;
				cout << "Brand" << endl;
				cin >> newVehicle.car.other.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.car.other.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.car.other.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.car.other.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.car.other.contact.phoneNumb;
				cout << "Email:" << endl;
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
			cout << "Choose category: " << endl;
			cout << "1. Engine: " << endl;
			cout << "2. Transmission: " << endl;
			cout << "3. Body and windows: " << endl;
			cout << "4. Headlights: " << endl;
			cout << "5. Suspension: " << endl;
			cout << "6. Wheels: " << endl;
			cout << "7. Salon: " << endl;
			cout << "8. Electronic: " << endl;
			cout << "9. iнше: " << endl;
			cout << "0. Other: " << endl;
			cin >> actionTruck;
			switch (actionTruck)
			{
			case 1:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.engine.title;
				cout << "Brand" << endl;
				cin >> newVehicle.truck.engine.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.engine.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.engine.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.truck.engine.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.truck.engine.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.truck.engine.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.truck.engine.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.engine.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.engine.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.truck.transmission.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.truck.transmission.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.transmission.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.transmission.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.truck.transmission.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.truck.transmission.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.truck.transmission.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.truck.transmission.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.transmission.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.transmission.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.body.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.truck.body.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.body.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.body.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.truck.body.type.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.truck.body.type.restyle;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.body.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.body.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.body.contact.email;
			}break;
			case 4:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.light.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.truck.light.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.light.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.light.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.light.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.light.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.light.contact.email;
			}break;
			case 5:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.suspension.title;
				cout << "Brand" << endl;
				cin >> newVehicle.truck.suspension.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.suspension.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.suspension.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.truck.suspension.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.truck.suspension.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.suspension.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.suspension.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.truck.wheels.title;
				cout << "Radius:" << endl;
				cin >> newVehicle.truck.wheels.radius;
				cout << "Season:" << endl;
				cin >> newVehicle.truck.wheels.season;
				cout << "Size (parameters):" << endl;
				cin >> newVehicle.truck.wheels.size;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.wheels.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.wheels.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.truck.salon.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.truck.salon.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.salon.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.salon.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.truck.salon.condition;
				cout << "Body type:" << endl;
				cin >> newVehicle.truck.salon.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.truck.salon.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.truck.salon.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.salon.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.salon.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.elecronic.title;
				cout << "Brand" << endl;
				cin >> newVehicle.truck.elecronic.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.elecronic.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.elecronic.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.truck.elecronic.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.truck.elecronic.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.truck.elecronic.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.elecronic.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.elecronic.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.truck.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Title" << endl;
				cin >> newVehicle.truck.other.title;
				cout << "Brand" << endl;
				cin >> newVehicle.truck.other.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.truck.other.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.truck.other.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.truck.other.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.truck.other.contact.phoneNumb;
				cout << "Email:" << endl;
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
			cout << "Choose category: " << endl;
			cout << "1. Engine: " << endl;
			cout << "2. Transmission: " << endl;
			cout << "3. Body and windows: " << endl;
			cout << "4. Headlights: " << endl;
			cout << "5. Suspension: " << endl;
			cout << "6. Wheels: " << endl;
			cout << "7. Salon: " << endl;
			cout << "8. Electronic: " << endl;
			cout << "9. iнше: " << endl;
			cout << "0. Other: " << endl;
			cin >> actionBus;
			switch (actionBus)
			{
			case 1:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.engine.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bus.engine.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.engine.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.engine.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.bus.engine.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.bus.engine.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bus.engine.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bus.engine.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.engine.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.engine.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.bus.transmission.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bus.transmission.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.transmission.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.transmission.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.bus.transmission.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.bus.transmission.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bus.transmission.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bus.transmission.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.transmission.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.transmission.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.transmission.contact.email;
			}break;

			case 3:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.body.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bus.body.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.body.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.body.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.bus.body.type.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.bus.body.type.restyle;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.body.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.body.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.body.contact.email;
			}break;
			case 4:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.light.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bus.light.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.light.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.light.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.light.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.light.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.light.contact.email;
			}break;
			case 5:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.suspension.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bus.suspension.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.suspension.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.suspension.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bus.suspension.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bus.suspension.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.suspension.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.suspension.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.suspension.contact.email;
			}break;
			case 6:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.bus.wheels.title;
				cout << "Radius:" << endl;
				cin >> newVehicle.bus.wheels.radius;
				cout << "Season:" << endl;
				cin >> newVehicle.bus.wheels.season;
				cout << "Size (parameters):" << endl;
				cin >> newVehicle.bus.wheels.size;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.wheels.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.wheels.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.wheels.contact.email;
			}break;
			case 7:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.bus.salon.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bus.salon.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.salon.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.salon.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bus.salon.condition;
				cout << "Body type:" << endl;
				cin >> newVehicle.bus.salon.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.bus.salon.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bus.salon.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.salon.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.salon.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.salon.contact.email;
			}break;
			case 8:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.elecronic.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bus.elecronic.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.elecronic.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.elecronic.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.bus.elecronic.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.bus.elecronic.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bus.elecronic.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.elecronic.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.elecronic.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bus.elecronic.contact.email;
			}break;
			case 9:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bus.other.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bus.other.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bus.other.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bus.other.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.bus.other.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bus.other.contact.phoneNumb;
				cout << "Email:" << endl;
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
			cout << "Choose category: " << endl;
			cout << "1. Engine: " << endl;
			cout << "2. Transmission: " << endl;
			cout << "3. Headlights: " << endl;
			cout << "4. Suspension: " << endl;
			cout << "5. Wheels: " << endl;
			cout << "6. Electronic: " << endl;
			cout << "7. iнше: " << endl;
			cout << "0. Other: " << endl;
			cin >> actionBike;
			switch (actionBike)
			{
			case 1:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bike.engine.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bike.engine.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.engine.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.engine.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.bike.engine.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.bike.engine.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bike.engine.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bike.engine.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.engine.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.engine.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.engine.contact.email;
			}break;

			case 2:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.bike.transmission.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bike.transmission.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.transmission.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.transmission.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newVehicle.bike.transmission.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newVehicle.bike.transmission.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bike.transmission.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bike.transmission.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.transmission.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.transmission.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.transmission.contact.email;
			}break;

			
			case 3:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bike.light.title;
				cout << "Brand:" << endl;
				cin >> newVehicle.bike.light.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.light.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.light.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.light.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.light.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.light.contact.email;
			}break;
			case 4:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bike.suspension.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bike.suspension.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.suspension.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.suspension.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newVehicle.bike.suspension.condition;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bike.suspension.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.suspension.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.suspension.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.suspension.contact.email;
			}break;
			case 5:
			{
				cout << "Title:" << endl;
				cin >> newVehicle.bike.wheels.title;
				cout << "Radius:" << endl;
				cin >> newVehicle.bike.wheels.radius;
				cout << "Season:" << endl;
				cin >> newVehicle.bike.wheels.season;
				cout << "Size (parameters):" << endl;
				cin >> newVehicle.bike.wheels.size;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.wheels.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.wheels.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.wheels.contact.email;
			}break;
			
			case 6:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bike.elecronic.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bike.elecronic.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.elecronic.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.elecronic.brand.year;
				cout << "Body type:" << endl;
				cin >> newVehicle.bike.elecronic.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newVehicle.bike.elecronic.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newVehicle.bike.elecronic.catalogNumb;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.elecronic.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.elecronic.contact.phoneNumb;
				cout << "Email:" << endl;
				cin >> newVehicle.bike.elecronic.contact.email;
			}break;
			case 7:
			{
				cout << "Title" << endl;
				cin >> newVehicle.bike.other.title;
				cout << "Brand" << endl;
				cin >> newVehicle.bike.other.brand.marka;
				cout << "Model:" << endl;
				cin >> newVehicle.bike.other.brand.model;
				cout << "Production year:" << endl;
				cin >> newVehicle.bike.other.brand.year;
				cout << "Name:" << endl;
				cin >> newVehicle.bike.other.contact.name;
				cout << "Phone number:" << endl;
				cin >> newVehicle.bike.other.contact.phoneNumb;
				cout << "Email:" << endl;
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

void addNew()
{

}

void addNewUser()
{
	{
		user newUser;
		cout << "Enter login: ";
		//cin.ignore();
		cin>> newUser.login;
		cout << "Enter password: ";
		cin >> newUser.password;
		
		cout << "Enter new user's name: ";
		cin.ignore();
		getline(cin, newUser.contact.name);
		cout << "Enter phone number:" << endl;
		cin >> newUser.contact.phoneNumb;
		cout << "Enter email: ";
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
		cout << "New user added successful." << endl;
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
	cout << "Login:" << endl;
	cin >> login;
	cout << "Password: " << endl;
	cin >> password;

	for (user item : users)
	{
		if (item.login == login || item.password == password)
		{
			cout << "You entered as: " << login << endl;

		}
		else 
		{
			CLEAR

			cout << "Wrong login or password or such user doesn't exist!" << endl;
			cout << "Press 1 to try again: " << endl;
		}
		cin >> tryAgain;
		if (tryAgain == 1)
		{
			goto begin;
		}
		else
			break;
		return; //Не знаю як тут зробити, щоб воно геть повернуло на початок функцiї мейн. Тому хай поки буде так.
	}
}

void searchCar()
{
	string text;
	cout << "Enter text for search: " << endl;
	cin >> text;
	for (int i = 0; i < countArr; i++)
	{
		if (vehicleArr[i].car.engine.title.find(text) != string::npos)
		{
			cout << "Title: " << vehicleArr[i].car.engine.title<<endl;
			cout << "Brand: " << vehicleArr[i].car.engine.brand.marka << endl;
			cout << "Model: " << vehicleArr[i].car.engine.brand.model << endl;
			cout << "Production year: " << vehicleArr[i].car.engine.brand.year << endl;
			cout << "Engine volume: " << vehicleArr[i].car.engine.EnginVol << endl;
			cout << "Petrol type: " << vehicleArr[i].car.engine.petroltype << endl;
			cout << "Condition (1-5): " << vehicleArr[i].car.engine.condition << endl;
			cout << "Catalogue number: " << vehicleArr[i].car.engine.catalogNumb << endl;
			cout << "Name: " << vehicleArr[i].car.engine.contact.name << endl;
			cout << "Phone number: " << vehicleArr[i].car.engine.contact.phoneNumb << endl;
			cout << "Email: " << vehicleArr[i].car.engine.contact.email << endl;
		}
	}
}
