#pragma once
#include <vector>
#include "Car.h"
using namespace std;

class program
{
public:
	void start();

private:
	vector<Car> productList = {};
	void displayProducts();
	void deleteProduct();
	void addProduct();
};