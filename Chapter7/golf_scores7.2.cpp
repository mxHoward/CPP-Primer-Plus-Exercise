//
// File: golf_scores7.2.cpp
// Author: Howard
// Datetime: 2021/1/11 10:28
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

const int MAX = 10;

int fill_array(double []);

void show_array(const double [], int);

double get_average(const double [], int);

int main()
{
	double score[MAX];

	int size = fill_array(score);

	show_array(score, size);

	cout << "The average score is " << get_average(score, size) << endl;

	system("pause");
	return 0;
}

int fill_array(double arr[])
{
	double temp;
	int i;
	for (i = 0; i < MAX; ++i)
	{
		cout << "Enter score #" << i + 1 << ": ";
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
		cout << "Score #" << i + 1 << ": " << arr[i] << endl;
}

double get_average(const double arr[], int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	return sum / n;
}


