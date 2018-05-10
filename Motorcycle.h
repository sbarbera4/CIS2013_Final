#include <iostream>
#include <string>

using namespace std;


class motorcycle
{
private:
	string color;
	int year;
	string make;
	string model;


public:

	motorcycle(string c, int y, string m, string mo);

	void set_color(string);
	string get_color;

	void set_year(int);
	int get_year();

	void set_make(string);
	string get_make;

	void set_model(string);
	string get_model;

	string getMotorCycleInfo();

};
