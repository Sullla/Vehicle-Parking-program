#pragma once
#include <iostream>
#include <string>

using namespace std;

class TruckorVan
{
private:
	int carid;
	string brandname;
	int day;
	int month;
	int year;
	int cargovolume;
public:
	void setid(int carID);
	int getid();

	void setbrand(string namebrand);
	string getrand();

	void setvolume(int vol);
	int getvolume();


	void setdate(int d, int m, int y);
	string date();


};