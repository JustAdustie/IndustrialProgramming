#include "eq2.h"
#include <iostream>
#include <cmath>

// конструктор экземпляра квадратного уравнения
eq2::eq2(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}


void eq2::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}

// возвращает наибольший корень квадратного уравнения, если такой есть, либо 0 и информацию на экран, что корней нет
double eq2::find_X() {
    if (D < 0) {
        std::cout << "No real roots\n";
        return 0;
    }
    else {
        double x1 = (-b + std::sqrt(D)) / (2 * a);
        double x2 = (-b - std::sqrt(D)) / (2 * a);
        return (x1 > x2) ? x1 : x2;
    }
}

// возвращает значение квадратного многочлена с заданными коэффициентами при заданном Х
double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}
