#include <iostream>
#include <string>
#include "Motorcycle.h"

using namespace std;

motorcycle::motorcycle(string c, int y, string m, string mo)
{
	color = c;
	year = y;
	make = m;
	model = mo;
}

void motorcycle::set_color(string c)
{
	color = c;
}

string motorcycle::get_color()
{
	return color;
}

void motorcycle::set_year(int y)
{
	year = y;
}
int motorcycle::get_year()
{
	return year;
}

void motorcycle::set_make(string m)
{
	make = m;
}

string motorcycle::get_make()
{
	return make;
}

void motorcycle::set_model(string mo)
{
	model = mo;
}

string motorcycle::get_model()
{
	return model;
}

string motorcycle::getMotorCycleInfo()
{
	cout << "color" << color << endl;
	cout << "year" << year << endl;
	cout << "make" << make << endl;
	cout << "model" << model << endl;

}