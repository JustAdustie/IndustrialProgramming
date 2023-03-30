#include "Truncated_Cone.h"
#include <iostream>
#include <cmath>

const double pi = 3.14159265;

Truncated_Cone::Truncated_Cone()
{
    x = y = z = radius = height = 0;
}

Truncated_Cone::Truncated_Cone(double r, double r2, double h)
{
    x = y = z = 0;
    radius = r;
    radius2 = r2;
    height = h;
}

Truncated_Cone::Truncated_Cone(double x, double y, double z, double r, double r2, double h)
{
    this->x = x;
	this->y = y;
	this->z = z;
	radius = r;
	radius2 = r2;
	height = h;
}

void Truncated_Cone::setCoordinate(double x, double y, double z)
{
    this->x = x;
    this->y = y;
    this->z = z;
}

void Truncated_Cone::setRadius(double r)
{
    radius = r;
}

void Truncated_Cone::setHeight(double h)
{
    height = h;
}

void Truncated_Cone::setRadius2(double r2)
{
    radius2 = r2;
}

double Truncated_Cone::getRadius2()
{
    return radius2;
}

double Truncated_Cone::area()
{
    double l1 = sqrt(height * height + radius * radius);
    double l2 = sqrt(height * height + radius2 * radius2);
    return pi * (radius + radius2) * (l1 + l2);
}

double Truncated_Cone::volume()
{
    return pi * height * (radius * radius + radius2 * radius2 + radius * radius2) / 3;
}

bool Truncated_Cone::operator==(Truncated_Cone cone)
{
    if (this->volume() == cone.volume()) return true;
	else return false;
}

bool Truncated_Cone::operator!=(Truncated_Cone cone)
{
    if (this->volume() != cone.volume()) return true;
    else return false;
}

bool Truncated_Cone::operator>(Truncated_Cone cone)
{
    if (this->volume() > cone.volume()) return true;
	else return false;
}

bool Truncated_Cone::operator<(Truncated_Cone cone)
{
    if (this->volume() < cone.volume()) return true;
	else return false;
}

bool Truncated_Cone::operator>=(Truncated_Cone cone)
{
    if (this->volume() >= cone.volume()) return true;
    else return false;
}

bool Truncated_Cone::operator<=(Truncated_Cone cone)
{
    if (this->volume() <= cone.volume()) return true;
	else return false;
}

std::ostream& operator<<(std::ostream& out, Truncated_Cone cone)
{
    out << std::endl;
    out << "Координаты центра: (" << cone.x << ", " << cone.y << ", " << cone.z << ")" << std::endl;
    out << "Радиус основания: " << cone.radius << std::endl;
    out << "Радиус верхней поверхности: " << cone.radius2 << std::endl;
    out << "Высота: " << cone.height << std::endl;
    out << "Площадь полной поверхности: " << cone.area() << std::endl;
    out << "Объем: " << cone.volume() << std::endl;

    return out;
}

std::istream& operator>>(std::istream& in, Truncated_Cone cone)
{
    std::cout << "Введите координаты центра (x,y,z): ";
	in >> cone.x >> cone.y >> cone.z;
	std::cout << "Введите радиус основания: ";
	in >> cone.radius;
	std::cout << "Введите радиус верхней поверхности: ";
	in >> cone.radius2;
	std::cout << "Введите высоту: ";
	in >> cone.height;
	return in;
}
