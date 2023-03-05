#include "Rational.h"
#include <iostream>
using namespace std;




// Конструктор
Rational::Rational(int a1, int b1) {
    if (b1 == 0) {
        throw "Знаменатель не может быть равен 0";
    }
    if (a1 > b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }
    // Сокращение дроби
    for (int i = b; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
            break;
        }
    }


  

}



int gcd(int a, int b) { // recursive function to find the greatest common divisor
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


// Установка значений
void Rational::set(int a1, int b1) {
    if (b1 == 0) {
        throw "Знаменатель не может быть равен 0";
    }
    if (a1 > b1) {
        a = a1 % b1;
        b = b1;
    }
    else {
        a = a1;
        b = b1;
    }
    // Сокращение дроби
    for (int i = b; i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
            break;
        }
    }
}

// Вывод дроби
void Rational::show() {
    cout << a << "/" << b << endl;
}




Rational Rational::operator+(const Rational& other) const {
    Rational result(a * other.b + b * other.a, b * other.b);
    return result;
}

Rational operator-(const Rational& r1, const Rational& r2) {
    Rational result(r1.a * r2.b - r1.b * r2.a, r1.b * r2.b);
    return result;
}

Rational Rational::operator++() {
    a += b;
    return *this;
}

bool Rational::operator==(const Rational& other) const {
    return a == other.a && b == other.b;
}

bool Rational::operator>(const Rational& other) const {
    return a * other.b > other.a * b;
}

Rational& Rational::operator=(const Rational& other) {
    if (this == &other)
        return *this;
    a = other.a;
    b = other.b;
    return *this;
}

Rational::~Rational() {
    // nothing to do here
}


    