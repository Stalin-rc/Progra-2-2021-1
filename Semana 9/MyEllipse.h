#pragma once
#include "Figure.h"

class MyEllipse : public Figure {
public:
	MyEllipse() {}
	~MyEllipse() {}

	void draw(Graphics^ g) {
		SolidBrush^ b = gcnew SolidBrush(Color::FromArgb(rand()%255, rand() % 255, rand() % 255));
		g->FillEllipse(b, x, y, width, height);
	}
};