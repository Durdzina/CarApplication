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
		cout << "2. Dodaj produkt" << endl;
		cout << "3. Usun produkt" << endl;
		cout << "Wybierz: " << endl;
		cin >> input;

		switch (input)
		{
		case 1:
			displayProducts();
			break;
			
		case 2:
			addProduct();
			break;

		case 3:
			deleteProduct();
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
void program::addProduct()
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

void program::deleteProduct()
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