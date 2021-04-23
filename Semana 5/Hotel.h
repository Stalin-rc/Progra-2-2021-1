#pragma once
#include <iostream>
#include <string>

using namespace std;

string Continents[5] = { "America", "Africa", "Asia", "Europe", "Oceania" };
string Names[5] = { "Marriot", "Westin","Perkin","BigHouse","Paris" };
string Types[4] = { "Resort", "Airport", "Suite","Bussiness" };

class Hotel {
protected:
	string name;
	string location;
	string type;
	int stars;

public:
	Hotel() {
		name = Names[rand() % 5];
		location = Continents[rand() % 5];
		type = Types[rand() % 4];
		stars = rand() % 6;
	}

	~Hotel(){}

	string getName() { return name; }
	string getLocation() { return location; }
	string getType() { return type; }
	int getStars() { return stars; }

	void getHotelInfo() {
		cout << "--Hotel--" << endl;
		cout << "Name: " << name << endl;
		cout << "Location: " << location << endl;
		cout << "Type: " << type << endl;
		cout << "Stars: " << stars << endl;
	}

};