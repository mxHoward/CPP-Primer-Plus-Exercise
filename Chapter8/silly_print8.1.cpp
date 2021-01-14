//
// File: silly_print8.1.cpp
// Author: Howard
// Datetime: 2021/1/13 16:10
// Created with CLion, all right reserved.

#include <iostream>

using namespace std;

void silly_print(const char*, int= 0);

int main()
{
	cout << "First time call." << endl;
	silly_print("There you go");
	cout << "Second time call." << endl;
	silly_print("Here I am.", 0);
	cout << "Third time call." << endl;
	silly_print("Bye.", 3);
//	system("pause");
	return 0;
}

void silly_print(const char* str, int n)
{
	static int times = 1;

	if (n)
		for (int i = 0; i < n; ++i)
			cout << str << endl;
	else
		cout << str << endl;

	++times;
}