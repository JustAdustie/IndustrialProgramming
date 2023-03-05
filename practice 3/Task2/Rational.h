#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

namespace math {

    class Rational {
    public:
        Rational(int a1 = 0, int b1 = 1); // конструктор
        void set(int a1, int b1); // установка значений
        void show() const; // вывод дроби в виде a/b
    private:
        int a; // числитель
        int b; // знаменатель
        void simplify(); // сокращение дроби
    };

} // namespace math

#endif // RATIONAL_H

