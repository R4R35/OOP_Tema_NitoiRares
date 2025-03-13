#include "Canvas.h"
#include <iostream>
#include <cstdarg>

using namespace std;

Canvas::Canvas(int width, int height) {
	latime = width;
	inaltime = height;

	array = new char*[height];
	for (int i = 0;i < height;i++) {
		array[i] = new char[width];
		for (int j = 0;j < width;j++) {
			array[i][j] = ' ';
		}
	}
}
void Canvas::DrawCircle(int x, int y, int ray, char ch) {
	for (int i = 0;i < inaltime;i++) {
		for(int j = 0;j<latime;j++){
			
			double dist = sqrt((j - x) * (j - x) + (i - y) * (i - y));

			if (abs(dist - ray) < 0.7) {
				if (i >= 0 && i < inaltime && j >= 0 && j < latime) {
					array[i][j] = ch;
				}
			}
		}
	}
}

void Canvas::Print() {
	for (int i = 0;i < inaltime;i++) {
		for (int j = 0;j < latime;j++) {
			cout << array[i][j];
		}
		cout << endl;
	}
}

Canvas::~Canvas() {
	for (int i = 0; i < inaltime;i++)
		delete[] array[i];
	delete[] array;
}
void Canvas::FillCircle(int x, int y, int ray, char ch) {
	for (int i = 0;i < inaltime;i++) {
		for (int j = 0;j < latime;j++) {

			double dist = sqrt((j - x) * (j - x) + (i - y) * (i - y));

			if (dist<=ray) {
				array[i][j] = ch;
			}
		}
	}
	
}
void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {

	bool vertical = false;
	if (x1 == x2) {
		vertical = true;
	}

	if (vertical) {
		swap(x1, y1);
		swap(x2, y2);
	}
	if (x1 > x2) {
		swap(x1, x2);
		swap(y1, y2);
	}
	int dx = x2 - x1;
	int dy = abs(y2 - y1);

	int error = dx / 2;
	int sensy = (y1 < y2) ? 1 : -1;
	int y = y1;

	for (int x = x1;x <= x2;x++) {
		if (vertical) {
			if (y >= 0 && y < inaltime && x >= 0 && x < latime) {
				array[x][y] = ch;
			}
		}
		else {
			if (x >= 0 && x < inaltime && y >= 0 && y < latime) {
				array[y][x] = ch;
			}
		}

		error -= dy;
		if (error < 0) {
			y += sensy;
			error += dx;
		}
	}
}
void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
	DrawLine(left, top, right, top, ch);     
	DrawLine(right, top, right, bottom, ch);
	DrawLine(right, bottom, left, bottom, ch); 
	DrawLine(left, bottom, left, top, ch); 
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
	for (int i = left+1;i < right;i++) {
		DrawLine(i,top+1,i,bottom-1,ch);
	}
}

void Canvas::SetPoint(int x, int y, char ch) {
	array[x][y] = ch;
}

void Canvas::Clear() {
	for (int i = 0;i < inaltime;i++) {
		for (int j = 0;j < latime; j++) {
			array[i][j] = ' ';
		}
	}
}

void Canvas::set_pixel(int x, int y, char value) {
	array[x][y] = value;
}

void Canvas::set_pixels(int count, ...) {
	va_list lista;
	va_start(lista, count);
	for (int i = 0;i < count;i++) {
		int x = va_arg(lista, int);
		int y = va_arg(lista, int);
		int value = va_arg(lista, int);

		if (x >= 0 && x < inaltime && y >= 0 && y < latime) {
			array[x][y] = (char)value;
		}
	}
	va_end(lista);
}