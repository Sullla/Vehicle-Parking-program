#include "Car.h";

void Car::setid(int idcar) 
{
	carid = idcar;
}
int Car::getid() 
{
	return carid;
}
void Car ::setbrand(string namebrand)
{
	brandname = namebrand;
}
string Car::getrand() 
{
	return brandname;
}

void Car ::setdate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;

}

void Car::setnod(int nod) 
{
	numberOfDoors = nod;
}
int Car::getnof() 
{
	return numberOfDoors;
}
void Car::setcolor(string c) 
{
	color = c;
}
string Car::getcolor() 
{
	return color;
}

string Car:: date()
{
	string date = to_string(day) + to_string(month) + to_string(year);
	return date;
}
