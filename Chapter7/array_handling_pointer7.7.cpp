//
// File: array_handling_pointer7.7.cpp
// Author: Howard
// Datetime: 2021/1/13 14:00
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

/// \brief  fill the array between begin and end pointer.
/// \param begin - the start position of array
/// \param end - the last position allowed of array
/// \return the last position of array
double * fill_array(double * begin, double *end);

/// \brief display the array between begin and end pointer.
/// \param begin - the start position of array
/// \param end  - the last position of array
void show_array(const double * begin, const double * end);

/// \brief reassign each element of the array between the begin and end
///             pointer by multiply a same factor -- ratio.
/// \param ratio - the reassignment factor
/// \param begin - the start position of array
/// \param end - the last position of array
void revalue(double ratio, double *begin, double *end);

int main()
{
	double arr[10];
	cout << "Fill the array with real number." << endl;
	double * last = fill_array(arr, arr + 10);
	cout << "Before revaluing." << endl;
	show_array(arr, last);
	revalue(1.05, arr, last);
	cout << "After revaluing by factor 1.05." << endl;
	show_array(arr, last);
	revalue(0.8, arr, last);
	cout << "After revaluing by factor 0.8." << endl;
	show_array(arr, last);
//	system("pause");
	return 0;
}

double * fill_array(double * begin, double * end)
{
	double temp;
	double* current = begin;
	int i = 1;
	while (current != end)  // if we have not reach the end of array
	{
		cout << "Enter number #" << i << ": ";
		cin >> temp;
		if (!cin)
		{
			cin . clear();
			while (cin . get() != '\n')
				continue;
			cout << "Bad input, input process terminated." << endl;
			break;
		}
		*current = temp;  // assign the value of pointer
		++current;
		++i;
	}
	return current;
}

void show_array(const double *begin, const double *end)
{
	const double * pointer;
	int i;
	for (pointer = begin, i = 1; pointer != end; ++pointer, ++i)
		cout << "Number #" << i << ": " << *pointer << endl;
}

void revalue(double ratio, double * begin, double *end)
{
	double * pointer;
	for (pointer = begin; pointer != end; ++pointer)
		*pointer *= ratio;
}

