#include "TruckORVan.h";

void TruckorVan::setid(int idcar)
{
	carid = idcar;
}
int TruckorVan::getid()
{
	return carid;
}
void TruckorVan::setbrand(string namebrand)
{
	brandname = namebrand;
}
string TruckorVan::getrand()
{
	return brandname;
}

void TruckorVan::setdate(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void TruckorVan::setvolume(int solume){
	cargovolume = solume;
}
int TruckorVan::getvolume()
{
	return cargovolume;
}

string TruckorVan::date()
{
	string date = to_string(day) + to_string(month) + to_string(year);
	return date;
}
