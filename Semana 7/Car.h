#pragma once
#include <iostream>
#include <string>

using namespace std;

string Brands[7] = { "Acura","Audi","BMW","Chevrolet","Ferrari","McClaren","Renault" };
string Models[6] = { "Titan", "Frontier","Maxima","Murano","Hybrid", "Couper" };

class Car {
private:
	int plate;
	string brand;
	string model;

public:
	Car() {
		plate = rand() % 900000 + 100000;
		brand = Brands[rand() % 7];
		model = Models[rand() % 6];
	}

	~Car(){}

	void getCarInfo() {
		cout << "Plate: " << plate << endl;
		cout << "Brand: " << brand << endl;
		cout << "Model: " << model << endl;
	}
};