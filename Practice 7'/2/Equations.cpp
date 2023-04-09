#include "Equations.h"

void Type1Equation::Get_answer()
{
	std::cout << "The solution is any x." << std::endl;
}

void Type1Equation::show()
{
	std::cout << "0 = 0" << std::endl;
}

Type2Equation::Type2Equation(double a1)
{
	A = a1;
}

void Type2Equation::Get_answer()
{
	std::cout << "The solution is x = 0." << std::endl;
}

void Type2Equation::show()
{
	std::cout << A << "x^2 = 0" << std::endl;
}
