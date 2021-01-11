//
// File: harmonic_mean7.1.cpp
// Author: Howard
// Datetime: 2021/1/11 10:03
// Created with CLion, all right reserved.

#include <iostream>
#include <cmath>

using namespace std;

double harmonic_mean(double, double);

int main()
{
	double number1, number2;
	cout << "Enter two numbers:";
	while (cin >> number1 >> number2 && number1 && number2)
	{
		cout << "The harmonic mean of " << number1
			 << " and " << number2 << " is " << harmonic_mean(number1, number2) << endl;
		cout << "Enter two numbers:";
	}
	system("pause");
	return 0;
}

double harmonic_mean(double n1, double n2)
{
	return 2.0 * n1 * n2 / (n1 + n2);
}


