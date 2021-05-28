#pragma once

using namespace System::Drawing;

class Hero {
private:
	int x, y; // Coordinates
	int dx, dy; // Movement
	int width, height; 
	int idx, idy;// Indexes

public:
	Hero(int width, int height) {
		this->width = width;
		this->height = height;
		x = 100;
		y = 100;
		dx = dy = 15;
		idx = idy = 0;
	}

	~Hero(){}

	void draw(Graphics^ g, Bitmap^ bmp) {
		Rectangle sectionShown = Rectangle(idx * width, idy * height, width, height);
		Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmp, zoom, sectionShown, GraphicsUnit::Pixel);
	}

	void move(Graphics^ g, char i) {
		switch (i) {
		case 'A':
			if (x > 0) {
				x -= dx;
				idy = 1;
			}
			break;
			
		case 'D':
			if (x + width * 1.0 < g->VisibleClipBounds.Width) {
				x += dx;
				idy = 2;
			}
			break;

		case 'W':
			if (y > 0) {
				y -= dy;
				idy = 3;
			}
			break;

		case 'S':
			if (y + height * 1.0 < g->VisibleClipBounds.Height) {
				y += dy;
				idy = 0;
			}
			break;
		}

		idx++;
		if (idx > 3) idx = 0;
	}
};