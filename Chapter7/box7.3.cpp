//
// File: box7.3.cpp
// Author: Howard
// Datetime: 2021/1/11 11:17
// Created with CLion, all right reserved.

#include <iostream>
#include <cmath>

using namespace std;

struct box
{
	char maker[40];
	float height;
	float width;
	float length;
	float volume;
};

void show_box(const box);

void set_volume(box*);

int main()
{
	box _box {"Giant Box", 3.5f, 3.5f, 3.5f, 0.0f};
	cout << "Box before setting volume." << endl;
	show_box(_box);
	box * pb = &_box;
	set_volume(pb);
	cout << "Box after setting volume." << endl;
	show_box(_box);
	system("pause");
	return 0;
}

void show_box(const box b)
{
	cout << "The box is made by " << b . maker << "." << endl;
	cout << "Height: " << b . height << endl;
	cout << "Width: " << b . width << endl;
	cout << "Length: " << b . length << endl;
	cout << "Volume: " << b . volume << endl;
}

void set_volume(box* b)
{
	b -> volume = b -> height * b -> width * b -> length;
}

