#include <iostream>
#include "eq2.h"


using namespace std;

int main()
{
    eq2 eq1(2, 5, -3);
    double x = eq1.find_X();
    cout << "X = " << x << endl;
    double y = eq1.find_Y(x);
    cout << "Y = " << y << endl;


    return 0;
}