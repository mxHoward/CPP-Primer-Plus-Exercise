//
// File: uppercase8.3.cpp
// Author: Howard
// Datetime: 2021/1/14 10:06
// Created with CLion, all right reserved.

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void uppercase(string&);

int main()
{
	string str;
	cout << "Enter a string (q to quit): ";
	while (getline(cin, str) && str != "q")
	{
		uppercase(str);
		cout << str << endl;
		cout << "Enter a string (q to quit): ";
	}
	cout << "Bye." << endl;
//	system("pause");
	return 0;
}

void uppercase(string& str)
{
	for (char& i : str)
		i = toupper(i);
}