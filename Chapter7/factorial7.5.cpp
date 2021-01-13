//
// File: factorial7.4.cpp
// Author: Howard
// Datetime: 2021/1/11 11:46
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

long double factorial(int);

int main()
{
	int n;
	cout << "Enter a number (q to quit):";
	while (cin >> n && n >= 0)
	{
		cout << "The factorial of " << n << " is " << factorial(n) << "." << endl;
		cout << "Enter a number (q to quit):";
	}
	cout << "Bye." << endl;
//	system("pause");
	return 0;
}

long double factorial(int n)
{
	if (n == 0 || n == 1)
		return 1.0l;
	else
		return n * factorial(n - 1);
}
