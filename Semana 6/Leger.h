#pragma once
#include <iostream>
#include "Vehicle.h"

using namespace System;
using namespace std;

class Leger : public Vehicle {
public:
	Leger(int x, int y, int model) : Vehicle(x, y, model) {}
	~Leger(){}

	void draw() {
		if (model == 0) {
			width = 11;
			Console::SetCursorPosition(x, y);     cout << "__";
			Console::SetCursorPosition(x, y + 1); cout << ".-'--`-._";
			Console::SetCursorPosition(x, y + 2); cout << "'-O---O--'";
		}
		else {
			width = 11;
			Console::SetCursorPosition(x, y);     cout << "         ";
			Console::SetCursorPosition(x, y + 1); cout << ".-'--`-._";
			Console::SetCursorPosition(x, y + 2); cout << "'-O---O--'";
		}
	}
};