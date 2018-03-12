#pragma once
#include <iostream>
#include <string>

using namespace std;

class Motorbike
{
private:
	int carid;
	string brandname;
	int day;
	int month;
	int year;
	int sizeofengine;
public:
	void setid(int carID);
	int getid();

	void setbrand(string namebrand);
	string getrand();

	void setsoe(int soe);
	int getrnengine();


	void setdate(int d, int m, int y);
	string date();


};