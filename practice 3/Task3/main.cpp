#include "Rational.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of fractions: ";
    cin >> n;
  
    Rational* arr = new Rational[n];

    // Заполнение массива дробями
    for (int i = 0; i < n; i++) {
        int a, b;
        cout << "Enter numerator and denominator" << i + 1 << "-th fraction: ";
        cin >> a >> b;
        try {
            arr[i].set(a, b);
        }
        catch (const char* msg) {
            cerr << "Error: " << msg << endl;
            i--;
        }
    }

    // Вывод массива дробей
    cout << "Array of fractions:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        arr[i].show();
    }

    //task 3
    Rational sum;
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }
    cout << "Sum of fractions: ";
    sum.show();
    cout << endl;

    //test subtraction operator
    Rational diff = arr[0] - arr[1];
    cout << "Difference between first and second fraction: ";
    diff.show();
    cout << endl;

    // test increment operator
    ++arr[0];
    cout << "Incremented first fraction: ";
    arr[0].show();
    cout << endl;

    // test equality and greater than operators
    if (arr[0] == arr[1]) {
        cout << "First and second fractions are equal." << endl;
    }
    else if (arr[0] > arr[1]) {
        cout << "First fraction is greater than second fraction." << endl;
    }
    else {
        cout << "Second fraction is greater than first fraction." << endl;
    }

    // test assignment operator
    Rational a = arr[0];
    Rational b = arr[1];
    a = b;
    cout << "After assigning first fraction to second fraction: ";
    a.show();
    cout << endl;

    delete[] arr; // Освобождение памяти, выделенной под массив дробей


   
    
    return 0;
}