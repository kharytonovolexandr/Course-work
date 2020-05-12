#include "Store.h"
#include<iostream>
#include<string>
#include<fstream>
#include<list>
#include<algorithm>
#include<vector>

using namespace std;
#define CLEAR system("cls");
#define PAUSE system("pause");
const string carsEngineFile = "CarEngine.txt";
const string carsTransmissionFile = "CarTransmission.txt";
const string carsBodyFile = "CarBody.txt";
const string carsLightFile = "CarLight.txt";
const string carsSuspensFile = "CarSuspension.txt";
const string carsWheelsFile = "CarWheels.txt";
const string carsSalonFile = "CarSalon.txt";
const string carsElectroFile = "CarElectro.txt";
const string carsOtherFile = "CarOther.txt";

const string truckFile = "tempBaseTruck.txt";
const string busFile = "tempBaseBus.txt";
const string bikeFile = "tempBaseBike.txt";
const string Data = "dataBase.txt";
const string Users = "Users.txt";
string login;
string password;
int countArr = 0;
list<user> users;
list<engine> Engine;
list<transmission> Transmission;
list<body> Body;
list<headlights> Light;
list<suspension> Suspension;
list<wheels> Wheels;
list<salon> Salon;
list<electronic> Elecronic;
list<other> Other;

void initCarsEngine()
{
	ifstream fin;
	
	fin.open(carsEngineFile);
	
	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if(isOPen==true) {

		engine temp;
		while (!fin.eof())
		{
			
			getline(fin, temp.category);
			if (temp.category != "")
			{
			getline(fin, temp.title);
			getline(fin, temp.brand.marka);
			getline(fin, temp.brand.model);
			getline(fin, temp.brand.year);
			getline(fin, temp.EnginVol);
			getline(fin, temp.petroltype);
			getline(fin, temp.condition);
			getline(fin, temp.catalogNumb);
			getline(fin, temp.contact.name);
			getline(fin, temp.contact.phoneNumb);
			getline(fin, temp.contact.email);
			Engine.push_back(temp);
			}
			else { break;}
		}
	}
	fin.close();
}
void initCarsTransmission()
{
	ifstream fin;

	fin.open(carsTransmissionFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		transmission temp;
		while (!fin.eof())
		{

			getline(fin, temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin,temp.EnginVol);
				getline(fin, temp.petroltype);
				getline(fin,temp.condition);
				getline(fin, temp.catalogNumb);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Transmission.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsBody()
{
	ifstream fin;

	fin.open(carsBodyFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		body temp;
		while (!fin.eof())
		{

			getline(fin, temp.category);
			if (temp.category != "")
			{
				
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin, temp.type.bodytype);
				getline(fin,temp.type.restyle);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Body.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsLight()
{
	ifstream fin;

	fin.open(carsLightFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		headlights temp;
		while (!fin.eof())
		{

			getline(fin, temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Light.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsSuspension()
{
	ifstream fin;

	fin.open(carsSuspensFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		suspension temp;
		while (!fin.eof())
		{

			getline(fin, temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin,temp.condition);
				getline(fin, temp.catalogNumb);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Suspension.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsWheels()
{
	ifstream fin;

	fin.open(carsWheelsFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		wheels temp;
		while (!fin.eof())
		{

			getline(fin,temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin,temp.radius);
				getline(fin, temp.season);
				getline(fin, temp.size);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Wheels.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsSalon()
{
	ifstream fin;

	fin.open(carsSalonFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		salon temp;
		while (!fin.eof())
		{

			getline(fin,temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin,temp.condition);
				getline(fin, temp.Bodytype.bodytype);
				getline(fin,temp.Bodytype.restyle);
				getline(fin, temp.catalogNumb);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Salon.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsElectro()
{
	ifstream fin;

	fin.open(carsElectroFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		electronic temp;
		while (!fin.eof())
		{

			getline(fin,temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin, temp.Bodytype.bodytype);
				getline(fin,temp.Bodytype.restyle);
				getline(fin, temp.catalogNumb);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Elecronic.push_back(temp);
			}
			else { break; }

		}
	}
	fin.close();
}
void initCarsOther()
{
	ifstream fin;

	fin.open(carsOtherFile);

	bool isOPen = fin.is_open();
	if (isOPen == false)
	{
		cout << "Error" << endl;
	}
	else if (isOPen == true) {

		other temp;
		while (!fin.eof())
		{

			getline(fin,temp.category);
			if (temp.category != "")
			{
				getline(fin, temp.title);
				getline(fin, temp.brand.marka);
				getline(fin, temp.brand.model);
				getline(fin,temp.brand.year);
				getline(fin, temp.contact.name);
				getline(fin, temp.contact.phoneNumb);
				getline(fin, temp.contact.email);
				Other.push_back(temp);
				
			}
			else { break; }

		}
	}
	fin.close();
}

void Remove_if()
{
	string title;
	ofstream fout;
	fout.open(carsEngineFile);
	bool isOpen = fout.is_open();

	if (isOpen == true)
	{
		
		cout << "Write down title (word by word) to delete your announcement: " << endl;
		cin >> title;
		for (user item : users)
		{
			for (engine ItemEng : Engine)
			{
				if (item.contact.name == ItemEng.contact.name)
				{
					/*auto result = remove_if(Engine.begin(), Engine.end(), [](const engine &E)
						{
							return E.title == title;
						});
					Engine.erase(result, Engine.end());*/
					
				}
			
				fout << ItemEng.category << endl;
				fout << ItemEng.title << endl;
				fout << ItemEng.brand.marka << endl;
				fout << ItemEng.brand.model << endl;
				fout << ItemEng.brand.year << endl;
				fout << ItemEng.EnginVol << endl;
				fout << ItemEng.petroltype << endl;
				fout << ItemEng.condition << endl;
				fout << ItemEng.catalogNumb << endl;
				fout << ItemEng.contact.name << endl;
				fout << ItemEng.contact.phoneNumb << endl;
				fout << ItemEng.contact.email << endl;
			}
		}
		
	}
	else
	{
		cout << "ERROR! File not open." << endl;
	}
}

//void initTruck()
//{
//	ifstream fin;
//
//	fin.open(truckFile);
//
//	bool isOPen = fin.is_open();
//	if (isOPen == false)
//	{
//		cout << "Error" << endl;
//	}
//	else if (isOPen == true)
//	{
//
//		truck temp;
//		while (!fin.eof())
//		{
//			fin>> temp.id;
//			if (temp.id != NULL)
//			{
//			getline(fin, temp.engine.title);
//			getline(fin, temp.engine.brand.marka);
//			getline(fin, temp.engine.brand.model);
//			fin>> temp.engine.brand.year;
//			getline(fin,temp.engine.EnginVol;
//			getline(fin, temp.engine.petroltype);
//			fin, temp.engine.condition;
//			getline(fin, temp.engine.catalogNumb);
//			getline(fin, temp.engine.contact.name);
//			getline(fin, temp.engine.contact.phoneNumb);
//			getline(fin, temp.engine.contact.email);
//			getline(fin, temp.transmission.title);
//			getline(fin, temp.transmission.brand.marka);
//			getline(fin, temp.transmission.brand.model);
//			fin>> temp.transmission.brand.year;
//			fin>> temp.transmission.EnginVol;
//			getline(fin, temp.transmission.petroltype);
//			fin>> temp.transmission.condition;
//			getline(fin, temp.transmission.catalogNumb);
//			getline(fin, temp.transmission.contact.name);
//			getline(fin, temp.transmission.contact.phoneNumb);
//			getline(fin, temp.transmission.contact.email);
//			getline(fin, temp.body.title);
//			getline(fin, temp.body.brand.marka);
//			getline(fin, temp.body.brand.model);
//			fin>> temp.body.brand.year;
//			getline(fin, temp.body.type.bodytype);
//			fin>> temp.body.type.restyle;
//			getline(fin, temp.body.contact.name);
//			getline(fin, temp.body.contact.phoneNumb);
//			getline(fin, temp.body.contact.email);
//			getline(fin, temp.light.title);
//			getline(fin, temp.light.brand.marka);
//			getline(fin, temp.light.brand.model);
//			fin>> temp.light.brand.year;
//			getline(fin, temp.light.contact.name);
//			getline(fin, temp.light.contact.phoneNumb);
//			getline(fin, temp.light.contact.email);
//			getline(fin, temp.suspension.title);
//			getline(fin, temp.suspension.brand.marka);
//			getline(fin, temp.suspension.brand.model);
//			fin>> temp.suspension.brand.year;
//			fin>> temp.suspension.condition;
//			getline(fin, temp.suspension.catalogNumb);
//			getline(fin, temp.suspension.contact.name);
//			getline(fin, temp.suspension.contact.phoneNumb);
//			getline(fin, temp.suspension.contact.email);
//			getline(fin, temp.wheels.title);
//			fin>> temp.wheels.radius;
//			getline(fin, temp.wheels.season);
//			getline(fin, temp.wheels.size);
//			getline(fin, temp.wheels.contact.name);
//			getline(fin, temp.wheels.contact.phoneNumb);
//			getline(fin, temp.wheels.contact.email);
//			getline(fin, temp.salon.title);
//			getline(fin, temp.salon.brand.marka);
//			getline(fin, temp.salon.brand.model);
//			fin>> temp.salon.brand.year;
//			fin>> temp.salon.condition;
//			getline(fin, temp.salon.Bodytype.bodytype);
//			fin>> temp.salon.Bodytype.restyle;
//			getline(fin, temp.salon.catalogNumb);
//			getline(fin, temp.salon.contact.name);
//			getline(fin, temp.salon.contact.phoneNumb);
//			getline(fin, temp.salon.contact.email);
//			getline(fin, temp.elecronic.title);
//			getline(fin, temp.elecronic.brand.marka);
//			getline(fin, temp.elecronic.brand.model);
//			fin>> temp.elecronic.brand.year;
//			getline(fin, temp.elecronic.Bodytype.bodytype);
//			fin>> temp.elecronic.Bodytype.restyle;
//			getline(fin, temp.elecronic.Bodytype.bodytype);
//			getline(fin, temp.elecronic.catalogNumb);
//			getline(fin, temp.elecronic.contact.name);
//			getline(fin, temp.elecronic.contact.phoneNumb);
//			getline(fin, temp.elecronic.contact.email);
//			getline(fin, temp.other.title);
//			getline(fin, temp.other.brand.marka);
//			getline(fin, temp.other.brand.model);
//			fin>> temp.other.brand.year;
//			getline(fin, temp.other.contact.name);
//			getline(fin, temp.other.contact.phoneNumb);
//			getline(fin, temp.other.contact.email);
//			truckArr.push_back(temp);
//			}
//			else { break; }
//		}
//	}
//	fin.close();
//}
//void initBus()
//{
//	ifstream fin;
//
//	fin.open(busFile);
//
//	bool isOPen = fin.is_open();
//	if (isOPen == false)
//	{
//		cout << "Error" << endl;
//	}
//	else if (isOPen == true)
//	{
//
//		bus temp;
//		while (!fin.eof())
//		{
//			fin >> temp.id;
//			if (temp.id != NULL)
//			{
//				getline(fin, temp.engine.title);
//				getline(fin, temp.engine.brand.marka);
//				getline(fin, temp.engine.brand.model);
//				fin >> temp.engine.brand.year;
//				fin >> temp.engine.EnginVol;
//				getline(fin, temp.engine.petroltype);
//				fin, temp.engine.condition;
//				getline(fin, temp.engine.catalogNumb);
//				getline(fin, temp.engine.contact.name);
//				getline(fin, temp.engine.contact.phoneNumb);
//				getline(fin, temp.engine.contact.email);
//				getline(fin, temp.transmission.title);
//				getline(fin, temp.transmission.brand.marka);
//				getline(fin, temp.transmission.brand.model);
//				fin >> temp.transmission.brand.year;
//				fin >> temp.transmission.EnginVol;
//				getline(fin, temp.transmission.petroltype);
//				fin >> temp.transmission.condition;
//				getline(fin, temp.transmission.catalogNumb);
//				getline(fin, temp.transmission.contact.name);
//				getline(fin, temp.transmission.contact.phoneNumb);
//				getline(fin, temp.transmission.contact.email);
//				getline(fin, temp.body.title);
//				getline(fin, temp.body.brand.marka);
//				getline(fin, temp.body.brand.model);
//				fin >> temp.body.brand.year;
//				getline(fin, temp.body.type.bodytype);
//				fin >> temp.body.type.restyle;
//				getline(fin, temp.body.contact.name);
//				getline(fin, temp.body.contact.phoneNumb);
//				getline(fin, temp.body.contact.email);
//				getline(fin, temp.light.title);
//				getline(fin, temp.light.brand.marka);
//				getline(fin, temp.light.brand.model);
//				fin >> temp.light.brand.year;
//				getline(fin, temp.light.contact.name);
//				getline(fin, temp.light.contact.phoneNumb);
//				getline(fin, temp.light.contact.email);
//				getline(fin, temp.suspension.title);
//				getline(fin, temp.suspension.brand.marka);
//				getline(fin, temp.suspension.brand.model);
//				fin >> temp.suspension.brand.year;
//				fin >> temp.suspension.condition;
//				getline(fin, temp.suspension.catalogNumb);
//				getline(fin, temp.suspension.contact.name);
//				getline(fin, temp.suspension.contact.phoneNumb);
//				getline(fin, temp.suspension.contact.email);
//				getline(fin, temp.wheels.title);
//				fin >> temp.wheels.radius;
//				getline(fin, temp.wheels.season);
//				getline(fin, temp.wheels.size);
//				getline(fin, temp.wheels.contact.name);
//				getline(fin, temp.wheels.contact.phoneNumb);
//				getline(fin, temp.wheels.contact.email);
//				getline(fin, temp.salon.title);
//				getline(fin, temp.salon.brand.marka);
//				getline(fin, temp.salon.brand.model);
//				fin >> temp.salon.brand.year;
//				fin >> temp.salon.condition;
//				getline(fin, temp.salon.Bodytype.bodytype);
//				fin >> temp.salon.Bodytype.restyle;
//				getline(fin, temp.salon.catalogNumb);
//				getline(fin, temp.salon.contact.name);
//				getline(fin, temp.salon.contact.phoneNumb);
//				getline(fin, temp.salon.contact.email);
//				getline(fin, temp.elecronic.title);
//				getline(fin, temp.elecronic.brand.marka);
//				getline(fin, temp.elecronic.brand.model);
//				fin >> temp.elecronic.brand.year;
//				getline(fin, temp.elecronic.Bodytype.bodytype);
//				fin >> temp.elecronic.Bodytype.restyle;
//				getline(fin, temp.elecronic.Bodytype.bodytype);
//				getline(fin, temp.elecronic.catalogNumb);
//				getline(fin, temp.elecronic.contact.name);
//				getline(fin, temp.elecronic.contact.phoneNumb);
//				getline(fin, temp.elecronic.contact.email);
//				getline(fin, temp.other.title);
//				getline(fin, temp.other.brand.marka);
//				getline(fin, temp.other.brand.model);
//				fin >> temp.other.brand.year;
//				getline(fin, temp.other.contact.name);
//				getline(fin, temp.other.contact.phoneNumb);
//				getline(fin, temp.other.contact.email);
//				busArr.push_back(temp);
//			}
//			else { break; }
//		}
//	}
//	fin.close();
//}
//void initBike()
//{
//	ifstream fin;
//
//	fin.open(bikeFile);
//
//	bool isOPen = fin.is_open();
//	if (isOPen == false)
//	{
//		cout << "Error" << endl;
//	}
//	else if (isOPen == true)
//	{
//
//		bikes temp;
//		while (!fin.eof())
//		{
//			fin >> temp.id;
//			if (temp.id != NULL)
//			{
//				getline(fin, temp.engine.title);
//				getline(fin, temp.engine.brand.marka);
//				getline(fin, temp.engine.brand.model);
//				fin >> temp.engine.brand.year;
//				fin >> temp.engine.EnginVol;
//				getline(fin, temp.engine.petroltype);
//				fin, temp.engine.condition;
//				getline(fin, temp.engine.catalogNumb);
//				getline(fin, temp.engine.contact.name);
//				getline(fin, temp.engine.contact.phoneNumb);
//				getline(fin, temp.engine.contact.email);
//				getline(fin, temp.transmission.title);
//				getline(fin, temp.transmission.brand.marka);
//				getline(fin, temp.transmission.brand.model);
//				fin >> temp.transmission.brand.year;
//				fin >> temp.transmission.EnginVol;
//				getline(fin, temp.transmission.petroltype);
//				fin >> temp.transmission.condition;
//				getline(fin, temp.transmission.catalogNumb);
//				getline(fin, temp.transmission.contact.name);
//				getline(fin, temp.transmission.contact.phoneNumb);
//				getline(fin, temp.transmission.contact.email);
//				getline(fin, temp.light.title);
//				getline(fin, temp.light.brand.marka);
//				getline(fin, temp.light.brand.model);
//				fin >> temp.light.brand.year;
//				getline(fin, temp.light.contact.name);
//				getline(fin, temp.light.contact.phoneNumb);
//				getline(fin, temp.light.contact.email);
//				getline(fin, temp.suspension.title);
//				getline(fin, temp.suspension.brand.marka);
//				getline(fin, temp.suspension.brand.model);
//				fin >> temp.suspension.brand.year;
//				fin >> temp.suspension.condition;
//				getline(fin, temp.suspension.catalogNumb);
//				getline(fin, temp.suspension.contact.name);
//				getline(fin, temp.suspension.contact.phoneNumb);
//				getline(fin, temp.suspension.contact.email);
//				getline(fin, temp.wheels.title);
//				fin >> temp.wheels.radius;
//				getline(fin, temp.wheels.season);
//				getline(fin, temp.wheels.size);
//				getline(fin, temp.wheels.contact.name);
//				getline(fin, temp.wheels.contact.phoneNumb);
//				getline(fin, temp.wheels.contact.email);
//				getline(fin, temp.elecronic.title);
//				getline(fin, temp.elecronic.brand.marka);
//				getline(fin, temp.elecronic.brand.model);
//				fin >> temp.elecronic.brand.year;
//				getline(fin, temp.elecronic.Bodytype.bodytype);
//				fin >> temp.elecronic.Bodytype.restyle;
//				getline(fin, temp.elecronic.Bodytype.bodytype);
//				getline(fin, temp.elecronic.catalogNumb);
//				getline(fin, temp.elecronic.contact.name);
//				getline(fin, temp.elecronic.contact.phoneNumb);
//				getline(fin, temp.elecronic.contact.email);
//				getline(fin, temp.other.title);
//				getline(fin, temp.other.brand.marka);
//				getline(fin, temp.other.brand.model);
//				fin >> temp.other.brand.year;
//				getline(fin, temp.other.contact.name);
//				getline(fin, temp.other.contact.phoneNumb);
//				getline(fin, temp.other.contact.email);
//				bikeArr.push_back(temp);
//			}
//			else { break; }
//		}
//	}
//	fin.close();
//}
				
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

/*void insertCar(cars temp)
{
	cars* tempArr = new cars[countArr + 1];
	for (cars item : carArr)
	{
		tempArr[i] = item;
	}
	countArr++;
	carArr = new cars[countArr];
	for (cars item : carArr)
	{
		item = tempArr[i];
	}
	delete[]tempArr;
}

void insertTruck()
{
	truck* temp = new truck[countArr + 1];
	for (cars item : carArr)
	{
		temp[i] = item;
	}
	countArr++;
	truckArr = new truck[countArr];
	for (cars item : carArr)
	{
		item = temp[i];
	}
	delete[]temp;
}

void insertBus()
{
	bus* temp = new bus[countArr + 1];
	for (cars item : carArr)
	{
		temp[i] = item;
	}
	countArr++;
	busArr = new bus[countArr];
	for (cars item : carArr)
	{
		item = temp[i];
	}
	delete[]temp;
}

void insertBike()
{
	bikes* temp = new bikes[countArr + 1];
	for (cars item : carArr)
	{
		temp[i] = item;
	}
	countArr++;
	bikeArr = new bikes[countArr];
	for (cars item : carArr)
	{
		item = temp[i];
	}
	delete[]temp;
}*/

void offerNewCar()
{
	
	
		//cars newCar;
		string category;
		int actionCar = 0;
		int choice = 0;
		system("cls");
		menu();
		cin >> actionCar;
		switch (actionCar)
		{
		
		case 1:
		{
			engine newEngine;
			ofstream fout;
			fout.open(carsEngineFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{

				
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newEngine.contact.name = item.contact.name;
						newEngine.contact.phoneNumb = item.contact.phoneNumb;
						newEngine.contact.email = item.contact.email;
					}
				}

				mainMenu();
				categories(category, choice);
				newEngine.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newEngine.title);
				cout << "Brand" << endl;
				cin >> newEngine.brand.marka;
				cout << "Model:" << endl;
				cin >> newEngine.brand.model;
				cout << "Production year:" << endl;
				cin >> newEngine.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newEngine.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newEngine.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newEngine.condition;
				cout << "Catalogue number:" << endl;
				cin >> newEngine.catalogNumb;
				Engine.push_back(newEngine);
				
				fout << newEngine.category << endl;
				fout << newEngine.title << endl;
				fout << newEngine.brand.marka << endl;
				fout << newEngine.brand.model << endl;
				fout << newEngine.brand.year << endl;
				fout << newEngine.EnginVol << endl;
				fout << newEngine.petroltype << endl;
				fout << newEngine.condition << endl;
				fout << newEngine.catalogNumb << endl;
				fout << newEngine.contact.name << endl;
				fout << newEngine.contact.phoneNumb << endl;
				fout << newEngine.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
		}break;

		case 2:
		{
			transmission newTransmission;
			ofstream fout;
			fout.open(carsTransmissionFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newTransmission.contact.name = item.contact.name;
						newTransmission.contact.phoneNumb = item.contact.phoneNumb;
						newTransmission.contact.email = item.contact.email;
					}
				}
				
				
				mainMenu();
				categories(category, choice);
				newTransmission.category = categories(category, choice);
				cout << "Title:" << endl;
				(cin.ignore());
				getline(cin, newTransmission.title);
				cout << "Brand:" << endl;
				cin >> newTransmission.brand.marka;
				cout << "Model:" << endl;
				cin >> newTransmission.brand.model;
				cout << "Production year:" << endl;
				cin >> newTransmission.brand.year;
				cout << "Engine volume:" << endl;
				cin >> newTransmission.EnginVol;
				cout << "Petrol type:" << endl;
				cin >> newTransmission.petroltype;
				cout << "Condition (1-5):" << endl;
				cin >> newTransmission.condition;
				cout << "Catalogue number:" << endl;
				cin >> newTransmission.catalogNumb;
				Transmission.push_back(newTransmission);
				
				fout << newTransmission.category << endl;
				fout << newTransmission.title << endl;
				fout << newTransmission.brand.marka << endl;
				fout << newTransmission.brand.model << endl;
				fout << newTransmission.brand.year << endl;
				fout << newTransmission.EnginVol << endl;
				fout << newTransmission.petroltype << endl;
				fout << newTransmission.condition << endl;
				fout << newTransmission.catalogNumb << endl;
				fout << newTransmission.contact.name << endl;
				fout << newTransmission.contact.phoneNumb << endl;
				fout << newTransmission.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
			
		}break;

		case 3:
		{
			body newBody;
			ofstream fout;
			fout.open(carsBodyFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newBody.contact.name = item.contact.name;
						newBody.contact.phoneNumb = item.contact.phoneNumb;
						newBody.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newBody.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newBody.title);
				cout << "Brand:" << endl;
				cin >> newBody.brand.marka;
				cout << "Model:" << endl;
				cin >> newBody.brand.model;
				cout << "Production year:" << endl;
				cin >> newBody.brand.year;
				cout << "Body type:" << endl;
				cin >> newBody.type.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newBody.type.restyle;
				Body.push_back(newBody);
				fout << newBody.category << endl;
				fout << newBody.title << endl;
				fout << newBody.brand.marka << endl;
				fout << newBody.brand.model << endl;
				fout << newBody.brand.year << endl;
				fout << newBody.type.bodytype << endl;
				fout << newBody.type.restyle << endl;
				fout << newBody.contact.name << endl;
				fout << newBody.contact.phoneNumb << endl;
				fout << newBody.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
			
		}break;
		case 4:
		{
			headlights newLight;
			ofstream fout;
			fout.open(carsLightFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newLight.contact.name = item.contact.name;
						newLight.contact.phoneNumb = item.contact.phoneNumb;
						newLight.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newLight.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newLight.title);
				cout << "Brand:" << endl;
				cin >> newLight.brand.marka;
				cout << "Model:" << endl;
				cin >> newLight.brand.model;
				cout << "Production year:" << endl;
				cin >> newLight.brand.year;
				Light.push_back(newLight);
				fout << newLight.category << endl;
				fout << newLight.title << endl;
				fout << newLight.brand.marka << endl;
				fout << newLight.brand.model << endl;
				fout << newLight.brand.year << endl;
				fout << newLight.contact.name << endl;
				fout << newLight.contact.phoneNumb << endl;
				fout << newLight.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
			
		}break;
		case 5:
		{
			suspension newSuspension;
			ofstream fout;
			fout.open(carsSuspensFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newSuspension.contact.name = item.contact.name;
						newSuspension.contact.phoneNumb = item.contact.phoneNumb;
						newSuspension.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newSuspension.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newSuspension.title);
				cout << "Brand" << endl;
				cin >> newSuspension.brand.marka;
				cout << "Model:" << endl;
				cin >> newSuspension.brand.model;
				cout << "Production year:" << endl;
				cin >> newSuspension.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newSuspension.condition;
				cout << "Catalogue number:" << endl;
				cin >> newSuspension.catalogNumb;
				Suspension.push_back(newSuspension);
				fout << newSuspension.category << endl;
				fout << newSuspension.title << endl;
				fout << newSuspension.brand.marka << endl;
				fout << newSuspension.brand.model << endl;
				fout << newSuspension.brand.year << endl;
				fout << newSuspension.condition << endl;
				fout << newSuspension.catalogNumb << endl;
				fout << newSuspension.contact.name << endl;
				fout << newSuspension.contact.phoneNumb << endl;
				fout << newSuspension.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
			

		}break;
		case 6:
		{
			wheels newWheel;
			ofstream fout;
			fout.open(carsWheelsFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newWheel.contact.name = item.contact.name;
						newWheel.contact.phoneNumb = item.contact.phoneNumb;
						newWheel.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newWheel.category = categories(category, choice);
				cout << "Title:" << endl;
				(cin.ignore());
				getline(cin, newWheel.title);
				cout << "Radius:" << endl;
				cin >> newWheel.radius;
				cout << "Season:" << endl;
				cin >> newWheel.season;
				cout << "Size (parameters):" << endl;
				cin >> newWheel.size;
				Wheels.push_back(newWheel);
				fout << newWheel.category << endl;
				fout << newWheel.title << endl;
				fout << newWheel.radius << endl;
				fout << newWheel.season << endl;
				fout << newWheel.size << endl;
				fout << newWheel.contact.name << endl;
				fout << newWheel.contact.phoneNumb << endl;
				fout << newWheel.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
		}break;
		case 7:
		{
			salon newSalon;
			ofstream fout;
			fout.open(carsSalonFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newSalon.contact.name = item.contact.name;
						newSalon.contact.phoneNumb = item.contact.phoneNumb;
						newSalon.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newSalon.category = categories(category, choice);
				cout << "Title:" << endl;
				(cin.ignore());
				getline(cin, newSalon.title);
				cout << "Brand:" << endl;
				cin >> newSalon.brand.marka;
				cout << "Model:" << endl;
				cin >> newSalon.brand.model;
				cout << "Production year:" << endl;
				cin >> newSalon.brand.year;
				cout << "Condition (1-5):" << endl;
				cin >> newSalon.condition;
				cout << "Body type:" << endl;
				cin >> newSalon.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newSalon.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newSalon.catalogNumb;
				Salon.push_back(newSalon);
				fout << newSalon.category << endl;
				fout << newSalon.title << endl;
				fout << newSalon.brand.marka << endl;
				fout << newSalon.brand.model << endl;
				fout << newSalon.brand.year << endl;
				fout << newSalon.condition << endl;
				fout << newSalon.Bodytype.bodytype << endl;
				fout << newSalon.Bodytype.restyle << endl;
				fout << newSalon.catalogNumb << endl;
				fout << newSalon.contact.name << endl;
				fout << newSalon.contact.phoneNumb << endl;
				fout << newSalon.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
		}break;
		case 8:
		{
			electronic newElect;
			ofstream fout;
			fout.open(carsElectroFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newElect.contact.name = item.contact.name;
						newElect.contact.phoneNumb = item.contact.phoneNumb;
						newElect.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newElect.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newElect.title);
				cout << "Brand" << endl;
				cin >> newElect.brand.marka;
				cout << "Model:" << endl;
				cin >> newElect.brand.model;
				cout << "Production year:" << endl;
				cin >> newElect.brand.year;
				cout << "Body type:" << endl;
				cin >> newElect.Bodytype.bodytype;
				cout << "Restyle (1)/ Non-restyle (0):" << endl;
				cin >> newElect.Bodytype.restyle;
				cout << "Catalogue number:" << endl;
				cin >> newElect.catalogNumb;
				Elecronic.push_back(newElect);
				fout << newElect.category << endl;
				fout << newElect.title << endl;
				fout << newElect.brand.marka << endl;
				fout << newElect.brand.model << endl;
				fout << newElect.brand.year << endl;
				fout << newElect.Bodytype.bodytype << endl;
				fout << newElect.Bodytype.restyle << endl;
				fout << newElect.catalogNumb << endl;
				fout << newElect.contact.name << endl;
				fout << newElect.contact.phoneNumb << endl;
				fout << newElect.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
		}break;
		case 9:
		{
			other newOther;
			ofstream fout;
			fout.open(carsOtherFile, fstream::app);
			bool isOpen = fout.is_open();

			if (isOpen == true)
			{
				for (user item : users)
				{
					if (item.login == login && item.password == password)
					{
						newOther.contact.name = item.contact.name;
						newOther.contact.phoneNumb = item.contact.phoneNumb;
						newOther.contact.email = item.contact.email;
					}
				}
				
				mainMenu();
				categories(category, choice);
				newOther.category = categories(category, choice);
				cout << "Title" << endl;
				(cin.ignore());
				getline(cin, newOther.title);
				cout << "Brand" << endl;
				cin >> newOther.brand.marka;
				cout << "Model:" << endl;
				cin >> newOther.brand.model;
				cout << "Production year:" << endl;
				cin >> newOther.brand.year;
				Other.push_back(newOther);
				fout << newOther.category << endl;
				fout << newOther.title << endl;
				fout << newOther.brand.marka << endl;
				fout << newOther.brand.model << endl;
				fout << newOther.brand.year << endl;
				fout << newOther.contact.name << endl;
				fout << newOther.contact.phoneNumb << endl;
				fout << newOther.contact.email << endl;
			}
			else
			{
				cout << "ERROR! File not open." << endl;
			}
		}break;
		
		case 0:
		{
			cout << "Good bye!" << endl;
		}break;
		default:
			break;
		}
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
	int action = 0;
	menu();
	cin >> action;
	switch (action)
	{
	case 1:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (engine item : Engine)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsEngine();
				PAUSE

			}
		}
	}break;
	case 2:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (transmission item : Transmission)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsTransmission();
				PAUSE
			}
		}
	}break;
	case 3:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (body item : Body)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsBody();
				PAUSE
			}
		}
	}break;
	case 4:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (headlights item : Light)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsLight();
				PAUSE
			}
		}
	}break;
	case 5:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (suspension item : Suspension)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsSuspension();
				PAUSE
			}
		}
	}break;
	case 6:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (wheels item : Wheels)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsWheels();
				PAUSE
			}
		}
	}break;
	case 7:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (salon item : Salon)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsSalon();
				PAUSE
			}
		}
	}break;
	case 8:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (electronic item : Elecronic)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsElectric();
				PAUSE
			}
		}
	}break;
	case 9:
	{
		cout << "Enter text for search: " << endl;
		cin >> text;
		for (other item : Other)
		{
			if (item.title.find(text) != string::npos)
			{
				showCarsOther();
				PAUSE
			}
		}
	}break;
	case 0:
	{

	}break;
	default:
		break;


	}
}

string categories(string category, int choice)
{
	cin >> choice;
	if (choice == 1)
	{
		category = "cars";
	}
	else if (choice == 2)
	{
		category = "truck";
	}
	else if (choice == 3)
	{
		category = "bus";
	}
	else if (choice == 4)
	{
		category = "bike";
	}
	else if (choice == 5)
	{
		category = "tractor";
	}
	else { }
	return category;
}

void showCarsEngine()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category,choice);
		for (engine item : Engine)
		{
			if (item.category == categories(category, choice))
			{
				if (item.title != "") {
					
					cout << "Title: " << item.title << endl;
					cout << "Brand: " << item.brand.marka << endl;
					cout << "Model: " << item.brand.model << endl;
					cout << "Production year: " << item.brand.year << endl;
					cout << "Engine volume: " << item.EnginVol << endl;
					cout << "Petrol type: " << item.petroltype << endl;
					cout << "Condition (1-5): " << item.condition << endl;
					cout << "Catalogue number: " << item.catalogNumb << endl;
					cout << "Name: " << item.contact.name << endl;
					cout << "Phone number: " << item.contact.phoneNumb << endl;
					cout << "Email: " << item.contact.email << endl;
				}
			}
		}
	
}

void showCarsTransmission()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (transmission item : Transmission)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "transmission volume: " << item.EnginVol << endl;
				cout << "Petrol type: " << item.petroltype << endl;
				cout << "Condition (1-5): " << item.condition << endl;
				cout << "Catalogue number: " << item.catalogNumb << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsBody()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (body item : Body) {
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Body type: " << item.type.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0): " << item.type.restyle << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsLight()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (headlights item : Light)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsSuspension()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (suspension item : Suspension)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Condition (1-5): " << item.condition << endl;
				cout << "Catalogue number: " << item.catalogNumb << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsWheels()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (wheels item : Wheels)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Radius: " << item.radius << endl;
				cout << "Season: " << item.season << endl;
				cout << "Size (parameters): " << item.size << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsSalon()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (salon item : Salon)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Condition (1-5): " << item.condition << endl;
				cout << "Body type: " << item.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0): " << item.Bodytype.restyle << endl;
				cout << "Catalogue number: " << item.catalogNumb << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsElectric()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (electronic item : Elecronic)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Body type: " << item.Bodytype.bodytype << endl;
				cout << "Restyle (1)/ Non-restyle (0): " << item.Bodytype.restyle << endl;
				cout << "Catalogue number: " << item.catalogNumb << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void showCarsOther()
{
	int choice = 0;
	string category;
	mainMenu();
	categories(category, choice);
	for (other item : Other)
	{
		if (item.category == categories(category, choice)) {
			if (item.title != "") {
				cout << "Title: " << item.title << endl;
				cout << "Brand: " << item.brand.marka << endl;
				cout << "Model: " << item.brand.model << endl;
				cout << "Production year: " << item.brand.year << endl;
				cout << "Name: " << item.contact.name << endl;
				cout << "Phone number: " << item.contact.phoneNumb << endl;
				cout << "Email: " << item.contact.email << endl;
			}
		}
	}
}

void mainMenu()
{
	cout << "Choose category: " << endl;
	cout << "1. Cars: " << endl;
	cout << "2. Trucks: " << endl;
	cout << "3. Buses/miniven: " << endl;
	cout << "4. Bikes: " << endl;
	cout << "5. Tractors: " << endl;
	
}

