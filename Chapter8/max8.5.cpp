//
// File: max8.5.cpp
// Author: Howard
// Datetime: 2021/1/14 10:49
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

template <typename T>
T max5(T var1, T var2, T var3, T var4, T var5);


int main()
{
	cout << "Max value of 5, 6, 2, 4, 9 is "
			<< max5(5, 6, 2, 4, 9) << "."<< endl;
	cout << "Max value of 3.4, 23.1, 5.6, 8.7, 22,9 is "
			<< max5(3.4, 23.1, 5.6, 8.7, 22.9) << "." << endl;
//	system("pause");
	return 0;
}

template <typename T>
T max5(T var1, T var2, T var3, T var4, T var5)
{
	T max1 = var1 > var2 ? var1 : var2;
	T max2 = var3 > var4 ? var3 : var4;
	T max3 = max1 > max2 ? max1 : max2;
	return max3 > var5 ? max3 : var5;
}