//
// File: sum_array8.7.cpp
// Author: Howard
// Datetime: 2021/1/14 11:52
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

template<typename T>
T sum_array(T arr[], int n);

template<typename T>
T sum_array(T* arr[], int n);

struct debts
{
	char names[50];
	double amount;
};

int main()
{
	int things[] = {13, 31, 103, 301, 310, 130};
	struct debts m_debts[] =
			{
					{"Ima Wolfe", 2400.0},
					{"Ura Fox",   1300.0},
					{"Iby Stout", 1800.0}
			};

	double* pd[3];
	for (int i = 0; i < 3; ++i)
		pd[i] = & m_debts[i] . amount;

	cout << "The sum of Mr. E's things: " << sum_array(things, 6) << endl;
	cout << "The sum of Mr. E's debts: " << sum_array(pd, 3) << endl;

//	system("pause");
	return 0;
}

template <typename T>
T sum_array(T arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum;
}

template <typename T>
T sum_array(T *arr[], int n)
{
	T sum = 0;
	for (int i = 0; i < n; ++i)
		sum += *arr[i];
	return sum;
}
