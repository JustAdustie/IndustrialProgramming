#include "Rational.h"
#include <iostream>
namespace math {

    // конструктор
    Rational::Rational(int a1, int b1) {
        if (b1 == 0) {
            throw std::invalid_argument("denominator cannot be zero");
        }
        if (a1 > b1) {
            a1 %= b1;
        }
        a = a1;
        b = b1;
        simplify();


    }

    // установка значений
    void Rational::set(int a1, int b1) {
        if (b1 == 0) {
            throw std::invalid_argument("denominator cannot be zero");
        }
        if (a1 > b1) {
            a1 %= b1;
        }
        a = a1;
        b = b1;
        simplify();
    }

    // вывод дроби в виде a/b
    void Rational::show() const {
        std::cout << a << "/" << b;
    }

    void Rational::simplify() {
        int divisor = 2;
        while (divisor <= std::min(a, b)) {
            if (a % divisor == 0 && b % divisor == 0) {
                a /= divisor;
                b /= divisor;
            }
            else {
                divisor++;
            }
        }
    }



} // namespace math