//
// File: lotto7.4.cpp
// Author: Howard
// Datetime: 2021/1/11 11:41
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

long double probability(int field_number, int picks, int mega_number);

int main()
{
	int total, choices, mega;
	cout << "Enter the total number of choices on the game card and \n"
		 << "the number of pick allowed and the total number of mega choices.\n";
	while ((cin >> total >> choices >> mega) && choices <= total)
	{
		cout << "You have one chance in " << probability(total, choices, mega) << " of winning " << endl;
		cout << "Enter next three number to continue (q to quit):";
	}
	cout << "Bye" << endl;
//	system("pause");
	return 0;
}

long double probability(int field_number, int picks, int mega_number)
{
	long double result = 1.0l;
	long double n;
	long double p;

	for (n = field_number, p = picks; p > 0; --n, --p)
		result = result * n / p;
	result *= mega_number;
	return result;
}
