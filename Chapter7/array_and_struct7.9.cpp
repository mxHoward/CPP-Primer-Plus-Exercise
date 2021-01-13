//
// File: array_and_struct7.9.cpp
// Author: Howard
// Datetime: 2021/1/13 15:12
// Created with CLion, all right reserved.

#include <iostream>


using namespace std;

const int LENGTH = 30;
struct student
{
	char fullname[LENGTH];
	char hobby[LENGTH];
	int oop_level;
};


int get_info(student pa[], int n);

void display1(student st);

void display2(const student *ps);

void display3(const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	while (cin.get() != '\n')
		continue;

	student * ptr_stu = new student [class_size];
	int entered = get_info(ptr_stu, class_size);
	cout << endl;
	for (int i = 0; i < entered; ++i)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done." << endl;
//	system("pause");
	return 0;
}

int get_info(student pa[], int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		cout << "Enter the information of student #" << i + 1 << "." << endl;
		cout << "Full name of student #" << i + 1 << ": ";
		cin.getline(pa[i] . fullname, LENGTH);
		if (pa[i] . fullname [0] == '\0')
			break;
		cout << "Hobby of student #" << i + 1 << ": ";
		cin.getline(pa[i] . hobby, LENGTH);
		cout << "OOP level of student #" << i + 1 << ":";
		cin >> pa[i] . oop_level;
		cin.get();
	}
	return i;
}

void display1(student st)
{
	cout << "Student full name: " << st . fullname << endl;
	cout << "Student hobby: " << st . hobby << endl;
	cout << "Student oop level: " << st . oop_level << endl;
}

void display2(const student *st)
{
	cout << "Student full name: " << st -> fullname << endl;
	cout << "Student hobby: " << st -> hobby << endl;
	cout << "Student oop level: " << st -> oop_level << endl;
}

void display3(const student pa[], int n)
{
	cout << "There are " << n << " students in the class." << endl;
	for (int i = 0; i < n; ++i)
		display1(pa[i]);
}