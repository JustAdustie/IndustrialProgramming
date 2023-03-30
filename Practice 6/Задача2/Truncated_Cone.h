#pragma once
#include "Cone.h"
#include <iostream>

class Truncated_Cone : public Cone
{
protected:
	double radius2; // радиус основания

public:
	Truncated_Cone(); // Конструктор по умолчанию
	Truncated_Cone(double r, double r2, double h); // конструктор с центром в начале координат
	Truncated_Cone(double x, double y, double z, double r, double r2, double h); // произвольный конус
	// Функции доступа
	void setCoordinate(double x, double y, double z);
	void setRadius(double r);
	void setHeight(double h);
	void setRadius2(double r2);
	double getRadius2();
	// Площадь полной поверхности
	double area();
	// Объем
	double volume();

	// Перегрузка операторов ввода/вывода
	friend std::ostream& operator<<(std::ostream& out,Truncated_Cone cone);
	friend std::istream& operator>>(std::istream& in, Truncated_Cone cone);

	// Перегрузка операторов сравнения
	bool operator==(Truncated_Cone cone);
	bool operator!=(Truncated_Cone cone);
	bool operator>(Truncated_Cone cone);
	bool operator<(Truncated_Cone cone);
	bool operator>=(Truncated_Cone cone);
	bool operator<=(Truncated_Cone cone);
};

