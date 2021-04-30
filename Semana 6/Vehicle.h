#pragma once
#include <iostream>

using namespace System;
using namespace std;

class Vehicle {
protected:
	int x, y; //Coordenadas
	//Desplazamiento
	int model;
	int width;
	bool arrive;
	int place;//puesto
	int victories;//nro de victorias

public:
	Vehicle(int x, int y, int model) {
		this->x = x;
		this->y = y;
		this->model = model;
		arrive = false;
		place = 0;
		victories = 0;
	}

	void move() {
		if (x + width <= 70)x += rand() % 3 + 1;
		else arrive = true;
	}

	void increaseVictories() { victories++; }

	int getX() { return x; }
	int getY() { return y; }
	bool getArrive() { return arrive; }
	int getVictories() { return victories; }
	int getPlace() { return place; }

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	void setArrive(bool v) { arrive = v; }
	void setVictories(int v) { victories = v; }
	void setPlace(int v) { place = v; }
};