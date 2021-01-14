//
// File: stringy8.4.cpp
// Author: Howard
// Datetime: 2021/1/14 10:39
// Created with CLion, all right reserved.

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

struct stringy
{
	char* str;
	int ct;
};

void set(stringy&, const char*);

void show(const stringy&, int= 1);

void show(const char*, int= 1);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);
	show(beany);
	show(beany, 2);

	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("Done!");
//	system("pause");
	return 0;
}

void set(stringy& sy, const char* str)
{
	int length = strlen(str);
	sy . str = new char[length];
	strcpy(sy . str, str);
	sy . ct = length;
}

void show(const stringy& sy, int times)
{
	for (int i = 0; i < times; ++i)
		cout << sy . str << endl;
}

void show(const char* str, int times)
{
	for (int i = 0; i < times; ++i)
		cout << str << endl;
}
