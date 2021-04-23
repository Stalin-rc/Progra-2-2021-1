#pragma once
#include <iostream>
#include <string>
#include "Date.h"

using namespace std;

class Ticket {
protected:
	int code;
	int price;
	Date date;

public: 
	Ticket() {
		code = rand() % 9999999 + 10000000;
		price = rand() % 9999999 + 10000000;
	}

	~Ticket(){}

	int getCode() { return code; }
	int getPrice() { return price; }
	
	int getDay() { return date.getDay(); }
	int getMonth() { return date.getMonth(); }
	int getYear() { return date.getYear(); }

	void getTicketInfo() {
		cout << "--Ticket--" << endl;
		cout << "Code: " << code << endl;
		cout << "Price: " << price << endl;
		cout << "Date: " << date.getCompleteDate() << endl;
	}
};