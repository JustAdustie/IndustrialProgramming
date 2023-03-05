#include "Rational.h"
#include <iostream>

using namespace std;
using namespace math;

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;

    Rational* fractions = new Rational[n];

    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter the numerator and denominator of fraction " << i + 1 << ": ";
        cin >> a >> b;

        try {
            fractions[i].set(a, b);
        }
        catch (const std::invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
            i--;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << "Fraction " << i + 1 << ": ";
        fractions[i].show();
        cout << endl;
    }

    delete[] fractions;

    return 0;
}