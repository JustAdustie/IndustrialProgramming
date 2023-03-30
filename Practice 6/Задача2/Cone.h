#pragma once
class Cone {
protected:
	double x, y, z; // координаты центра основания
	double radius; // радиус основания
	double height; // высота
public:
	// Конструкторы
	Cone(); // конструктор по умолчанию
	Cone(double r, double h); // конструктор с центром в начале координат
	Cone(double x, double y, double z, double r, double h); // произвольный конус
	// Функции доступа
	void setCoordinate(double x, double y, double z);
	void setRadius(double r);
	void setHeight(double h);
	double getRadius();
	double getHeight();
	// Площадь полной поверхности
	double area();
	// Объем
	double volume();
	void print();
};
