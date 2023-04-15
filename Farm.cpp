#include "Headers/Farm.h"
Farm::Farm(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name = "") :
	Product(ser, loc, amo, area, FARM)
{
	this->setType(type);
	this->setName(name);
	this->setProvider(prov);
	this->setSeason(season);
	cout << "(Farm) Constructor created..!" << endl;
}
void Farm::setType(int t)
{
	this->_subType = (FARM_Types)t;
	cout << "(Farm) Type added." << endl;
}
void Farm::setProvider(int p)
{
	this->_numOfProviders = p;
	cout << "(Farm) Provider added." << endl;
}
void Farm::setSeason(int s)
{
	this->_seasonRipe = s;
	cout << "(Farm) Season added." << endl;
}
void Farm::setName(const char* n)
{
	this->_productName = _strdup(n);
	cout << "(Farm) Name added." << endl;
}
char* Farm::getName() const
{
	return this->_productName;
}
void Farm::print() const
{
	Product::print();
	cout << " " << this->getName() << " (" << this->getType()<<"," << this->getProvider() << "," << this->getSeason() << ") ";
}
double Farm::calcPrice(const int factor) const
{
	return // formula according to the project 
		(Product::calcPrice(factor) * 3 * (5 - (double)this->getSeason()) + ((double)this->getProvider() * 5) + this->getType());
}
