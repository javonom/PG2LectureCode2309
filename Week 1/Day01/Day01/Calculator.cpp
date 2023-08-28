#include "Calculator.h"

int Calculator::minus(int number1, int number2)
{
	int result = number1 - number2;
	return result;
}

double Calculator::mult(double num, double factor)
{
	return num * factor;
}

bool Calculator::IsEven(int number)
{
	return number % 2 == 0;
}
