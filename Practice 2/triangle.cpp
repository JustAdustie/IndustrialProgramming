#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
	double a, b, c;

public:
	bool exst_tr() {
		return (((a + b) > c) && ((a + c) > b) && ((b + c) > a));
	}

	void set(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	}

	void show() {
		cout << "A" << a << endl;
		cout << "B" << b << endl;
		cout << "C" << c << endl;
	}

	double Perim() {
		return (a+b+c);
	}

	double square() {
		double p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	
};

int main()
{
	Triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "Triangle " << i + 1 << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		
		if (!(mas[i].exst_tr())) {
			mas[i].show();
			cout << "doesn't exist" << endl;
			i--;
		}
	}

	for (int i = 0; i < 3; i++) {
		cout << "Triangle №" << i + 1 << endl;
		cout << "Perim = " << mas[i].Perim() << endl;
		cout << "Square = " << mas[i].square() << endl;
	}
}

