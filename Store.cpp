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
string login;
string password;
int countArr = 0;
something* someArr;
cars* carArr;
truck* truckArr;
bus* busArr;
bikes* bikeArr;
list<user> users;
void initSomething()
{
	ifstream fin;

	fin.open(Data);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) 
	{

		something temp;
		while (!fin.eof())
		{

			fin >> temp.id;
			getline(fin, temp.some);
		
		something* tempArr = new something[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			tempArr[i] = someArr[i];
		}
		countArr++;
		someArr = new something[countArr];
		for (int i = 0; i < countArr; i++)
		{
			someArr[i] = tempArr[i];
		}
		delete[]tempArr;
		}
	}
	
	
	fin.close();
}
void initCars()
{
	ifstream fin;
	
	fin.open(fileName);
	
	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if(isOPen==true) {

		cars temp;
		while (!fin.eof())
		{
			
			fin >> temp.id;
			//if (temp.id != NULL)
			//{
				//(fin.ignore());
			
			getline(fin, temp.engine.title);
			getline(fin, temp.engine.brand.marka);
			getline(fin, temp.engine.brand.model);
			fin >> temp.engine.brand.year;
			fin >> temp.engine.EnginVol;
			getline(fin, temp.engine.petroltype);
			fin, temp.engine.condition;
			getline(fin, temp.engine.catalogNumb);
			getline(fin, temp.engine.contact.name);
			getline(fin, temp.engine.contact.phoneNumb);
			getline(fin, temp.engine.contact.email);
			getline(fin, temp.transmission.title);
			getline(fin, temp.transmission.brand.marka);
			getline(fin, temp.transmission.brand.model);
			fin, temp.transmission.brand.year;
			fin, temp.transmission.EnginVol;
			getline(fin, temp.transmission.petroltype);
			fin, temp.transmission.condition;
			getline(fin, temp.transmission.catalogNumb);
			getline(fin, temp.transmission.contact.name);
			getline(fin, temp.transmission.contact.phoneNumb);
			getline(fin, temp.transmission.contact.email);
			getline(fin, temp.body.title);
			getline(fin, temp.body.brand.marka);
			getline(fin, temp.body.brand.model);
			fin, temp.body.brand.year;
			getline(fin, temp.body.type.bodytype);
			fin, temp.body.type.restyle;
			getline(fin, temp.body.contact.name);
			getline(fin, temp.body.contact.phoneNumb);
			getline(fin, temp.body.contact.email);
			getline(fin, temp.light.title);
			getline(fin, temp.light.brand.marka);
			getline(fin, temp.light.brand.model);
			fin, temp.light.brand.year;
			getline(fin, temp.light.contact.name);
			getline(fin, temp.light.contact.phoneNumb);
			getline(fin, temp.light.contact.email);
			getline(fin, temp.suspension.title);
			getline(fin, temp.suspension.brand.marka);
			getline(fin, temp.suspension.brand.model);
			fin, temp.suspension.brand.year;
			fin, temp.suspension.condition;
			getline(fin, temp.suspension.catalogNumb);
			getline(fin, temp.suspension.contact.name);
			getline(fin, temp.suspension.contact.phoneNumb);
			getline(fin, temp.suspension.contact.email);
			getline(fin, temp.wheels.title);
			fin, temp.wheels.radius;
			getline(fin, temp.wheels.season);
			getline(fin, temp.wheels.size);
			getline(fin, temp.wheels.contact.name);
			getline(fin, temp.wheels.contact.phoneNumb);
			getline(fin, temp.wheels.contact.email);
			getline(fin, temp.salon.title);
			getline(fin, temp.salon.brand.marka);
			getline(fin, temp.salon.brand.model);
			fin, temp.salon.brand.year;
			fin, temp.salon.condition;
			getline(fin, temp.salon.Bodytype.bodytype);
			fin, temp.salon.Bodytype.restyle;
			getline(fin, temp.salon.catalogNumb);
			getline(fin, temp.salon.contact.name);
			getline(fin, temp.salon.contact.phoneNumb);
			getline(fin, temp.salon.contact.email);
			getline(fin, temp.elecronic.title);
			getline(fin, temp.elecronic.brand.marka);
			getline(fin, temp.elecronic.brand.model);
			fin, temp.elecronic.brand.year;
			getline(fin, temp.elecronic.Bodytype.bodytype);
			fin, temp.elecronic.Bodytype.restyle;
			getline(fin, temp.elecronic.catalogNumb);
			getline(fin, temp.elecronic.contact.name);
			getline(fin, temp.elecronic.contact.phoneNumb);
			getline(fin, temp.elecronic.contact.email);
			getline(fin, temp.other.title);
			getline(fin, temp.other.brand.marka);
			getline(fin, temp.other.brand.model);
			fin, temp.other.brand.year;
			getline(fin, temp.other.contact.name);
			getline(fin, temp.other.contact.phoneNumb);
			getline(fin, temp.other.contact.email);
				//insertCar(temp);
			cars* temp = new cars[countArr + 1];
			for (int i = 0; i < countArr; i++)
			{
				temp[i] = carArr[i];
			}
			countArr++;
			carArr = new cars[countArr];
			for (int i = 0; i < countArr; i++)
			{
				carArr[i] = temp[i];
			}
			delete[]temp;
			//}
			//else { break;}
			
		}
	}
	fin.close();
}

////trucks
				//fin, temp.id;
				//getline(fin, temp.truck.engine.title);
				//getline(fin, temp.truck.engine.brand.marka);
				//getline(fin, temp.truck.engine.brand.model);
				//fin >> temp.truck.engine.brand.year;
				//fin >> temp.truck.engine.EnginVol;
				//getline(fin, temp.truck.engine.petroltype);
				//fin, temp.truck.engine.condition;
				//getline(fin, temp.truck.engine.catalogNumb);
				//getline(fin, temp.truck.engine.contact.name);
				//getline(fin, temp.truck.engine.contact.phoneNumb);
				//getline(fin, temp.truck.engine.contact.email);
				//getline(fin, temp.truck.transmission.title);
				//getline(fin, temp.truck.transmission.brand.marka);
				//getline(fin, temp.truck.transmission.brand.model);
				//fin, temp.truck.transmission.brand.year;
				//fin, temp.truck.transmission.EnginVol;
				//getline(fin, temp.truck.transmission.petroltype);
				//fin, temp.truck.transmission.condition;
				//getline(fin, temp.truck.transmission.catalogNumb);
				//getline(fin, temp.truck.transmission.contact.name);
				//getline(fin, temp.truck.transmission.contact.phoneNumb);
				//getline(fin, temp.truck.transmission.contact.email);
				//getline(fin, temp.truck.body.title);
				//getline(fin, temp.truck.body.brand.marka);
				//getline(fin, temp.truck.body.brand.model);
				//fin, temp.truck.body.brand.year;
				//getline(fin, temp.truck.body.type.bodytype);
				//fin, temp.truck.body.type.restyle;
				//getline(fin, temp.truck.body.contact.name);
				//getline(fin, temp.truck.body.contact.phoneNumb);
				//getline(fin, temp.truck.body.contact.email);
				//getline(fin, temp.truck.light.title);
				//getline(fin, temp.truck.light.brand.marka);
				//getline(fin, temp.truck.light.brand.model);
				//fin, temp.truck.light.brand.year;
				//getline(fin, temp.truck.light.contact.name);
				//getline(fin, temp.truck.light.contact.phoneNumb);
				//getline(fin, temp.truck.light.contact.email);
				//getline(fin, temp.truck.suspension.title);
				//getline(fin, temp.truck.suspension.brand.marka);
				//getline(fin, temp.truck.suspension.brand.model);
				//fin, temp.truck.suspension.brand.year;
				//fin, temp.truck.suspension.condition;
				//getline(fin, temp.truck.suspension.catalogNumb);
				//getline(fin, temp.truck.suspension.contact.name);
				//getline(fin, temp.truck.suspension.contact.phoneNumb);
				//getline(fin, temp.truck.suspension.contact.email);
				//getline(fin, temp.truck.wheels.title);
				//fin, temp.truck.wheels.radius;
				//getline(fin, temp.truck.wheels.season);
				//getline(fin, temp.truck.wheels.size);
				//getline(fin, temp.truck.wheels.contact.name);
				//getline(fin, temp.truck.wheels.contact.phoneNumb);
				//getline(fin, temp.truck.wheels.contact.email);
				//getline(fin, temp.truck.salon.title);
				//getline(fin, temp.truck.salon.brand.marka);
				//getline(fin, temp.truck.salon.brand.model);
				//fin, temp.truck.salon.brand.year;
				//fin, temp.truck.salon.condition;
				//getline(fin, temp.truck.salon.Bodytype.bodytype);
				//fin, temp.truck.salon.Bodytype.restyle;
				//getline(fin, temp.truck.salon.catalogNumb);
				//getline(fin, temp.truck.salon.contact.name);
				//getline(fin, temp.truck.salon.contact.phoneNumb);
				//getline(fin, temp.truck.salon.contact.email);
				//getline(fin, temp.truck.elecronic.title);
				//getline(fin, temp.truck.elecronic.brand.marka);
				//getline(fin, temp.truck.elecronic.brand.model);
				//fin, temp.truck.elecronic.brand.year;
				//getline(fin, temp.truck.elecronic.Bodytype.bodytype);
				//fin, temp.truck.elecronic.Bodytype.restyle;
				//getline(fin, temp.truck.elecronic.Bodytype.bodytype);
				//getline(fin, temp.truck.elecronic.catalogNumb);
				//getline(fin, temp.truck.elecronic.contact.name);
				//getline(fin, temp.truck.elecronic.contact.phoneNumb);
				//getline(fin, temp.truck.elecronic.contact.email);
				//getline(fin, temp.truck.other.title);
				//getline(fin, temp.truck.other.brand.marka);
				//getline(fin, temp.truck.other.brand.model);
				//fin, temp.truck.other.brand.year;
				//getline(fin, temp.truck.other.contact.name);
				//getline(fin, temp.truck.other.contact.phoneNumb);
				//getline(fin, temp.truck.other.contact.email);

				////bus
				//fin, temp.id;
				//getline(fin, temp.bus.engine.title);
				//getline(fin, temp.bus.engine.brand.marka);
				//getline(fin, temp.bus.engine.brand.model);
				//fin >> temp.bus.engine.brand.year;
				//fin >> temp.bus.engine.EnginVol;
				//getline(fin, temp.bus.engine.petroltype);
				//fin, temp.bus.engine.condition;
				//getline(fin, temp.bus.engine.catalogNumb);
				//getline(fin, temp.bus.engine.contact.name);
				//getline(fin, temp.bus.engine.contact.phoneNumb);
				//getline(fin, temp.bus.engine.contact.email);
				//getline(fin, temp.bus.transmission.title);
				//getline(fin, temp.bus.transmission.brand.marka);
				//getline(fin, temp.bus.transmission.brand.model);
				//fin, temp.bus.transmission.brand.year;
				//fin, temp.bus.transmission.EnginVol;
				//getline(fin, temp.bus.transmission.petroltype);
				//fin, temp.bus.transmission.condition;
				//getline(fin, temp.bus.transmission.catalogNumb);
				//getline(fin, temp.bus.transmission.contact.name);
				//getline(fin, temp.bus.transmission.contact.phoneNumb);
				//getline(fin, temp.bus.transmission.contact.email);
				//getline(fin, temp.bus.body.title);
				//getline(fin, temp.bus.body.brand.marka);
				//getline(fin, temp.bus.body.brand.model);
				//fin, temp.bus.body.brand.year;
				//getline(fin, temp.bus.body.type.bodytype);
				//fin, temp.bus.body.type.restyle;
				//getline(fin, temp.bus.body.contact.name);
				//getline(fin, temp.bus.body.contact.phoneNumb);
				//getline(fin, temp.bus.body.contact.email);
				//getline(fin, temp.bus.light.title);
				//getline(fin, temp.bus.light.brand.marka);
				//getline(fin, temp.bus.light.brand.model);
				//fin, temp.bus.light.brand.year;
				//getline(fin, temp.bus.light.contact.name);
				//getline(fin, temp.bus.light.contact.phoneNumb);
				//getline(fin, temp.bus.light.contact.email);
				//getline(fin, temp.bus.suspension.title);
				//getline(fin, temp.bus.suspension.brand.marka);
				//getline(fin, temp.bus.suspension.brand.model);
				//fin, temp.bus.suspension.brand.year;
				//fin, temp.bus.suspension.condition;
				//getline(fin, temp.bus.suspension.catalogNumb);
				//getline(fin, temp.bus.suspension.contact.name);
				//getline(fin, temp.bus.suspension.contact.phoneNumb);
				//getline(fin, temp.bus.suspension.contact.email);
				//getline(fin, temp.bus.wheels.title);
				//fin, temp.bus.wheels.radius;
				//getline(fin, temp.bus.wheels.season);
				//getline(fin, temp.bus.wheels.size);
				//getline(fin, temp.bus.wheels.contact.name);
				//getline(fin, temp.bus.wheels.contact.phoneNumb);
				//getline(fin, temp.bus.wheels.contact.email);
				//getline(fin, temp.bus.salon.title);
				//getline(fin, temp.bus.salon.brand.marka);
				//getline(fin, temp.bus.salon.brand.model);
				//fin, temp.bus.salon.brand.year;
				//fin, temp.bus.salon.condition;
				//getline(fin, temp.bus.salon.Bodytype.bodytype);
				//fin, temp.bus.salon.Bodytype.restyle;
				//getline(fin, temp.bus.salon.catalogNumb);
				//getline(fin, temp.bus.salon.contact.name);
				//getline(fin, temp.bus.salon.contact.phoneNumb);
				//getline(fin, temp.bus.salon.contact.email);
				//getline(fin, temp.bus.elecronic.title);
				//getline(fin, temp.bus.elecronic.brand.marka);
				//getline(fin, temp.bus.elecronic.brand.model);
				//fin, temp.bus.elecronic.brand.year;
				//getline(fin, temp.bus.elecronic.Bodytype.bodytype);
				//fin, temp.bus.elecronic.Bodytype.restyle;
				//getline(fin, temp.bus.elecronic.Bodytype.bodytype);
				//getline(fin, temp.bus.elecronic.catalogNumb);
				//getline(fin, temp.bus.elecronic.contact.name);
				//getline(fin, temp.bus.elecronic.contact.phoneNumb);
				//getline(fin, temp.bus.elecronic.contact.email);
				//getline(fin, temp.bus.other.title);
				//getline(fin, temp.bus.other.brand.marka);
				//getline(fin, temp.bus.other.brand.model);
				//fin, temp.bus.other.brand.year;
				//getline(fin, temp.bus.other.contact.name);
				//getline(fin, temp.bus.other.contact.phoneNumb);
				//getline(fin, temp.bus.other.contact.email);
				////bikes
				//fin, temp.id;
				//getline(fin, temp.bike.engine.title);
				//getline(fin, temp.bike.engine.brand.marka);
				//getline(fin, temp.bike.engine.brand.model);
				//fin >> temp.bike.engine.brand.year;
				//fin >> temp.bike.engine.EnginVol;
				//getline(fin, temp.bike.engine.petroltype);
				//fin, temp.bike.engine.condition;
				//getline(fin, temp.bike.engine.catalogNumb);
				//getline(fin, temp.bike.engine.contact.name);
				//getline(fin, temp.bike.engine.contact.phoneNumb);
				//getline(fin, temp.bike.engine.contact.email);
				//getline(fin, temp.bike.transmission.title);
				//getline(fin, temp.bike.transmission.brand.marka);
				//getline(fin, temp.bike.transmission.brand.model);
				//fin, temp.bike.transmission.brand.year;
				//fin, temp.bike.transmission.EnginVol;
				//getline(fin, temp.bike.transmission.petroltype);
				//fin, temp.bike.transmission.condition;
				//getline(fin, temp.bike.transmission.catalogNumb);
				//getline(fin, temp.bike.transmission.contact.name);
				//getline(fin, temp.bike.transmission.contact.phoneNumb);
				//getline(fin, temp.bike.transmission.contact.email);
				//getline(fin, temp.bike.light.title);
				//getline(fin, temp.bike.light.brand.marka);
				//getline(fin, temp.bike.light.brand.model);
				//fin, temp.bike.light.brand.year;
				//getline(fin, temp.bike.light.contact.name);
				//getline(fin, temp.bike.light.contact.phoneNumb);
				//getline(fin, temp.bike.light.contact.email);
				//getline(fin, temp.bike.suspension.title);
				//getline(fin, temp.bike.suspension.brand.marka);
				//getline(fin, temp.bike.suspension.brand.model);
				//fin, temp.bike.suspension.brand.year;
				//fin, temp.bike.suspension.condition;
				//getline(fin, temp.bike.suspension.catalogNumb);
				//getline(fin, temp.bike.suspension.contact.name);
				//getline(fin, temp.bike.suspension.contact.phoneNumb);
				//getline(fin, temp.bike.suspension.contact.email);
				//getline(fin, temp.bike.wheels.title);
				//fin, temp.bike.wheels.radius;
				//getline(fin, temp.bike.wheels.season);
				//getline(fin, temp.bike.wheels.size);
				//getline(fin, temp.bike.wheels.contact.name);
				//getline(fin, temp.bike.wheels.contact.phoneNumb);
				//getline(fin, temp.bike.wheels.contact.email);
				//getline(fin, temp.bike.elecronic.title);
				//getline(fin, temp.bike.elecronic.brand.marka);
				//getline(fin, temp.bike.elecronic.brand.model);
				//fin, temp.bike.elecronic.brand.year;
				//getline(fin, temp.bike.elecronic.Bodytype.bodytype);
				//fin, temp.bike.elecronic.Bodytype.restyle;
				//getline(fin, temp.bike.elecronic.Bodytype.bodytype);
				//getline(fin, temp.bike.elecronic.catalogNumb);
				//getline(fin, temp.bike.elecronic.contact.name);
				//getline(fin, temp.bike.elecronic.contact.phoneNumb);
				//getline(fin, temp.bike.elecronic.contact.email);
				//getline(fin, temp.bike.other.title);
				//getline(fin, temp.bike.other.brand.marka);
				//getline(fin, temp.bike.other.brand.model);
				//fin, temp.bike.other.brand.year;
				//getline(fin, temp.bike.other.contact.name);
				//getline(fin, temp.bike.other.contact.phoneNumb);
				//getline(fin, temp.bike.other.contact.email);
				////contacts.push_back(temp);
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
void menu()
{
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
}

void BikeMenu()
{
	cout << "Choose category: " << endl;
	cout << "1. Engine: " << endl;
	cout << "2. Transmission: " << endl;
	cout << "3. Headlights: " << endl;
	cout << "4. Suspension: " << endl;
	cout << "5. Wheels: " << endl;
	cout << "6. Electronic: " << endl;
	cout << "7. Other: " << endl;
	cout << "0. Exit: " << endl;
}

void insertCar(cars temp)
{
	cars* tempArr = new cars[countArr + 1];
	for (int i = 0; i < countArr; i++)
	{
		tempArr[i] = carArr[i];
	}
	countArr++;
	carArr = new cars[countArr];
	for (int i = 0; i < countArr; i++)
	{
		carArr[i] = tempArr[i];
	}
	delete[]tempArr;
}

void insertTruck()
{
	truck* temp = new truck[countArr + 1];
	for (int i = 0; i < countArr; i++)
	{
		temp[i] = truckArr[i];
	}
	countArr++;
	truckArr = new truck[countArr];
	for (int i = 0; i < countArr; i++)
	{
		truckArr[i] = temp[i];
	}
	delete[]temp;
}

void insertBus()
{
	bus* temp = new bus[countArr + 1];
	for (int i = 0; i < countArr; i++)
	{
		temp[i] = busArr[i];
	}
	countArr++;
	busArr = new bus[countArr];
	for (int i = 0; i < countArr; i++)
	{
		busArr[i] = temp[i];
	}
	delete[]temp;
}

void insertBike()
{
	bikes* temp = new bikes[countArr + 1];
	for (int i = 0; i < countArr; i++)
	{
		temp[i] = bikeArr[i];
	}
	countArr++;
	bikeArr = new bikes[countArr];
	for (int i = 0; i < countArr; i++)
	{
		bikeArr[i] = temp[i];
	}
	delete[]temp;
}
void showSome()
{
	for (int i = 0; i < countArr; i++)
	{
		cout << "id:" << someArr[i].id << endl;
		cout << "someth" << someArr[i].some << endl;
	}
}
void addSome()
{
	ofstream fout;
	fout.open(Data, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		something* temp = new something[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = someArr[i];
		}
		something newSome;
		cout << "id:" << endl;
		cin >> newSome.id;
		(cin.ignore());
		getline(cin, newSome.some);
		fout << newSome.id << endl;
		fout << newSome.some << endl;

		//something* temp = new something[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = someArr[i];
		}
		countArr++;
		someArr = new something[countArr];
		for (int i = 0; i < countArr; i++)
		{
			someArr[i] = temp[i];
		}
		delete[]temp;
	}
}
void offerNewCar()
{
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		cars* temp = new cars[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = carArr[i];
		}
		cars newCar;
		int actionCar = 0;
		system("cls");
		menu();
		cin >> actionCar;
		switch (actionCar)
		{
		
		case 1:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.engine.contact.name = item.contact.name;
					newCar.engine.contact.phoneNumb = item.contact.phoneNumb;
					newCar.engine.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.engine.title);
			cout << "Brand" << endl;
			cin >> newCar.engine.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.engine.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.engine.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newCar.engine.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newCar.engine.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newCar.engine.condition;
			cout << "Catalogue number:" << endl;
			cin >> newCar.engine.catalogNumb;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.engine.title << endl;
			fout << newCar.engine.brand.marka << endl;
			fout << newCar.engine.brand.model << endl;
			fout << newCar.engine.brand.year << endl;
			fout << newCar.engine.EnginVol << endl;
			fout << newCar.engine.petroltype << endl;
			fout << newCar.engine.condition << endl;
			fout << newCar.engine.catalogNumb << endl;
			fout << newCar.engine.contact.name << endl;
			fout << newCar.engine.contact.phoneNumb << endl;
			fout << newCar.engine.contact.email << endl;
		}break;

		case 2:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.transmission.contact.name = item.contact.name;
					newCar.transmission.contact.phoneNumb = item.contact.phoneNumb;
					newCar.transmission.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newCar.transmission.title;
			cout << "Brand:" << endl;
			cin >> newCar.transmission.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.transmission.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.transmission.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newCar.transmission.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newCar.transmission.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newCar.transmission.condition;
			cout << "Catalogue number:" << endl;
			cin >> newCar.transmission.catalogNumb;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.transmission.title << endl;
			fout << newCar.transmission.brand.marka << endl;
			fout << newCar.transmission.brand.model << endl;
			fout << newCar.transmission.brand.year << endl;
			fout << newCar.transmission.EnginVol << endl;
			fout << newCar.transmission.petroltype << endl;
			fout << newCar.transmission.condition << endl;
			fout << newCar.transmission.catalogNumb << endl;
			fout << newCar.transmission.contact.name << endl;
			fout << newCar.transmission.contact.phoneNumb << endl;
			fout << newCar.transmission.contact.email << endl;
		}break;

		case 3:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.body.contact.name = item.contact.name;
					newCar.body.contact.phoneNumb = item.contact.phoneNumb;
					newCar.body.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.body.title);
			cout << "Brand:" << endl;
			cin >> newCar.body.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.body.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.body.brand.year;
			cout << "Body type:" << endl;
			cin >> newCar.body.type.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newCar.body.type.restyle;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.body.title << endl;
			fout << newCar.body.brand.marka << endl;
			fout << newCar.body.brand.model << endl;
			fout << newCar.body.brand.year << endl;
			fout << newCar.body.type.bodytype << endl;
			fout << newCar.body.type.restyle << endl;
			fout << newCar.body.contact.name << endl;
			fout << newCar.body.contact.phoneNumb << endl;
			fout << newCar.body.contact.email << endl;
		}break;
		case 4:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.light.contact.name = item.contact.name;
					newCar.light.contact.phoneNumb = item.contact.phoneNumb;
					newCar.light.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.light.title);
			cout << "Brand:" << endl;
			cin >> newCar.light.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.light.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.light.brand.year;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.light.title << endl;
			fout << newCar.light.brand.marka << endl;
			fout << newCar.light.brand.model << endl;
			fout << newCar.light.brand.year << endl;
			fout << newCar.light.contact.name << endl;
			fout << newCar.light.contact.phoneNumb << endl;
			fout << newCar.light.contact.email << endl;
		}break;
		case 5:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.suspension.contact.name = item.contact.name;
					newCar.suspension.contact.phoneNumb = item.contact.phoneNumb;
					newCar.suspension.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.suspension.title);
			cout << "Brand" << endl;
			cin >> newCar.suspension.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.suspension.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.suspension.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newCar.suspension.condition;
			cout << "Catalogue number:" << endl;
			cin >> newCar.suspension.catalogNumb;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.suspension.title << endl;
			fout << newCar.suspension.brand.marka << endl;
			fout << newCar.suspension.brand.model << endl;
			fout << newCar.suspension.brand.year << endl;
			fout << newCar.suspension.condition << endl;
			fout << newCar.suspension.catalogNumb << endl;
			fout << newCar.suspension.contact.name << endl;
			fout << newCar.suspension.contact.phoneNumb << endl;
			fout << newCar.suspension.contact.email << endl;

		}break;
		case 6:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.wheels.contact.name = item.contact.name;
					newCar.wheels.contact.phoneNumb = item.contact.phoneNumb;
					newCar.wheels.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			(cin.ignore());
			getline(cin, newCar.wheels.title);
			cout << "Radius:" << endl;
			cin >> newCar.wheels.radius;
			cout << "Season:" << endl;
			cin >> newCar.wheels.season;
			cout << "Size (parameters):" << endl;
			cin >> newCar.wheels.size;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.wheels.title << endl;
			fout << newCar.wheels.radius << endl;
			fout << newCar.wheels.season << endl;
			fout << newCar.wheels.size << endl;
			fout << newCar.wheels.contact.name << endl;
			fout << newCar.wheels.contact.phoneNumb << endl;
			fout << newCar.wheels.contact.email << endl;
		}break;
		case 7:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.salon.contact.name = item.contact.name;
					newCar.salon.contact.phoneNumb = item.contact.phoneNumb;
					newCar.salon.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			(cin.ignore());
			getline(cin, newCar.salon.title);
			cout << "Brand:" << endl;
			cin >> newCar.salon.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.salon.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.salon.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newCar.salon.condition;
			cout << "Body type:" << endl;
			cin >> newCar.salon.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newCar.salon.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newCar.salon.catalogNumb;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.salon.title << endl;
			fout << newCar.salon.brand.marka << endl;
			fout << newCar.salon.brand.model << endl;
			fout << newCar.salon.brand.year << endl;
			fout << newCar.salon.condition << endl;
			fout << newCar.salon.Bodytype.bodytype << endl;
			fout << newCar.salon.Bodytype.restyle << endl;
			fout << newCar.salon.catalogNumb << endl;
			fout << newCar.salon.contact.name << endl;
			fout << newCar.salon.contact.phoneNumb << endl;
			fout << newCar.salon.contact.email << endl;
		}break;
		case 8:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.elecronic.contact.name = item.contact.name;
					newCar.elecronic.contact.phoneNumb = item.contact.phoneNumb;
					newCar.elecronic.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.elecronic.title);
			cout << "Brand" << endl;
			cin >> newCar.elecronic.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.elecronic.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.elecronic.brand.year;
			cout << "Body type:" << endl;
			cin >> newCar.elecronic.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newCar.elecronic.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newCar.elecronic.catalogNumb;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.elecronic.title << endl;
			fout << newCar.elecronic.brand.marka << endl;
			fout << newCar.elecronic.brand.model << endl;
			fout << newCar.elecronic.brand.year << endl;
			fout << newCar.elecronic.Bodytype.bodytype << endl;
			fout << newCar.elecronic.Bodytype.restyle << endl;
			fout << newCar.elecronic.catalogNumb << endl;
			fout << newCar.elecronic.contact.name << endl;
			fout << newCar.elecronic.contact.phoneNumb << endl;
			fout << newCar.elecronic.contact.email << endl;
		}break;
		case 9:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newCar.other.contact.name = item.contact.name;
					newCar.other.contact.phoneNumb = item.contact.phoneNumb;
					newCar.other.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			(cin.ignore());
			getline(cin, newCar.other.title);
			cout << "Brand" << endl;
			cin >> newCar.other.brand.marka;
			cout << "Model:" << endl;
			cin >> newCar.other.brand.model;
			cout << "Production year:" << endl;
			cin >> newCar.other.brand.year;
			newCar.id++;
			fout << newCar.id << endl;
			fout << newCar.other.title << endl;
			fout << newCar.other.brand.marka << endl;
			fout << newCar.other.brand.model << endl;
			fout << newCar.other.brand.year << endl;
			fout << newCar.other.contact.name << endl;
			fout << newCar.other.contact.phoneNumb << endl;
			fout << newCar.other.contact.email << endl;
		}break;
	
		insertCar(newCar);
		case 0:
		{
			cout << "Good bye!" << endl;
		}break;
		default:
			break;
		}
	}
	else
	{
		cout << "ERROR! File not open." << endl;
	}

}
void offerNewTruck()
{
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		truck* temp = new truck[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = truckArr[i];
		}
		truck newTruck;
		int actionTruck = 0;
		system("cls");
		menu();
		cin >> actionTruck;
		switch (actionTruck)
		{
			
		case 1:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.engine.contact.name = item.contact.name;
					newTruck.engine.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.engine.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.engine.title;
			cout << "Brand" << endl;
			cin >> newTruck.engine.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.engine.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.engine.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newTruck.engine.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newTruck.engine.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newTruck.engine.condition;
			cout << "Catalogue number:" << endl;
			cin >> newTruck.engine.catalogNumb;

		}break;

		case 2:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.transmission.contact.name = item.contact.name;
					newTruck.transmission.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.transmission.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newTruck.transmission.title;
			cout << "Brand:" << endl;
			cin >> newTruck.transmission.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.transmission.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.transmission.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newTruck.transmission.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newTruck.transmission.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newTruck.transmission.condition;
			cout << "Catalogue number:" << endl;
			cin >> newTruck.transmission.catalogNumb;

		}break;

		case 3:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.body.contact.name = item.contact.name;
					newTruck.body.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.body.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.body.title;
			cout << "Brand:" << endl;
			cin >> newTruck.body.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.body.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.body.brand.year;
			cout << "Body type:" << endl;
			cin >> newTruck.body.type.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newTruck.body.type.restyle;

		}break;
		case 4:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.light.contact.name = item.contact.name;
					newTruck.light.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.light.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.light.title;
			cout << "Brand:" << endl;
			cin >> newTruck.light.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.light.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.light.brand.year;

		}break;
		case 5:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.suspension.contact.name = item.contact.name;
					newTruck.suspension.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.suspension.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.suspension.title;
			cout << "Brand" << endl;
			cin >> newTruck.suspension.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.suspension.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.suspension.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newTruck.suspension.condition;
			cout << "Catalogue number:" << endl;
			cin >> newTruck.suspension.catalogNumb;

		}break;
		case 6:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.wheels.contact.name = item.contact.name;
					newTruck.wheels.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.wheels.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newTruck.wheels.title;
			cout << "Radius:" << endl;
			cin >> newTruck.wheels.radius;
			cout << "Season:" << endl;
			cin >> newTruck.wheels.season;
			cout << "Size (parameters):" << endl;
			cin >> newTruck.wheels.size;

		}break;
		case 7:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.salon.contact.name = item.contact.name;
					newTruck.salon.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.salon.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newTruck.salon.title;
			cout << "Brand:" << endl;
			cin >> newTruck.salon.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.salon.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.salon.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newTruck.salon.condition;
			cout << "Body type:" << endl;
			cin >> newTruck.salon.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newTruck.salon.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newTruck.salon.catalogNumb;

		}break;
		case 8:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.elecronic.contact.name = item.contact.name;
					newTruck.elecronic.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.elecronic.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.elecronic.title;
			cout << "Brand" << endl;
			cin >> newTruck.elecronic.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.elecronic.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.elecronic.brand.year;
			cout << "Body type:" << endl;
			cin >> newTruck.elecronic.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newTruck.elecronic.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newTruck.elecronic.catalogNumb;

		}break;
		case 9:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newTruck.other.contact.name = item.contact.name;
					newTruck.other.contact.phoneNumb = item.contact.phoneNumb;
					newTruck.other.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newTruck.other.title;
			cout << "Brand" << endl;
			cin >> newTruck.other.brand.marka;
			cout << "Model:" << endl;
			cin >> newTruck.other.brand.model;
			cout << "Production year:" << endl;
			cin >> newTruck.other.brand.year;

		}break;
		newTruck.id++;
		insertTruck();
		case 0:
		{
			cout << "Good bye!" << endl;
		}break;
		default:
			break;
			
			fout << newTruck.engine.title;
			fout << newTruck.engine.brand.marka;
			fout << newTruck.engine.brand.model;
			fout << newTruck.engine.brand.year;
			fout << newTruck.engine.EnginVol;
			fout << newTruck.engine.petroltype;
			fout << newTruck.engine.condition;
			fout << newTruck.engine.catalogNumb;
			fout << newTruck.engine.contact.name;
			fout << newTruck.engine.contact.phoneNumb;
			fout << newTruck.engine.contact.email;
			fout << newTruck.transmission.title;
			fout << newTruck.transmission.brand.marka;
			fout << newTruck.transmission.brand.model;
			fout << newTruck.transmission.brand.year;
			fout << newTruck.transmission.EnginVol;
			fout << newTruck.transmission.petroltype;
			fout << newTruck.transmission.condition;
			fout << newTruck.transmission.catalogNumb;
			fout << newTruck.transmission.contact.name;
			fout << newTruck.transmission.contact.phoneNumb;
			fout << newTruck.transmission.contact.email;
			fout << newTruck.body.title;
			fout << newTruck.body.brand.marka;
			fout << newTruck.body.brand.model;
			fout << newTruck.body.brand.year;
			fout << newTruck.body.type.bodytype;
			fout << newTruck.body.type.restyle;
			fout << newTruck.body.contact.name;
			fout << newTruck.body.contact.phoneNumb;
			fout << newTruck.body.contact.email;
			fout << newTruck.light.title;
			fout << newTruck.light.brand.marka;
			fout << newTruck.light.brand.model;
			fout << newTruck.light.brand.year;
			fout << newTruck.light.contact.name;
			fout << newTruck.light.contact.phoneNumb;
			fout << newTruck.light.contact.email;
			fout << newTruck.suspension.title;
			fout << newTruck.suspension.brand.marka;
			fout << newTruck.suspension.brand.model;
			fout << newTruck.suspension.brand.year;
			fout << newTruck.suspension.condition;
			fout << newTruck.suspension.catalogNumb;
			fout << newTruck.suspension.contact.name;
			fout << newTruck.suspension.contact.phoneNumb;
			fout << newTruck.suspension.contact.email;
			fout << newTruck.wheels.title;
			fout << newTruck.wheels.radius;
			fout << newTruck.wheels.season;
			fout << newTruck.wheels.size;
			fout << newTruck.wheels.contact.name;
			fout << newTruck.wheels.contact.phoneNumb;
			fout << newTruck.wheels.contact.email;
			fout << newTruck.salon.title;
			fout << newTruck.salon.brand.marka;
			fout << newTruck.salon.brand.model;
			fout << newTruck.salon.brand.year;
			fout << newTruck.salon.condition;
			fout << newTruck.salon.Bodytype.bodytype;
			fout << newTruck.salon.Bodytype.restyle;
			fout << newTruck.salon.catalogNumb;
			fout << newTruck.salon.contact.name;
			fout << newTruck.salon.contact.phoneNumb;
			fout << newTruck.salon.contact.email;
			fout << newTruck.elecronic.title;
			fout << newTruck.elecronic.brand.marka;
			fout << newTruck.elecronic.brand.model;
			fout << newTruck.elecronic.brand.year;
			fout << newTruck.elecronic.Bodytype.bodytype;
			fout << newTruck.elecronic.Bodytype.restyle;
			fout << newTruck.elecronic.Bodytype.bodytype;
			fout << newTruck.elecronic.catalogNumb;
			fout << newTruck.elecronic.contact.name;
			fout << newTruck.elecronic.contact.phoneNumb;
			fout << newTruck.elecronic.contact.email;
			fout << newTruck.other.title;
			fout << newTruck.other.brand.marka;
			fout << newTruck.other.brand.model;
			fout << newTruck.other.brand.year;
			fout << newTruck.other.contact.name;
			fout << newTruck.other.contact.phoneNumb;
			fout << newTruck.other.contact.email;
		}
	}
	else
	{
		cout << "ERROR! File not open." << endl;
	}
}
void offerNewBus()
{
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		bus* temp = new bus[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = busArr[i];
		}
		bus newBus;
		int actionBus = 0;
		system("cls");
		menu();
		cin >> actionBus;
		switch (actionBus)
		{
		case 1:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.engine.contact.name = item.contact.name;
					newBus.engine.contact.phoneNumb = item.contact.phoneNumb;
					newBus.engine.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.engine.title;
			cout << "Brand" << endl;
			cin >> newBus.engine.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.engine.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.engine.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newBus.engine.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newBus.engine.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newBus.engine.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBus.engine.catalogNumb;

		}break;

		case 2:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.transmission.contact.name = item.contact.name;
					newBus.transmission.contact.phoneNumb = item.contact.phoneNumb;
					newBus.transmission.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newBus.transmission.title;
			cout << "Brand:" << endl;
			cin >> newBus.transmission.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.transmission.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.transmission.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newBus.transmission.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newBus.transmission.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newBus.transmission.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBus.transmission.catalogNumb;

		}break;

		case 3:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.body.contact.name = item.contact.name;
					newBus.body.contact.phoneNumb = item.contact.phoneNumb;
					newBus.body.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.body.title;
			cout << "Brand:" << endl;
			cin >> newBus.body.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.body.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.body.brand.year;
			cout << "Body type:" << endl;
			cin >> newBus.body.type.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newBus.body.type.restyle;

		}break;
		case 4:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.light.contact.name = item.contact.name;
					newBus.light.contact.phoneNumb = item.contact.phoneNumb;
					newBus.light.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.light.title;
			cout << "Brand:" << endl;
			cin >> newBus.light.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.light.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.light.brand.year;

		}break;
		case 5:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.suspension.contact.name = item.contact.name;
					newBus.suspension.contact.phoneNumb = item.contact.phoneNumb;
					newBus.suspension.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.suspension.title;
			cout << "Brand" << endl;
			cin >> newBus.suspension.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.suspension.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.suspension.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newBus.suspension.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBus.suspension.catalogNumb;

		}break;
		case 6:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.wheels.contact.name = item.contact.name;
					newBus.wheels.contact.phoneNumb = item.contact.phoneNumb;
					newBus.wheels.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newBus.wheels.title;
			cout << "Radius:" << endl;
			cin >> newBus.wheels.radius;
			cout << "Season:" << endl;
			cin >> newBus.wheels.season;
			cout << "Size (parameters):" << endl;
			cin >> newBus.wheels.size;

		}break;
		case 7:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.salon.contact.name = item.contact.name;
					newBus.salon.contact.phoneNumb = item.contact.phoneNumb;
					newBus.salon.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newBus.salon.title;
			cout << "Brand:" << endl;
			cin >> newBus.salon.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.salon.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.salon.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newBus.salon.condition;
			cout << "Body type:" << endl;
			cin >> newBus.salon.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newBus.salon.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newBus.salon.catalogNumb;

		}break;
		case 8:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.elecronic.contact.name = item.contact.name;
					newBus.elecronic.contact.phoneNumb = item.contact.phoneNumb;
					newBus.elecronic.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.elecronic.title;
			cout << "Brand" << endl;
			cin >> newBus.elecronic.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.elecronic.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.elecronic.brand.year;
			cout << "Body type:" << endl;
			cin >> newBus.elecronic.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newBus.elecronic.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newBus.elecronic.catalogNumb;

		}break;
		case 9:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBus.other.contact.name = item.contact.name;
					newBus.other.contact.phoneNumb = item.contact.phoneNumb;
					newBus.other.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBus.other.title;
			cout << "Brand" << endl;
			cin >> newBus.other.brand.marka;
			cout << "Model:" << endl;
			cin >> newBus.other.brand.model;
			cout << "Production year:" << endl;
			cin >> newBus.other.brand.year;

		}break;
		case 0:
		{
			cout << "Good bye!" << endl;
		}break;
		default:
			break;
		}
		insertBus();
		fout << newBus.engine.title;
		fout << newBus.engine.brand.marka;
		fout << newBus.engine.brand.model;
		fout << newBus.engine.brand.year;
		fout << newBus.engine.EnginVol;
		fout << newBus.engine.petroltype;
		fout << newBus.engine.condition;
		fout << newBus.engine.catalogNumb;
		fout << newBus.engine.contact.name;
		fout << newBus.engine.contact.phoneNumb;
		fout << newBus.engine.contact.email;
		fout << newBus.transmission.title;
		fout << newBus.transmission.brand.marka;
		fout << newBus.transmission.brand.model;
		fout << newBus.transmission.brand.year;
		fout << newBus.transmission.EnginVol;
		fout << newBus.transmission.petroltype;
		fout << newBus.transmission.condition;
		fout << newBus.transmission.catalogNumb;
		fout << newBus.transmission.contact.name;
		fout << newBus.transmission.contact.phoneNumb;
		fout << newBus.transmission.contact.email;
		fout << newBus.body.title;
		fout << newBus.body.brand.marka;
		fout << newBus.body.brand.model;
		fout << newBus.body.brand.year;
		fout << newBus.body.type.bodytype;
		fout << newBus.body.type.restyle;
		fout << newBus.body.contact.name;
		fout << newBus.body.contact.phoneNumb;
		fout << newBus.body.contact.email;
		fout << newBus.light.title;
		fout << newBus.light.brand.marka;
		fout << newBus.light.brand.model;
		fout << newBus.light.brand.year;
		fout << newBus.light.contact.name;
		fout << newBus.light.contact.phoneNumb;
		fout << newBus.light.contact.email;
		fout << newBus.suspension.title;
		fout << newBus.suspension.brand.marka;
		fout << newBus.suspension.brand.model;
		fout << newBus.suspension.brand.year;
		fout << newBus.suspension.condition;
		fout << newBus.suspension.catalogNumb;
		fout << newBus.suspension.contact.name;
		fout << newBus.suspension.contact.phoneNumb;
		fout << newBus.suspension.contact.email;
		fout << newBus.wheels.title;
		fout << newBus.wheels.radius;
		fout << newBus.wheels.season;
		fout << newBus.wheels.size;
		fout << newBus.wheels.contact.name;
		fout << newBus.wheels.contact.phoneNumb;
		fout << newBus.wheels.contact.email;
		fout << newBus.salon.title;
		fout << newBus.salon.brand.marka;
		fout << newBus.salon.brand.model;
		fout << newBus.salon.brand.year;
		fout << newBus.salon.condition;
		fout << newBus.salon.Bodytype.bodytype;
		fout << newBus.salon.Bodytype.restyle;
		fout << newBus.salon.catalogNumb;
		fout << newBus.salon.contact.name;
		fout << newBus.salon.contact.phoneNumb;
		fout << newBus.salon.contact.email;
		fout << newBus.elecronic.title;
		fout << newBus.elecronic.brand.marka;
		fout << newBus.elecronic.brand.model;
		fout << newBus.elecronic.brand.year;
		fout << newBus.elecronic.Bodytype.bodytype;
		fout << newBus.elecronic.Bodytype.restyle;
		fout << newBus.elecronic.Bodytype.bodytype;
		fout << newBus.elecronic.catalogNumb;
		fout << newBus.elecronic.contact.name;
		fout << newBus.elecronic.contact.phoneNumb;
		fout << newBus.elecronic.contact.email;
		fout << newBus.other.title;
		fout << newBus.other.brand.marka;
		fout << newBus.other.brand.model;
		fout << newBus.other.brand.year;
		fout << newBus.other.contact.name;
		fout << newBus.other.contact.phoneNumb;
		fout << newBus.other.contact.email;
	}
	else
	{
	cout << "ERROR! File not open." << endl;
	}
}

void offerNewBike()
{
	ofstream fout;
	fout.open(fileName, fstream::app);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		bikes* temp = new bikes[countArr + 1];
		for (int i = 0; i < countArr; i++)
		{
			temp[i] = bikeArr[i];
		}
		bikes newBike;

		int actionBike = 0;
		system("cls");
		BikeMenu();
		cin >> actionBike;
		switch (actionBike)
		{
		case 1:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.engine.contact.name = item.contact.name;
					newBike.engine.contact.phoneNumb = item.contact.phoneNumb;
					newBike.engine.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBike.engine.title;
			cout << "Brand" << endl;
			cin >> newBike.engine.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.engine.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.engine.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newBike.engine.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newBike.engine.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newBike.engine.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBike.engine.catalogNumb;
			
		}break;

		case 2:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.transmission.contact.name = item.contact.name;
					newBike.transmission.contact.phoneNumb = item.contact.phoneNumb;
					newBike.transmission.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newBike.transmission.title;
			cout << "Brand:" << endl;
			cin >> newBike.transmission.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.transmission.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.transmission.brand.year;
			cout << "Engine volume:" << endl;
			cin >> newBike.transmission.EnginVol;
			cout << "Petrol type:" << endl;
			cin >> newBike.transmission.petroltype;
			cout << "Condition (1-5):" << endl;
			cin >> newBike.transmission.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBike.transmission.catalogNumb;
			
		}break;


		case 3:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.light.contact.name = item.contact.name;
					newBike.light.contact.phoneNumb = item.contact.phoneNumb;
					newBike.light.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBike.light.title;
			cout << "Brand:" << endl;
			cin >> newBike.light.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.light.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.light.brand.year;
			
		}break;
		case 4:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.suspension.contact.name = item.contact.name;
					newBike.suspension.contact.phoneNumb = item.contact.phoneNumb;
					newBike.suspension.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBike.suspension.title;
			cout << "Brand" << endl;
			cin >> newBike.suspension.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.suspension.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.suspension.brand.year;
			cout << "Condition (1-5):" << endl;
			cin >> newBike.suspension.condition;
			cout << "Catalogue number:" << endl;
			cin >> newBike.suspension.catalogNumb;
			
		}break;
		case 5:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.wheels.contact.name = item.contact.name;
					newBike.wheels.contact.phoneNumb = item.contact.phoneNumb;
					newBike.wheels.contact.email = item.contact.email;
				}
			}
			cout << "Title:" << endl;
			cin >> newBike.wheels.title;
			cout << "Radius:" << endl;
			cin >> newBike.wheels.radius;
			cout << "Season:" << endl;
			cin >> newBike.wheels.season;
			cout << "Size (parameters):" << endl;
			cin >> newBike.wheels.size;
			
		}break;

		case 6:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.elecronic.contact.name = item.contact.name;
					newBike.elecronic.contact.phoneNumb = item.contact.phoneNumb;
					newBike.elecronic.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBike.elecronic.title;
			cout << "Brand" << endl;
			cin >> newBike.elecronic.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.elecronic.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.elecronic.brand.year;
			cout << "Body type:" << endl;
			cin >> newBike.elecronic.Bodytype.bodytype;
			cout << "Restyle (1)/ Non-restyle (0):" << endl;
			cin >> newBike.elecronic.Bodytype.restyle;
			cout << "Catalogue number:" << endl;
			cin >> newBike.elecronic.catalogNumb;
			
		}break;
		case 7:
		{
			for (user item : users)
			{
				if (item.login == login && item.password == password)
				{
					newBike.other.contact.name = item.contact.name;
					newBike.other.contact.phoneNumb = item.contact.phoneNumb;
					newBike.other.contact.email = item.contact.email;
				}
			}
			cout << "Title" << endl;
			cin >> newBike.other.title;
			cout << "Brand" << endl;
			cin >> newBike.other.brand.marka;
			cout << "Model:" << endl;
			cin >> newBike.other.brand.model;
			cout << "Production year:" << endl;
			cin >> newBike.other.brand.year;
			
		}break;

		case 0:
		{
			cout << "Good bye!" << endl;
		}break;



		default:
			break;
		}
		insertBike();
		fout << newBike.engine.title;
		fout << newBike.engine.brand.marka;
		fout << newBike.engine.brand.model;
		fout << newBike.engine.brand.year;
		fout << newBike.engine.EnginVol;
		fout << newBike.engine.petroltype;
		fout << newBike.engine.condition;
		fout << newBike.engine.catalogNumb;
		fout << newBike.engine.contact.name;
		fout << newBike.engine.contact.phoneNumb;
		fout << newBike.engine.contact.email;
		fout << newBike.transmission.title;
		fout << newBike.transmission.brand.marka;
		fout << newBike.transmission.brand.model;
		fout << newBike.transmission.brand.year;
		fout << newBike.transmission.EnginVol;
		fout << newBike.transmission.petroltype;
		fout << newBike.transmission.condition;
		fout << newBike.transmission.catalogNumb;
		fout << newBike.transmission.contact.name;
		fout << newBike.transmission.contact.phoneNumb;
		fout << newBike.transmission.contact.email;
		fout << newBike.light.title;
		fout << newBike.light.brand.marka;
		fout << newBike.light.brand.model;
		fout << newBike.light.brand.year;
		fout << newBike.light.contact.name;
		fout << newBike.light.contact.phoneNumb;
		fout << newBike.light.contact.email;
		fout << newBike.suspension.title;
		fout << newBike.suspension.brand.marka;
		fout << newBike.suspension.brand.model;
		fout << newBike.suspension.brand.year;
		fout << newBike.suspension.condition;
		fout << newBike.suspension.catalogNumb;
		fout << newBike.suspension.contact.name;
		fout << newBike.suspension.contact.phoneNumb;
		fout << newBike.suspension.contact.email;
		fout << newBike.wheels.title;
		fout << newBike.wheels.radius;
		fout << newBike.wheels.season;
		fout << newBike.wheels.size;
		fout << newBike.wheels.contact.name;
		fout << newBike.wheels.contact.phoneNumb;
		fout << newBike.wheels.contact.email;
		fout << newBike.elecronic.title;
		fout << newBike.elecronic.brand.marka;
		fout << newBike.elecronic.brand.model;
		fout << newBike.elecronic.brand.year;
		fout << newBike.elecronic.Bodytype.bodytype;
		fout << newBike.elecronic.Bodytype.restyle;
		fout << newBike.elecronic.Bodytype.bodytype;
		fout << newBike.elecronic.catalogNumb;
		fout << newBike.elecronic.contact.name;
		fout << newBike.elecronic.contact.phoneNumb;
		fout << newBike.elecronic.contact.email;
		fout << newBike.other.title;
		fout << newBike.other.brand.marka;
		fout << newBike.other.brand.model;
		fout << newBike.other.brand.year;
		fout << newBike.other.contact.name;
		fout << newBike.other.contact.phoneNumb;
		fout << newBike.other.contact.email;
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
			break;
		}
		else
		{
			CLEAR

			cout << "Wrong login or password or such user doesn't exist!" << endl;
		cout << "Press 1 to try again: " << endl;

		cin >> tryAgain;
		if (tryAgain == 1)
		{
			goto begin;
		}
		else
			break;
		}
	}
}

void searchCar()
{
	string text;
	cout << "Enter text for search: " << endl;
	cin >> text;
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].engine.title.find(text) != string::npos)
		{
			showCarsEngine();
		}
		if (carArr[i].transmission.title.find(text) != string::npos)
		{
			showCarsTransmission();
		}
		if (carArr[i].body.title.find(text) != string::npos)
		{
			showCarsBody();
		}
		if (carArr[i].light.title.find(text) != string::npos)
		{
			showCarsLight();
		}
		if (carArr[i].wheels.title.find(text) != string::npos)
		{
			showCarsWheels();
		}
		if (carArr[i].salon.title.find(text) != string::npos)
		{
			showCarsSalon();
		}
		if (carArr[i].elecronic.title.find(text) != string::npos)
		{
			showCarsElectric();
		}
		if (carArr[i].other.title.find(text) != string::npos)
		{
			showCarsOther();
		}
	}
}

void showCarsEngine()
{
	
		for (int i = 0; i < countArr; i++)
		{
			if (carArr[i].engine.title != "") {
				cout << "id:" << carArr[i].id << endl;
				cout << "Title: " << carArr[i].engine.title << endl;
				cout << "Brand" << carArr[i].engine.brand.marka << endl;
				cout << "Model:" << carArr[i].engine.brand.model << endl;
				cout << "Production year:" << carArr[i].engine.brand.year << endl;
				cout << "Engine volume:" << carArr[i].engine.EnginVol << endl;
				cout << "Petrol type:" << carArr[i].engine.petroltype << endl;
				cout << "Condition (1-5):" << carArr[i].engine.condition << endl;
				cout << "Catalogue number:" << carArr[i].engine.catalogNumb << endl;
				cout << "Name:" << carArr[i].engine.contact.name << endl;
				cout << "Phone number:" << carArr[i].engine.contact.phoneNumb << endl;
				cout << "Email:" << carArr[i].engine.contact.email << endl;
			}
		}
	
}

void showCarsTransmission()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].transmission.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title: " << carArr[i].transmission.title << endl;
			cout << "Brand" << carArr[i].transmission.brand.marka << endl;
			cout << "Model:" << carArr[i].transmission.brand.model << endl;
			cout << "Production year:" << carArr[i].transmission.brand.year << endl;
			cout << "transmission volume:" << carArr[i].transmission.EnginVol << endl;
			cout << "Petrol type:" << carArr[i].transmission.petroltype << endl;
			cout << "Condition (1-5):" << carArr[i].transmission.condition << endl;
			cout << "Catalogue number:" << carArr[i].transmission.catalogNumb << endl;
			cout << "Name:" << carArr[i].transmission.contact.name << endl;
			cout << "Phone number:" << carArr[i].transmission.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].transmission.contact.email << endl;
		}
	}
}

void showCarsBody()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].body.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title: " << carArr[i].body.title << endl;
			cout << "Brand" << carArr[i].body.brand.marka << endl;
			cout << "Model:" << carArr[i].body.brand.model << endl;
			cout << "Production year:" << carArr[i].body.brand.year << endl;
			cout << "Body type:" << carArr[i].body.type.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << carArr[i].body.type.restyle << endl;
			cout << "Name:" << carArr[i].body.contact.name << endl;
			cout << "Phone number:" << carArr[i].body.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].body.contact.email << endl;
		}
	}
}

void showCarsLight()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].light.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title: " << carArr[i].light.title << endl;
			cout << "Brand" << carArr[i].light.brand.marka << endl;
			cout << "Model:" << carArr[i].light.brand.model << endl;
			cout << "Production year:" << carArr[i].light.brand.year << endl;
			cout << "Name:" << carArr[i].light.contact.name << endl;
			cout << "Phone number:" << carArr[i].light.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].light.contact.email << endl;
		}
	}
}

void showCarsSuspension()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].suspension.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title: " << carArr[i].suspension.title << endl;
			cout << "Brand" << carArr[i].suspension.brand.marka << endl;
			cout << "Model:" << carArr[i].suspension.brand.model << endl;
			cout << "Production year:" << carArr[i].suspension.brand.year << endl;
			cout << "Condition (1-5):" << carArr[i].suspension.condition << endl;
			cout << "Catalogue number:" << carArr[i].suspension.catalogNumb << endl;
			cout << "Name:" << carArr[i].suspension.contact.name << endl;
			cout << "Phone number:" << carArr[i].suspension.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].suspension.contact.email << endl;
		}
	}
}

void showCarsWheels()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].wheels.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title:" << carArr[i].wheels.title << endl;
			cout << "Radius:" << carArr[i].wheels.radius << endl;
			cout << "Season:" << carArr[i].wheels.season << endl;
			cout << "Size (parameters):" << carArr[i].wheels.size << endl;
			cout << "Name:" << carArr[i].wheels.contact.name << endl;
			cout << "Phone number:" << carArr[i].wheels.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].wheels.contact.email << endl;
		}
	}
}

void showCarsSalon()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].salon.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title:" << carArr[i].salon.title << endl;
			cout << "Brand:" << carArr[i].salon.brand.marka << endl;
			cout << "Model:" << carArr[i].salon.brand.model << endl;
			cout << "Production year:" << carArr[i].salon.brand.year << endl;
			cout << "Condition (1-5):" << carArr[i].salon.condition << endl;
			cout << "Body type:" << carArr[i].salon.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << carArr[i].salon.Bodytype.restyle << endl;
			cout << "Catalogue number:" << carArr[i].salon.catalogNumb << endl;
			cout << "Name:" << carArr[i].salon.contact.name << endl;
			cout << "Phone number:" << carArr[i].salon.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].salon.contact.email << endl;
		}
	}
}

void showCarsElectric()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].elecronic.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title:" << carArr[i].elecronic.title << endl;
			cout << "Brand:" << carArr[i].elecronic.brand.marka << endl;
			cout << "Model:" << carArr[i].elecronic.brand.model << endl;
			cout << "Production year:" << carArr[i].elecronic.brand.year << endl;
			cout << "Body type:" << carArr[i].elecronic.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << carArr[i].elecronic.Bodytype.restyle << endl;
			cout << "Catalogue number:" << carArr[i].elecronic.catalogNumb << endl;
			cout << "Name:" << carArr[i].elecronic.contact.name << endl;
			cout << "Phone number:" << carArr[i].elecronic.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].elecronic.contact.email << endl;
		}
	}
}

void showCarsOther()
{
	for (int i = 0; i < countArr; i++)
	{
		if (carArr[i].other.title != "") {
			cout << "id:" << carArr[i].id << endl;
			cout << "Title:" << carArr[i].other.title << endl;
			cout << "Brand:" << carArr[i].other.brand.marka << endl;
			cout << "Model:" << carArr[i].other.brand.model << endl;
			cout << "Production year:" << carArr[i].other.brand.year << endl;
			cout << "Name:" << carArr[i].other.contact.name << endl;
			cout << "Phone number:" << carArr[i].other.contact.phoneNumb << endl;
			cout << "Email:" << carArr[i].other.contact.email << endl;
		}
	}
}

void showTruckEngine()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].engine.title != "") {
			cout << "Title: " << truckArr[i].engine.title << endl;
			cout << "Brand" << truckArr[i].engine.brand.marka << endl;
			cout << "Model:" << truckArr[i].engine.brand.model << endl;
			cout << "Production year:" << truckArr[i].engine.brand.year << endl;
			cout << "Engine volume:" << truckArr[i].engine.EnginVol << endl;
			cout << "Petrol type:" << truckArr[i].engine.petroltype << endl;
			cout << "Condition (1-5):" << truckArr[i].engine.condition << endl;
			cout << "Catalogue number:" << truckArr[i].engine.catalogNumb << endl;
			cout << "Name:" << truckArr[i].engine.contact.name << endl;
			cout << "Phone number:" << truckArr[i].engine.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].engine.contact.email << endl;
		}
	}
}

void showTruckTransmission()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].transmission.title != "") {
			cout << "Title: " << truckArr[i].transmission.title << endl;
			cout << "Brand" << truckArr[i].transmission.brand.marka << endl;
			cout << "Model:" << truckArr[i].transmission.brand.model << endl;
			cout << "Production year:" << truckArr[i].transmission.brand.year << endl;
			cout << "transmission volume:" << truckArr[i].transmission.EnginVol << endl;
			cout << "Petrol type:" << truckArr[i].transmission.petroltype << endl;
			cout << "Condition (1-5):" << truckArr[i].transmission.condition << endl;
			cout << "Catalogue number:" << truckArr[i].transmission.catalogNumb << endl;
			cout << "Name:" << truckArr[i].transmission.contact.name << endl;
			cout << "Phone number:" << truckArr[i].transmission.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].transmission.contact.email << endl;
		}
	}
}

void showTruckBody()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].body.title != "") {
			cout << "Title: " << truckArr[i].body.title << endl;
			cout << "Brand" << truckArr[i].body.brand.marka << endl;
			cout << "Model:" << truckArr[i].body.brand.model << endl;
			cout << "Production year:" << truckArr[i].body.brand.year << endl;
			cout << "Body type:" << truckArr[i].body.type.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << truckArr[i].body.type.restyle << endl;
			cout << "Name:" << truckArr[i].body.contact.name << endl;
			cout << "Phone number:" << truckArr[i].body.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].body.contact.email << endl;
		}
	}
}

void showTruckLight()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].light.title != "") {
			cout << "Title: " << truckArr[i].light.title << endl;
			cout << "Brand" << truckArr[i].light.brand.marka << endl;
			cout << "Model:" << truckArr[i].light.brand.model << endl;
			cout << "Production year:" << truckArr[i].light.brand.year << endl;
			cout << "Name:" << truckArr[i].light.contact.name << endl;
			cout << "Phone number:" << truckArr[i].light.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].light.contact.email << endl;
		}
	}
}

void showTruckSuspension()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].suspension.title != "") {
			cout << "Title: " << truckArr[i].suspension.title << endl;
			cout << "Brand" << truckArr[i].suspension.brand.marka << endl;
			cout << "Model:" << truckArr[i].suspension.brand.model << endl;
			cout << "Production year:" << truckArr[i].suspension.brand.year << endl;
			cout << "Condition (1-5):" << truckArr[i].suspension.condition << endl;
			cout << "Catalogue number:" << truckArr[i].suspension.catalogNumb << endl;
			cout << "Name:" << truckArr[i].suspension.contact.name << endl;
			cout << "Phone number:" << truckArr[i].suspension.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].suspension.contact.email << endl;
		}
	}
}

void showTruckWheels()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].wheels.title != "") {
			cout << "Title:" << truckArr[i].wheels.title << endl;
			cout << "Radius:" << truckArr[i].wheels.radius << endl;
			cout << "Season:" << truckArr[i].wheels.season << endl;
			cout << "Size (parameters):" << truckArr[i].wheels.size << endl;
			cout << "Name:" << truckArr[i].wheels.contact.name << endl;
			cout << "Phone number:" << truckArr[i].wheels.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].wheels.contact.email << endl;
		}
	}
}

void showTruckSalon()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].salon.title != "") {
			cout << "Title:" << truckArr[i].salon.title << endl;
			cout << "Brand:" << truckArr[i].salon.brand.marka << endl;
			cout << "Model:" << truckArr[i].salon.brand.model << endl;
			cout << "Production year:" << truckArr[i].salon.brand.year << endl;
			cout << "Condition (1-5):" << truckArr[i].salon.condition << endl;
			cout << "Body type:" << truckArr[i].salon.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << truckArr[i].salon.Bodytype.restyle << endl;
			cout << "Catalogue number:" << truckArr[i].salon.catalogNumb << endl;
			cout << "Name:" << truckArr[i].salon.contact.name << endl;
			cout << "Phone number:" << truckArr[i].salon.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].salon.contact.email << endl;
		}
	}
}

void showTruckElectric()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].elecronic.title != "") {
			cout << "Title:" << truckArr[i].elecronic.title << endl;
			cout << "Brand:" << truckArr[i].elecronic.brand.marka << endl;
			cout << "Model:" << truckArr[i].elecronic.brand.model << endl;
			cout << "Production year:" << truckArr[i].elecronic.brand.year << endl;
			cout << "Body type:" << truckArr[i].elecronic.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << truckArr[i].elecronic.Bodytype.restyle << endl;
			cout << "Catalogue number:" << truckArr[i].elecronic.catalogNumb << endl;
			cout << "Name:" << truckArr[i].elecronic.contact.name << endl;
			cout << "Phone number:" << truckArr[i].elecronic.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].elecronic.contact.email << endl;
		}
	}
}

void showTruckOther()
{
	for (int i = 0; i < countArr; i++)
	{
		if (truckArr[i].other.title != "") {
			cout << "Title:" << truckArr[i].other.title << endl;
			cout << "Brand:" << truckArr[i].other.brand.marka << endl;
			cout << "Model:" << truckArr[i].other.brand.model << endl;
			cout << "Production year:" << truckArr[i].other.brand.year << endl;
			cout << "Name:" << truckArr[i].other.contact.name << endl;
			cout << "Phone number:" << truckArr[i].other.contact.phoneNumb << endl;
			cout << "Email:" << truckArr[i].other.contact.email << endl;
		}
	}
}

void showBusEngine()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].engine.title != "") {
			cout << "Title: " << busArr[i].engine.title << endl;
			cout << "Brand" << busArr[i].engine.brand.marka << endl;
			cout << "Model:" << busArr[i].engine.brand.model << endl;
			cout << "Production year:" << busArr[i].engine.brand.year << endl;
			cout << "Engine volume:" << busArr[i].engine.EnginVol << endl;
			cout << "Petrol type:" << busArr[i].engine.petroltype << endl;
			cout << "Condition (1-5):" << busArr[i].engine.condition << endl;
			cout << "Catalogue number:" << busArr[i].engine.catalogNumb << endl;
			cout << "Name:" << busArr[i].engine.contact.name << endl;
			cout << "Phone number:" << busArr[i].engine.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].engine.contact.email << endl;
		}
	}
}

void showBusTransmission()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].transmission.title != "") {
			cout << "Title: " << busArr[i].transmission.title << endl;
			cout << "Brand" << busArr[i].transmission.brand.marka << endl;
			cout << "Model:" << busArr[i].transmission.brand.model << endl;
			cout << "Production year:" << busArr[i].transmission.brand.year << endl;
			cout << "transmission volume:" << busArr[i].transmission.EnginVol << endl;
			cout << "Petrol type:" << busArr[i].transmission.petroltype << endl;
			cout << "Condition (1-5):" << busArr[i].transmission.condition << endl;
			cout << "Catalogue number:" << busArr[i].transmission.catalogNumb << endl;
			cout << "Name:" << busArr[i].transmission.contact.name << endl;
			cout << "Phone number:" << busArr[i].transmission.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].transmission.contact.email << endl;
		}
	}
}

void showBusBody()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].body.title != "") {
			cout << "Title: " << busArr[i].body.title << endl;
			cout << "Brand" << busArr[i].body.brand.marka << endl;
			cout << "Model:" << busArr[i].body.brand.model << endl;
			cout << "Production year:" << busArr[i].body.brand.year << endl;
			cout << "Body type:" << busArr[i].body.type.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << busArr[i].body.type.restyle << endl;
			cout << "Name:" << busArr[i].body.contact.name << endl;
			cout << "Phone number:" << busArr[i].body.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].body.contact.email << endl;
		}
	}
}

void showBusLight()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].light.title != "") {
			cout << "Title: " << busArr[i].light.title << endl;
			cout << "Brand" << busArr[i].light.brand.marka << endl;
			cout << "Model:" << busArr[i].light.brand.model << endl;
			cout << "Production year:" << busArr[i].light.brand.year << endl;
			cout << "Name:" << busArr[i].light.contact.name << endl;
			cout << "Phone number:" << busArr[i].light.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].light.contact.email << endl;
		}
	}
}

void showBusSuspension()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].suspension.title != "") {
			cout << "Title: " << busArr[i].suspension.title << endl;
			cout << "Brand" << busArr[i].suspension.brand.marka << endl;
			cout << "Model:" << busArr[i].suspension.brand.model << endl;
			cout << "Production year:" << busArr[i].suspension.brand.year << endl;
			cout << "Condition (1-5):" << busArr[i].suspension.condition << endl;
			cout << "Catalogue number:" << busArr[i].suspension.catalogNumb << endl;
			cout << "Name:" << busArr[i].suspension.contact.name << endl;
			cout << "Phone number:" << busArr[i].suspension.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].suspension.contact.email << endl;
		}
	}
}

void showBusWheels()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].wheels.title != "") {
			cout << "Title:" << busArr[i].wheels.title << endl;
			cout << "Radius:" << busArr[i].wheels.radius << endl;
			cout << "Season:" << busArr[i].wheels.season << endl;
			cout << "Size (parameters):" << busArr[i].wheels.size << endl;
			cout << "Name:" << busArr[i].wheels.contact.name << endl;
			cout << "Phone number:" << busArr[i].wheels.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].wheels.contact.email << endl;
		}
	}
}

void showBusSalon()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].salon.title != "") {
			cout << "Title:" << busArr[i].salon.title << endl;
			cout << "Brand:" << busArr[i].salon.brand.marka << endl;
			cout << "Model:" << busArr[i].salon.brand.model << endl;
			cout << "Production year:" << busArr[i].salon.brand.year << endl;
			cout << "Condition (1-5):" << busArr[i].salon.condition << endl;
			cout << "Body type:" << busArr[i].salon.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << busArr[i].salon.Bodytype.restyle << endl;
			cout << "Catalogue number:" << busArr[i].salon.catalogNumb << endl;
			cout << "Name:" << busArr[i].salon.contact.name << endl;
			cout << "Phone number:" << busArr[i].salon.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].salon.contact.email << endl;
		}
	}
}

void showBusElectric()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].elecronic.title != "") {
			cout << "Title:" << busArr[i].elecronic.title << endl;
			cout << "Brand:" << busArr[i].elecronic.brand.marka << endl;
			cout << "Model:" << busArr[i].elecronic.brand.model << endl;
			cout << "Production year:" << busArr[i].elecronic.brand.year << endl;
			cout << "Body type:" << busArr[i].elecronic.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << busArr[i].elecronic.Bodytype.restyle << endl;
			cout << "Catalogue number:" << busArr[i].elecronic.catalogNumb << endl;
			cout << "Name:" << busArr[i].elecronic.contact.name << endl;
			cout << "Phone number:" << busArr[i].elecronic.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].elecronic.contact.email << endl;
		}
	}
}

void showBusOther()
{
	for (int i = 0; i < countArr; i++)
	{
		if (busArr[i].other.title != "") {
			cout << "Title:" << busArr[i].other.title << endl;
			cout << "Brand:" << busArr[i].other.brand.marka << endl;
			cout << "Model:" << busArr[i].other.brand.model << endl;
			cout << "Production year:" << busArr[i].other.brand.year << endl;
			cout << "Name:" << busArr[i].other.contact.name << endl;
			cout << "Phone number:" << busArr[i].other.contact.phoneNumb << endl;
			cout << "Email:" << busArr[i].other.contact.email << endl;
		}
	}
}

void showBikesEngine()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].engine.title != "") {
			cout << "Title: " << bikeArr[i].engine.title << endl;
			cout << "Brand" << bikeArr[i].engine.brand.marka << endl;
			cout << "Model:" << bikeArr[i].engine.brand.model << endl;
			cout << "Production year:" << bikeArr[i].engine.brand.year << endl;
			cout << "Engine volume:" << bikeArr[i].engine.EnginVol << endl;
			cout << "Petrol type:" << bikeArr[i].engine.petroltype << endl;
			cout << "Condition (1-5):" << bikeArr[i].engine.condition << endl;
			cout << "Catalogue number:" << bikeArr[i].engine.catalogNumb << endl;
			cout << "Name:" << bikeArr[i].engine.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].engine.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].engine.contact.email << endl;
		}
	}
}

void showBikeTransmission()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].transmission.title != "") {
			cout << "Title: " << bikeArr[i].transmission.title << endl;
			cout << "Brand" << bikeArr[i].transmission.brand.marka << endl;
			cout << "Model:" << bikeArr[i].transmission.brand.model << endl;
			cout << "Production year:" << bikeArr[i].transmission.brand.year << endl;
			cout << "transmission volume:" << bikeArr[i].transmission.EnginVol << endl;
			cout << "Petrol type:" << bikeArr[i].transmission.petroltype << endl;
			cout << "Condition (1-5):" << bikeArr[i].transmission.condition << endl;
			cout << "Catalogue number:" << bikeArr[i].transmission.catalogNumb << endl;
			cout << "Name:" << bikeArr[i].transmission.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].transmission.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].transmission.contact.email << endl;
		}
	}
}

void showBikeLight()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].light.title != "") {
			cout << "Title: " << bikeArr[i].light.title << endl;
			cout << "Brand" << bikeArr[i].light.brand.marka << endl;
			cout << "Model:" << bikeArr[i].light.brand.model << endl;
			cout << "Production year:" << bikeArr[i].light.brand.year << endl;
			cout << "Name:" << bikeArr[i].light.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].light.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].light.contact.email << endl;
		}
	}
}

void showBikeSuspensin()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].suspension.title != "") {
			cout << "Title: " << bikeArr[i].suspension.title << endl;
			cout << "Brand" << bikeArr[i].suspension.brand.marka << endl;
			cout << "Model:" << bikeArr[i].suspension.brand.model << endl;
			cout << "Production year:" << bikeArr[i].suspension.brand.year << endl;
			cout << "Condition (1-5):" << bikeArr[i].suspension.condition << endl;
			cout << "Catalogue number:" << bikeArr[i].suspension.catalogNumb << endl;
			cout << "Name:" << bikeArr[i].suspension.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].suspension.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].suspension.contact.email << endl;
		}
	}
}

void showBikeWheels()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].wheels.title != "") {
			cout << "Title:" << bikeArr[i].wheels.title << endl;
			cout << "Radius:" << bikeArr[i].wheels.radius << endl;
			cout << "Season:" << bikeArr[i].wheels.season << endl;
			cout << "Size (parameters):" << bikeArr[i].wheels.size << endl;
			cout << "Name:" << bikeArr[i].wheels.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].wheels.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].wheels.contact.email << endl;
		}
	}
}

void showBikeElectric()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].elecronic.title != "") {
			cout << "Title:" << bikeArr[i].elecronic.title << endl;
			cout << "Brand:" << bikeArr[i].elecronic.brand.marka << endl;
			cout << "Model:" << bikeArr[i].elecronic.brand.model << endl;
			cout << "Production year:" << bikeArr[i].elecronic.brand.year << endl;
			cout << "Body type:" << bikeArr[i].elecronic.Bodytype.bodytype << endl;
			cout << "Restyle (1)/ Non-restyle (0):" << bikeArr[i].elecronic.Bodytype.restyle << endl;
			cout << "Catalogue number:" << bikeArr[i].elecronic.catalogNumb << endl;
			cout << "Name:" << bikeArr[i].elecronic.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].elecronic.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].elecronic.contact.email << endl;
		}
	}
}

void showBikeOther()
{
	for (int i = 0; i < countArr; i++)
	{
		if (bikeArr[i].other.title != "") {
			cout << "Title:" << bikeArr[i].other.title << endl;
			cout << "Brand:" << bikeArr[i].other.brand.marka << endl;
			cout << "Model:" << bikeArr[i].other.brand.model << endl;
			cout << "Production year:" << bikeArr[i].other.brand.year << endl;
			cout << "Name:" << bikeArr[i].other.contact.name << endl;
			cout << "Phone number:" << bikeArr[i].other.contact.phoneNumb << endl;
			cout << "Email:" << bikeArr[i].other.contact.email << endl;
		}
	}
}

