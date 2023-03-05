#pragma once
#ifndef RATIONAL_H
#define RATIONAL_H

namespace math {

    class Rational {
    public:
        Rational(int a1 = 0, int b1 = 1); // �����������
        void set(int a1, int b1); // ��������� ��������
        void show() const; // ����� ����� � ���� a/b
    private:
        int a; // ���������
        int b; // �����������
        void simplify(); // ���������� �����
    };

} // namespace math

#endif // RATIONAL_H

