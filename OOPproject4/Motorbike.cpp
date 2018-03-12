#include "Motorbike.h";

void Motorbike::setid(int idcar)
{
	carid = idcar;
}
int Motorbike::getid()
{
	return carid;
}
void Motorbike::setbrand(string namebrand)
{
	brandname = namebrand;
}
string Motorbike::getrand()
{
	return brandname;
}

void Motorbike::setdate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Motorbike::setsoe(int soe)
{
	sizeofengine = soe;
}
int Motorbike::getrnengine()
{
	return sizeofengine;
}

string Motorbike::date()
{
	string date = to_string(day) + to_string(month) + to_string(year);
	return date;
}
