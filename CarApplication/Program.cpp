#include <iostream>
#include <string>
#include "program.h"
using namespace std;

void program::start()
{
	int input;
	while (true)
	{
		cout << "Wybierz opcje: " << endl;
		cout << "1. Wyswietl wszystkie auta" << endl;
		cout << "2. Wyswietl wszystkie opony" << endl;
		cout << "3. Dodaj auto" << endl;
		cout << "4. Dodaj opone" << endl;
		cout << "5. Usun auto" << endl;
		cout << "6. Usun opone" << endl;
		cout << "Wybierz: " << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			displayCars();
			break;

		case 2:
			displayTires();
			break;
			
		case 3:
			addCar();
			break;

		case 4:
			addTire();
			break;
		case 5:
			deleteCar();
			break;
		case 6:
			deleteTire();
			break;
		default:
			cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
			break;
		}
	}
}

void program::displayCars()
{
	if (productList.size() == 0)
	{
		cout << "Brak aut." << endl;
	}
	else
	{
		cout << "Lista wszystkich aut:" << endl;
	}
	for (int i = 0; i < productList.size(); i++)
	{
		cout << productListTire[i].toString();
	}
}
void program::displayTires()
{	
	if (productListTire.size() == 0)
	{
		cout << "Brak opon." << endl;
	}
	else
	{
		cout << "Lista wszystkich opon:" << endl;
	}
	for (int i = 0; i < productListTire.size(); i++)
	{
		cout << productListTire[i].toString();
	}
}
void program::addCar()
{
	string brand, model, tire;
	long price;

	cout << "Podaj marke samochodu: ";
	cin >> brand;
	cout << "Podaj model samochodu: ";
	cin >> model;
	cout << "Podaj nazwe opony: ";
	cin >> tire;
	cout << "Podaj cene: ";
	cin >> price;

	Car newCar(productList.size(), brand, model, tire, price);
	productList.push_back(newCar);
	cout << "Produkt zostal dodany." << endl;
 }

void program::deleteCar()
{
	int id;
	cout << "Podaj ID auta do usuniecia: " << endl;
	cin >> id;

	auto it = find_if(productList.begin(), productList.end(), [id](const Car& p) {return p.getId() == id;});
	if (it != productList.end())
	{
		productList.erase(it);
		cout << "Auto zostalo usuniete." << endl;
	}
	else
	{
		cout << "Nie znaleziono auta o podanym ID." << endl;
	}
}
void program::addTire()
{
	int tireWidth, tireRatio, tireRimDiameter, tireLoadIndex;
	string tireConstruction, tireSpeedRating;
	long tirePrice;

	cout << "Podaj szerokosc opony: ";
	cin >> tireWidth;
	cout << "Podaj Ratio opony: ";
	cin >> tireRatio;
	cout << "Podaj Rim Diameter opony: ";
	cin >> tireRimDiameter;
	cout << "Podaj Load Index opony: ";
	cin >> tireLoadIndex;
	cout << "Podaj Construction opony: ";
	cin >> tireConstruction;
	cout << "Podaj Speed Rating opony: ";
	cin >> tireSpeedRating;
	cout << "Podaj cene opony: ";
	cin >> tirePrice; 

	Tire newTire(productListTire.size(), tireWidth, tireRatio, tireConstruction, tireRimDiameter, tireLoadIndex, tireSpeedRating, tirePrice);
	productListTire.push_back(newTire);
	cout << "Produkt zostal dodany." << endl;
}
void program::deleteTire()
{
	int tireId;
	cout << "Podaj ID opony do usuniecia";
	cin >> tireId;

	auto it = find_if(productListTire.begin(), productListTire.end(), [tireId](const Tire& p) {return p.getTireId() == tireId;});

	if (it != productListTire.end())
	{
		productListTire.erase(it);
		cout << "Opona zostala usunieta." << endl;
	}
	else
	{
		cout << "Nie znaleziono opony o podanym ID." << endl;
	}
}