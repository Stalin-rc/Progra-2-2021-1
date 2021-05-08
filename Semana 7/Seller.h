#pragma once
#include "Employee.h"
#include "Car.h"

class Seller : public Employee {
private:
	Car car;
	vector<Person*> clients;
	int comissionPercentage;

public:
	Seller() {}
	Seller(string name, string lastName, int DNI, string address, int phone, int salary)
		: Employee(name, lastName, DNI, address, phone, salary) {
		comissionPercentage = 5;
		incrementPercentage = 10;
	}

	~Seller(){}

	void addClient(Person* p) {
		clients.push_back(p);
	}

	void insertClient(int position, Person* p) {
		clients.insert(clients.begin() + position, p); //clients.begin() == 0 
	}

	void eraseClient() {
		clients.pop_back();
	}

	void eraseClientInPosition(int position) {
		clients.erase(clients.begin() + position);
	}

	void changeCar() {
		car = Car();
	}

	void getSellerInfo() {
		getEmployeeInfo();
		cout << "Car information: " << endl;
		car.getCarInfo();
		cout << "Comission percentage: " << comissionPercentage << endl;
		
		if (clients.size() > 0) {
			cout << "The clients are: " << endl;
			for (int i = 0; i < clients.size(); i++) {
				cout << clients[i]->getName() + " " + clients[i]->getLastName() << endl;
			}
		}
	}
};