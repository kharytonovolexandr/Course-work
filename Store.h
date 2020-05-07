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
struct something
{
	int id;
	string some;
};
struct cars
{
	int id=0;
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
void initCars();
void initUser();
void insertCar();
void insertTruck();
void insertBus();
void insertBike();
void offerNewBus();
void addNew();
void offerNewCar();
void offerNewTruck();
void offerNewBike();
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
void showTruckEngine();
void showTruckTransmission();
void showTruckBody();
void showTruckLight();
void showTruckSuspension();
void showTruckWheels();
void showTruckSalon();
void showTruckElectric();
void showTruckOther();
void showBusEngine();
void showBusTransmission();
void showBusBody();
void showBusLight();
void showBusSuspension();
void showBusWheels();
void showBusSalon();
void showBusElectric();
void showBusOther();
void showBikesEngine();
void showBikeTransmission();
void showBikeLight();
void showBikeSuspensin();
void showBikeWheels();
void showBikeElectric();
void showBikeOther();
void menu();
void BikeMenu();
void addSome();
void showSome();
void initSomething();