//
// File: array_function7.6.cpp
// Author: Howard
// Datetime: 2021/1/13 13:24
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;


int fill_array(double [], int);

void show_array(const double [], int);

void reverse_array(double [], int);

int main()
{
	int size;
	cout << "Enter the size of array: ";
	if (cin >> size && size > 0)
	{
		double* double_array = new double[size];
		int length = fill_array(double_array, size);
		cout << "Before reversing: " << endl;
		show_array(double_array, length);
		reverse_array(double_array, length);
		cout << "After reversing: " << endl;
		show_array(double_array, length);
		delete [] double_array;
	}
//	system("pause");
	return 0;
}

int fill_array(double arr[], int limit)
{
	double temp;
	int i;
	for (i = 0; i < limit; ++i)
	{
		cout << "Enter number #" << i + 1 << ": ";
		cin >> temp;
		if (!cin)
		{
			cin . clear();
			while (cin . get() != '\n')
				continue;
			cout << "Bad input, input process terminated." << endl;
			break;
		}
		else if (temp < 0)
			break;
		arr[i] = temp;
	}
	return i;
}

void show_array(const double arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << "Number #" << i + 1 << ": " << arr[i] << endl;
}

void reverse_array(double arr[], int n)
{
	double temp;
	for (int i = 0; i < (n / 2); ++i)
	{
		temp = arr[i];
		arr[i] = arr[n - i - 1];
		arr[n - i - 1] = temp;
	}
}


