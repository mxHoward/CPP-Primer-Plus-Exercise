//
// File: function_pointer7.10.cpp
// Author: Howard
// Datetime: 2021/1/13 15:32
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

/// \brief  call function by pointer to do calculation with two opera: op1, op2
/// \param op1 - first opera
/// \param op2 - second opera
/// \param pf - the function that does the calculation
/// \return  calculation result
double calculate(double op1, double op2, double(* pf)(double, double));

double add(double, double);

double subtract(double, double);

double multiply(double, double);

int main()
{
	double (*pf[3]) (double, double) = {add, subtract, multiply};
	double number1, number2;
	for (int i = 0; i < 3; ++i)
	{
		cout << "Enter two number: ";
		if (! (cin >> number1 >> number2))
			break;
		cout << "#" << i + 1 << " Calculation of " << number1 << " and " << number2 << " is " << calculate(number1, number2, pf[i]) << endl;
	}
	cout << endl << "Done." << endl;
//	system("pause");
	return 0;
}

double calculate(double op1, double op2, double(*pf)(double, double))
{
	return (*pf)(op1, op2);
}

double add(double op1, double op2)
{
	return op1 + op2;
}

double subtract(double op1, double op2)
{
	return op1 - op2;
}

double multiply(double op1, double op2)
{
	return op1 * op2;
}