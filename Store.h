#pragma once
#include<iostream>
#include<string>

using namespace std;

struct contact
{
	string name;
	string phoneNumb;
	string email;
};
	struct carType
	{
		string bodytype;
		string restyle;

	};
	struct brandCar
	{
		string marka;
		string model;
		string year;
	};
	
	struct engine
	{
		
		string category;
		string title;
		brandCar brand;
		string EnginVol;
		string petroltype;
		string condition;
		string catalogNumb;
		contact contact;
		
	};
	struct transmission
	{
		string category;
		string title;
		brandCar brand;
		string EnginVol;
		string petroltype;
		string condition;
		string catalogNumb;
		contact contact;
		

	};
	struct body
	{
		string category;
		string title;
		brandCar brand;
		carType type;
		string condition;
		contact contact;
		

	};
	struct headlights
	{
		string category;
		string title;
		brandCar brand;
		contact contact;
	};
	struct suspension
	{
		string category;
		string title;
		brandCar brand;
		string condition;
		string catalogNumb;
		contact contact;
	};
	struct wheels
	{

		string category;
		string title;
		string radius;
		string season;
		string size;
		contact contact;
	};
	struct salon
	{
		string category;
		string title;
		brandCar brand;
		string condition;
		carType Bodytype;
		string catalogNumb;
		string material;
		contact contact;
	};
	struct electronic
	{
		string category;
		string title;
		brandCar brand;
		carType Bodytype;
		string catalogNumb;
		contact contact;
	};
	struct other
	{
		string category;
		string title;
		brandCar brand;
		contact contact;
	};

struct user
{
	string login;
	string password;
	contact contact;
};


void initCarsEngine();
void initCarsTransmission();
void initCarsBody();
void initCarsLight();
void initCarsSuspension();
void initCarsWheels();
void initCarsSalon();
void initCarsElectro();
void initCarsOther();
void Remove_if();
void initUser();

void offerNewCar();

void addNewUser();
void authorization();
void searchCar();

void showCarsEngine();
void showCarsTransmission();
void showCarsBody();
void showCarsLight();
void showCarsSuspension();
void showCarsWheels();
void showCarsSalon();
void showCarsElectric();
void showCarsOther();

void mainMenu();
void menu();
void BikeMenu();
string categories(string categories, int choice);
