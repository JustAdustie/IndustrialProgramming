#include <iostream>
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

class circle {
private:
    float radius;
    float x_center;
    float y_center;
public:
    circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }
    void set_circle(float r, float x, float y) {
        radius = r;
        x_center = x;
        y_center = y;
    }
    float square() {
        return M_PI * radius * radius;
    }
    bool triangle_around(float a, float b, float c) {
        float R = a * b * c / (4 * sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));
        return radius >= R;
    }
    bool triangle_in(float a, float b, float c) {
        float r = 2 * square() / (a + b + c);
        return r <= radius;
    }
    bool check_circle(float r, float x_cntr, float y_cntr) {
        float d = sqrt((x_center - x_cntr) * (x_center - x_cntr) + (y_center - y_cntr) * (y_center - y_cntr));
        return d <= radius + r && d >= abs(radius - r);
    }
};

int main() {


    float r1, x1, y1;
    cout << "Circle #1: ";
    cin >> r1 >> x1 >> y1;
    circle c1(r1, x1, y1);

    float r2, x2, y2;
    cout << "Circle #2: ";
    cin >> r2 >> x2 >> y2;
    circle c2(r2, x2, y2);

    float r3, x3, y3;
    cout << "Circle #3: ";
    cin >> r3 >> x3 >> y3;
    circle c3(r3, x3, y3);

    float a, b, c;
    cout << "Triangle sides: ";
    cin >> a >> b >> c;

    cout << "Circle 1 square: " << c1.square() << endl;
    cout << "Circle 1 described by the triangle: " << (c1.triangle_around(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 1 in the triangle: " << (c1.triangle_in(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 1 intersects with circle 2: " << (c1.check_circle(r2, x2, y2) ? "true" : "false") << endl;
    cout << "Circle 1 intersects with circle 3: " << (c1.check_circle(r3, x3, y3) ? "true" : "false") << endl;
    cout << endl;
    cout << "Circle 2 square: " << c2.square() << endl;
    cout << "Circle 2 described by the triangle: " << (c2.triangle_around(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 2 in the triangle: " << (c2.triangle_in(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 2 intersects with circle 1: " << (c2.check_circle(r1, x1, y1) ? "true" : "false") << endl;
    cout << "Circle 2 intersects with circle 3: " << (c2.check_circle(r3, x3, y3) ? "true" : "false") << endl;
    cout << endl;
    cout << "Circle 3 square: " << c3.square() << endl;
    cout << "Circle 3 described by the triangle: " << (c3.triangle_around(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 3 in the triangle: " << (c3.triangle_in(a, b, c) ? "true" : "false") << endl;
    cout << "Circle 3 intersects with circle 1: " << (c3.check_circle(r1, x1, y1) ? "true" : "false") << endl;
    cout << "Circle 3 intersects with circle 2: " << (c3.check_circle(r2, x2, y2) ? "true" : "false") << endl;

    return 0;
}