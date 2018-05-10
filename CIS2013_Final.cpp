#include <iostream>
#include <string>
#include "Motorcycle.h"

using namespace std;

int main()
{
	int menu = 0;
	string color;
	int year;
	string make;
	string model;

	if (menu == 0)
	cout << "hello, please select a number to begin making your motorcycle" << endl;
	cout << "color - 1" << endl;
	cout << "year  - 2" << endl;
	cout << "make  - 3" << endl;
	cout << "model - 4" << endl;
	cout << "print - 5" << endl;
	cin >> menu;

	if (menu == 1)
	{
		cout << "enter a color " << endl;
		cin >> color;
		cout << "color is now " << color << endl;
		menu = 0;
	}
	else if (menu == 2)
	{
		cout << "enter the year of the motorcycle " << endl;
		cin >> year;
		cout << "the year is now " << year << endl;
		menu = 0;
	}
	else if (menu == 3)
	{
		cout << "enter the maker of the motorcycle " << endl;
		cin >> make;
		cout << "the make is now " << make << endl;
		menu = 0;
	}
	else if (menu == 4)
	{
		cout << "enter the model of the motorcycle " << endl;
		cin >> model;
		cout << "the model is now " << model << endl;
		menu = 0;
	}
	else if (menu == 5)
	{
		motorcycle a(color, year, make model);
		cout << a.getMotorCycleInfo << endl;

	}
	return 0;

}
