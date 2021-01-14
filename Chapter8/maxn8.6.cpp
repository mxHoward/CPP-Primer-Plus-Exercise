//
// File: maxn8.6.cpp
// Author: Howard
// Datetime: 2021/1/14 11:27
// Created with CLion, all right reserved.

#include <iostream>
#include <cstring>

using namespace std;


template<typename T>
T maxn(T* arr, int n);

template <> char* maxn<char*>(char** arr, int n);

int main()
{
	int int_arr[] = {3, 5, 2, 9, 1, 5};
	double double_arr[] = {5.4, 3.4, 7.7, 2.2};
	char * string_arr[] = {"Hello", "World", "C++", "C Plus Plus", "C++ Primer Plus"};
	cout << "The max value of ";
	for (const int& a : int_arr)
		cout << a << ", ";
	cout << "is " << maxn(int_arr, 6) << "." << endl;

	cout << "The max value of ";
	for (const double& a : double_arr)
		cout << a << ", ";
	cout << "is " << maxn(double_arr, 4) << "." << endl;

	cout << "The longest string of ";
	for (const char * a : string_arr)
		cout << endl << "\"" << a << "\"";
	cout << endl << "is " << maxn<char*>(string_arr, 5) << "." << endl;
//	system("pause");
	return 0;
}

template<typename T>
T maxn(T* arr, int n)
{
	T max = arr[0];
	if (n > 1)
	{
		for (int i = 0; i < n; ++i)
			if (arr[i] > max)
				max = arr[i];
	}
	return max;
}

template <> char* maxn<char*>(char** arr, int n)
{
	int max_index = 0;
	if (n > 1)
	{
		for (int i = 0; i < n; ++i)
			if (strlen(arr[i]) > strlen(arr[max_index]))
				max_index = i;
	}
	return arr[max_index];
}