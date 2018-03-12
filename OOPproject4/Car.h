#pragma once
#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
	int carid;
	string brandname;
	int day;
	int month;
	int year;
	string color;
	int numberOfDoors;
public:
	void setid(int carID);
	int getid();

	void setbrand(string namebrand);
	string getrand();

	void setcolor(string c);
	string getcolor();

	void setnod(int nod);
	int getnof();

	void setdate(int d, int m, int y);
	string date();


};