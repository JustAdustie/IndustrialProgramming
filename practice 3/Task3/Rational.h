#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
public:
    int a, b;
    Rational() : a(0), b(1) {} // конструктор по умолчанию
    Rational(int a1, int b1); // конструктор с параметрами
    void set(int a1, int b1); // установка значений в объект
    void show(); // вывод дроби на экран
    // task 3
    Rational operator+(const Rational& other) const; // addition operator
    friend Rational operator-(const Rational& r1, const Rational& r2); // subtraction operator
    Rational operator++(); // prefix increment operator
    bool operator==(const Rational& other) const; // equality comparison operator
    bool operator>(const Rational& other) const; // greater than comparison operator
    Rational& operator=(const Rational& other); // assignment operator
    ~Rational(); // destructor
};

#endif // RATIONAL_H