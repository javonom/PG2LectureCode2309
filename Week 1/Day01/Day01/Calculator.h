#pragma once
#include <vector>
class Calculator
{
public:
	//the declaration of the minus method
	int minus(int number1, int number2);

	static double mult(double num, double factor);

	bool IsEven(int number);

	float average(const std::vector<float>& grades);
};

