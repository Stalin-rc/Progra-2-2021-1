#pragma once
#include "Employee.h"
#include "Secretary.h"
#include "Seller.h"
#include "Car.h"

class ZoneLeader : public Employee {
private:
	int officeNumber;
	Secretary* secretary;
	vector<Seller*> sellers;
	Car car;

public:
	ZoneLeader(){}
	ZoneLeader(string name, string lastName, int DNI, string address, int phone, int salary, Secretary* secretary)
		: Employee(name, lastName, DNI, address, phone, salary) {
		incrementPercentage = 20;
		officeNumber = rand() % 101;
		this->secretary = secretary;
		this->secretary->setSupervisor(this);
	}

	~ZoneLeader(){}

	void setSecretary(Secretary* newSecretary) {
		secretary = newSecretary;
		this->secretary->setSupervisor(this);
	}

	void changeCar() {
		car = Car();
	}

	void addSeller(Seller* s) {
		s->setSupervisor(this);
		sellers.push_back(s);
	}

	void eraseSeller() {
		sellers.pop_back();
	}

	void getZoneLeaderInfo() {
		getEmployeeInfo();
		cout << "Office number: " << officeNumber << endl;
		cout << "Car information: " << endl;
		car.getCarInfo();
		cout << "Secretary: " << secretary->getName() + " " + secretary->getLastName() << endl;

		if (sellers.size() > 0) {
			cout << "The sellers are: " << endl;
			for (int i = 0; i < sellers.size(); i++) {
				cout << sellers[i]->getName() + " " + sellers[i]->getLastName() << endl;
			}
		}
	}
};