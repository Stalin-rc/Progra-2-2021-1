#pragma once
#include "Person.h"

class Employee : public Person {
protected:
	int yearsWorked;
	int phone;
	int salary;
	int incrementPercentage; //Porcentaje de incremento de salario anual

	Employee* supervisor;

public:
	Employee(){}
	Employee(string name, string lastName, int DNI, string address, int phone, int salary)
		: Person(name, lastName, DNI, address) {
		yearsWorked = rand() % 11;
		this->phone = phone;
		this->salary = salary;
		supervisor = NULL;
	}

	~Employee(){}

	void getEmployeeInfo() {
		getPersonInfo();
		cout << "Years worked: " << yearsWorked << endl;
		cout << "Phone: " << phone << endl;
		cout << "Salary: " << salary << endl;

		if (supervisor != NULL) {
			cout << "Supervisor: " << supervisor->getName() + " " << supervisor->getLastName() << endl;
		}
		else {
			cout << "Supervisor: " << "No supervisor asigned" << endl;
		}
	}

	void setSupervisor(Employee* newSupervisor) {
		supervisor = newSupervisor;
	}

	void increaseSalary() {
		salary += double(incrementPercentage) / 100 * salary;
	}
};