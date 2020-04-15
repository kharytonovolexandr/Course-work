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
				getline(fin, temp.car.elecronic.Bodytype.bodytype);
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
				getline(fin2, temp.email);
				getline(fin2, temp.password);

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
