//
// File: quarter_expense7.8.cpp
// Author: Howard
// Datetime: 2021/1/13 14:38
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

// constant
const int SEASONS = 4;
const char* SEASON_NAMES[SEASONS] =
		{"Spring", "Summer", "Autumn", "Winter"};

void fill(double** arr);

void show(double arr[SEASONS]);

int main()
{
	double* arr = new double[SEASONS];
	fill(& arr);
	show(arr);
	delete[] arr;
//	system("pause");
	return 0;
}

void fill(double** arr)
{
	for (int i = 0; i < SEASONS; ++i)
	{
		cout << "Enter " << SEASON_NAMES[i] << " expenses: ";
		cin >> (* arr)[i];
	}
}

void show(double arr[SEASONS])
{
	double total = 0.0;
	cout << endl << "EXPENSE" << endl;
	for (int i = 0; i < SEASONS; ++i)
	{
		cout << SEASON_NAMES[i] << ": $" << arr[i] << endl;
		total += arr[i];
	}
	cout << "Total expenses: $" << total << endl;
}