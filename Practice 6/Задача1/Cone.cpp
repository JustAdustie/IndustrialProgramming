#include "Cone.h"
#include <iostream>
#include <cmath>
#include <windows.h>

const double pi = 3.14159265;

// Конструктор по умолчанию
Cone::Cone() {
	x = y = z = radius = height = 0;
}

// Конструктор с центром в начале координат
Cone::Cone(double r, double h) {
	x = y = z = 0.0;
	radius = r;
	height = h;
}

// Конструктор для Cone
Cone::Cone(double a, double b, double c, double r, double h) {
	x = a;
	y = b;
	z = c;
	radius = r;
	height = h;
}

// Функции доступа
void Cone::setCoordinate(double a, double b, double c) {
	x = a;
	y = b;
	z = c;
}

void Cone::setRadius(double r) {
	radius = r;
}

void Cone::setHeight(double h) {
	height = h;
}

double Cone::getRadius() {
	return radius;
}

double Cone::getHeight() {
	return height;
}

// Площадь полной поверхности
double Cone::area() {
	double l = sqrt(height * height + radius * radius);
	return pi * radius * (radius + l);
}

// Объем
double Cone::volume() {
	return pi * radius * radius * height / 3;
}

// Вывод
void Cone::print() {
	std::cout << "Координаты центра основания: " << x << " " << y << " " << z << std::endl;
	std::cout << "Радиус основания: " << radius << std::endl;
	std::cout << "Высота конуса: " << height << std::endl;
}