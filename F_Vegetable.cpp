#include "Headers/F_Vegetable.h"
F_Vegetable::F_Vegetable(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name, int vit) :
    Farm(ser, loc, amo, area, VEGETABLE, prov, season,name)
{
    cout << "(Vegetable) Type added." << endl;
    this->setName(name);
    this->_vit = vit;
    cout << "(Vegetable) Vegetable constructed..!" << endl;
}
void F_Vegetable::print() const
{
	Farm::print();
	cout << "(" << this->_vit << ") " << endl;
}
void F_Vegetable::setName(const char* n)
{
	this->_productName = _strdup(n);
	cout << "(Vegetable) Name added." << endl;
}
double F_Vegetable::calcPrice(const int factor) const
{
	return (Farm::calcPrice(factor) + ((double)this->getVits() * 2));
	cout << "(Vegetable) Price calculated" << endl;
 }
