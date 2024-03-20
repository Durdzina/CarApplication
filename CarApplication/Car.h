#pragma once
#include <string>
using namespace std;

class Car 
{
private:
	int id;
	string brand;
	string model;
	string tire;
	long price;
public:
	string toString()
	{
		return "ID:" + to_string(id) + ". brand:" + brand + ", model:" + model + ", tire:" + tire + ", price:" + to_string(price);
	}
	Car(int id, string brand, string model, string tire, long price)
	{
		this->id = id;
		this->brand = brand;
		this->model = model;
		this->tire = tire;
		this->price = price;
	}
	int getId() const
	{
		return id;
	}
};