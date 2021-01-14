//
// File: candy_bar8.2.cpp
// Author: Howard
// Datetime: 2021/1/14 9:49
// Created with CLion, all right reserved.

#include <iostream>
#include <cstring>

using namespace std;

struct candy_bar
{
	char brand[20];
	double weight;
	int calories;
};

void set_candy_bar(candy_bar&, char* brand = "Millennium Munch", double= 2.85, int= 350);

void show_candy_bar(const candy_bar&);

int main()
{
	candy_bar cb;
	char name[20];
	double weight;
	int calories;
	cout << "What is your favorite candy bar? ";
	cin . getline(name, 20);
	cout << endl << "What is its weight? ";
	cin >> weight;
	cout << endl << "What is its calories? ";
	cin >> calories;
	set_candy_bar(cb, name, weight, calories);
	cout << endl << "This is your favorite candy bar." << endl;
	show_candy_bar(cb);
	cout << endl << "This is my favorite candy bar." << endl;
	set_candy_bar(cb);
	show_candy_bar(cb);
//	system("pause");
	return 0;
}

void set_candy_bar(candy_bar& cb, char* brand, double weight, int calories)
{
	strcpy_s(cb . brand, brand);
	cb . weight = weight;
	cb . calories = calories;
}

void show_candy_bar(const candy_bar& cb)
{
	cout << "Brand: " << cb . brand << endl;
	cout << "Weight: " << cb . weight << endl;
	cout << "Calories: " << cb . calories << endl;
}
