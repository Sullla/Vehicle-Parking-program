#pragma once
#include <iostream>
#include <string>

using namespace std;
class parking
{
private:
	int idNum[5];  //change to vehicle[20].getidnumber();
	int idnum;

	int idNum2[5];
	int idnum2;

	int idNum3[10];
	int idnum3;

	char slot_no[20];
	char cue_full;
	int i,i2, i3;
	int e = -1;
	char cue;
	float mnth[20], date[20], hr[20], mins[20]; // Parking Entry date and time// array for 20 customers.

	float ehr, emins, edate, emnth; // Parking exit date and time.

	float tmnth, thr, tmins, days, tdays; // Variables for total hours and days to be calculated.



	float perhr, perdy; // rate of parking per hr and per day.

	float tfee; // total parking fee variable.


public:
	void add();
	void remove();
	void display();
	void availableSpace();
	void getinfo();
	float calculate_fee(int e);
	void calculatePercentage();
	void findByDate();
};



