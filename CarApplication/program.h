#pragma once
#include <vector>
#include "Car.h"
#include "Tire.h"
using namespace std;

class program
{
public:
	void start();

private:
	vector<Car> productList = {};
	vector<Tire> productListTire = {};
	void displayCars();
	void displayTires();
	void deleteCar();
	void addCar();
	void addTire();
	void deleteTire();
};