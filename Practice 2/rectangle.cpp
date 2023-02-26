#include <iostream>
#include <cmath>
using namespace std;

class figure {
private:
    float x1, x2, x3, x4, y1, y2, y3, y4, S, P;

public:
    figure() {}

    figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4) {
        this->x1 = x1;
        this->x2 = x2;
        this->x3 = x3;
        this->x4 = x4;
        this->y1 = y1;
        this->y2 = y2;
        this->y3 = y3;
        this->y4 = y4;


        float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float c = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
        P = a + b + c + d;
        float s = (a + b + c + d) / 2;
        S = sqrt((s - a) * (s - b) * (s - c) * (s - d));
    }

    void show() {
        cout << "Вершины: (" << x1 << ", " << y1 << "), (" << x2 << ", " << y2 << "), (" << x3 << ", " << y3 << "), (" << x4 << ", " << y4 << ")" << endl;
        cout << "Периметр: " << P << endl;
        cout << "Площадь: " << S << endl;
    }

    bool is_prug() {
        float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float d3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));

        return (d1 == d3 && d2 == d4);
    }

    bool is_square() {
        float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float d3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));

        return (d1 == d2 && d2 == d3 && d3 == d4 && d4 == d1);
    }

    bool is_romb() {
        float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float d3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));
        return (d1 == d2 && d2 == d3 && d3 == d4 && d4 != d1);
    }

    bool is_in_circle() {
        float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float d3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));

        float s = (d1 + d2 + d3 + d4) / 2;
        float R = (d1 * d2 * d3 * d4) / (4 * S);

        float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float b = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));

        float D = sqrt(pow((a + b), 2) + 8 * pow(S, 2)) / 2;

        return (R >= D / 2);
    }

    bool is_out_circle() {
        float d1 = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float d2 = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
        float d3 = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));
        float d4 = sqrt(pow((x1 - x4), 2) + pow((y1 - y4), 2));

        float a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
        float b = sqrt(pow((x4 - x3), 2) + pow((y4 - y3), 2));

        float D = sqrt(pow((a + b), 2) + 8 * pow(S, 2)) / 2;

        return (d1 <= D / 2 && d2 <= D / 2 && d3 <= D / 2 && d4 <= D / 2);
    }
};

int main() {
    float x1, x2, x3, x4, y1, y2, y3, y4;
    figure f[3];
    for (int i = 0; i < 3; i++) {
        cout << "x и y координаты:" << endl;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        f[i] = figure(x1, x2, x3, x4, y1, y2, y3, y4);

        cout << "Прямоугольник " << i + 1 << endl;
        f[i].show();

        if (f[i].is_prug()) {
            cout << "Это прямоугольник" << endl;
        }
        else {
            cout << "Это не прямоугольник" << endl;
        }
        if (f[i].is_square()) {
            cout << "Это квадрат" << endl;
        }
        else {
            cout << "Это не квадрат" << endl;
        }

        if (f[i].is_romb()) {
            cout << "Это ромб" << endl;
        }
        else {
            cout << "Это не ромб" << endl;
        }

        if (f[i].is_in_circle()) {
            cout << "Может быть вписан" << endl;
        }
        else {
            cout << "Не может быть вписан" << endl;
        }

        if (f[i].is_out_circle()) {
            cout << "Может быть описан" << endl;
        }
        else {
            cout << "Не может быть описан" << endl;
        }
    }

    return 0;
}
