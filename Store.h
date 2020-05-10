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
		bool restyle;

	};
	struct brandCar
	{
		string marka;
		string model;
		int year;
	};
	
	struct engine
	{
		int id;
		string category;
		string title;
		brandCar brand;
		float EnginVol;
		string petroltype;
		int condition;
		string catalogNumb;
		contact contact;
		
	};
	struct transmission
	{
		int id;
		string category;
		string title;
		brandCar brand;
		float EnginVol;
		string petroltype;
		int condition;
		string catalogNumb;
		contact contact;
		

	};
	struct body
	{
		int id;
		string category;
		string title;
		brandCar brand;
		carType type;
		int condition;
		contact contact;
		

	};
	struct headlights
	{
		int id;
		string category;
		string title;
		brandCar brand;
		contact contact;
	};
	struct suspension
	{
		int id;
		string category;
		string title;
		brandCar brand;
		int condition;
		string catalogNumb;
		contact contact;
	};
	struct wheels
	{
		int id;
		string category;
		string title;
		int radius;
		string season;
		string size;
		contact contact;
	};
	struct salon
	{
		int id;
		string category;
		string title;
		brandCar brand;
		int condition;
		carType Bodytype;
		string catalogNumb;
		string material;
		contact contact;
	};
	struct electronic
	{
		int id;
		string category;
		string title;
		brandCar brand;
		carType Bodytype;
		string catalogNumb;
		contact contact;
	};
	struct other
	{
		int id;
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
