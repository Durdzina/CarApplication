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
		cout << "1. Wyswietl wszyskie produkty" << endl;
		cout << "2. Dodaj auto" << endl;
		cout << "3. Usun auto" << endl;
		cout << "4. Dodaj opone" << endl;
		cout << "5. Usun opone" << endl;
		cout << "Wybierz: " << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			displayProducts();
			break;
			
		case 2:
			addCar();
			break;

		case 3:
			deleteCar();
			break;
		case 4:
			addTire();
			break;
		case 5:
			deleteTire();
			break;
		default:
			cout << "Niepoprawny wybor. Sprobuj ponownie." << endl;
			break;
		}
	}
}

void program::displayProducts()
{
	cout << "Lista wszystkich produktow:" << endl;
	for (int i = 0; i < productList.size(); i++)
	{
		cout << productList[i].toString();
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
	cout << "Podaj ID produktu do usuniecia: ";
	cin >> id;

	auto it = find_if(productList.begin(), productList.end(), [id](const Car& p) {return p.getId() == id;});
	if (it != productList.end())
	{
		productList.erase(it);
		cout << "Produkt zostal usuniety." << endl;
	}
	else
	{
		cout << "Nie znaleziono produktu o podanym ID." << endl;
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

	Tire newTire(productListTire.size(), tireWidth, tireRatio, tireRimDiameter, tireLoadIndex, tireConstruction, tireSpeedRating, tirePrice);
	productListTire.push_back(newTire);
	cout << "Produkt zostal dodany." << endl;
}
void program::deleteTire()
{

}