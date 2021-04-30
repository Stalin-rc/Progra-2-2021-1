#pragma once
#include "Vehicle.h"

class Quatre : public Vehicle {
public:
	Quatre(int x, int y, int model) : Vehicle(x, y, model) {}
	~Quatre() {}

	//Erase - Move - Draw
	void draw() {
		if (model == 0) {
			width = 11;
			Console::SetCursorPosition(x, y);     cout << "____|~\\_";
			Console::SetCursorPosition(x, y + 1); cout << "[4x4_|_|-]";
			Console::SetCursorPosition(x, y + 2); cout << "  (_) (_)";
		}
		else {
			width = 16;
			Console::SetCursorPosition(x, y);     cout << " _.-.___\\__";
			Console::SetCursorPosition(x, y + 1); cout << "|  _      _`-.";
			Console::SetCursorPosition(x, y + 2); cout << "'-(_)----(_)--`";
		}
	}
};