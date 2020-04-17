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
		string title;
		brandCar brand;
		carType type;
		int condition;
		contact contact;
	};
	struct headlights
	{
		string title;
		brandCar brand;
		contact contact;
	};
	struct suspension
	{
		string title;
		brandCar brand;
		int condition;
		string catalogNumb;
		contact contact;
	};
	struct wheels
	{
		string title;
		int radius;
		string season;
		string size;
		contact contact;
	};
	struct salon
	{
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
		string title;
		brandCar brand;
		carType Bodytype;
		string catalogNumb;
		contact contact;
	};
	struct other
	{
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

struct cars
{
	int id;
	brandCar brandCar;
	engine engine;
	transmission transmission;
	body body;
	headlights light;
	suspension suspension;
	wheels wheels;
	salon salon;
	electronic elecronic;
	other other;
};
struct truck
{
	int id;
	brandCar brandCar;
	engine engine;
	transmission transmission;
	body body;
	headlights light;
	suspension suspension;
	wheels wheels;
	salon salon;
	electronic elecronic;
	other other;
};
struct bus
{
	int id;
	brandCar brandCar;
	engine engine;
	transmission transmission;
	body body;
	headlights light;
	suspension suspension;
	wheels wheels;
	salon salon;
	electronic elecronic;
	other other;
};
struct bikes
{
	int id;
	brandCar brandCar;
	engine engine;
	transmission transmission;
	headlights light;
	suspension suspension;
	wheels wheels;
	electronic elecronic;
	other other;
};
struct vehicle
{
	int id;
	cars car;
	truck truck;
	bus bus;
	bikes bike;
};
void init();
void initUser();
void showCars();
void showTrucks();
void showBus();
void showBikes();
void insert();
void addNew();
void offerNew();
void addNewUser();
void authorization();