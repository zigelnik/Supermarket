#include "Headers/F_Fruit.h"
F_Fruit::F_Fruit(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name, int sugar) :
    Farm(ser, loc, amo, area, FRUIT, prov, season, name)
{
    cout << "(Fruit) Type added." << endl;
    this->setName(name);
    this->_sugarAmount = sugar;
    cout << "(Fruit) constructor created..!" << endl;
}
void F_Fruit:: print() const
{
	Farm::print();
	cout << "(" << this->_sugarAmount << ") " << endl;

}
void F_Fruit::setName(const char* n)
{
	this->_productName = _strdup(n);
	cout << "(Fruit) Name added." << endl;
}
double F_Fruit::calcPrice(const int factor) const
{
// calculation according to formula
	return (Farm::calcPrice(factor) + (this->getSugarAmount() / 2));
	cout << "(Fruit) Price calculated" << endl;

}


