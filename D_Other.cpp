#include "Headers/D_Other.h"
D_Other::D_Other(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name, int num_prod) :
	_numOfPareveProducts(0),
	Dairy(ser, loc, amo, area, OTHER, colors, fat, name)
{
	this->_PareveProducts = new char*;
	this->setNumOfProd(num_prod);
	cout << "(Other) Type added." << endl;

	for (int i = 0; i < this->getNumOfProd(); i++)
	{
		char n[50];
		cout << "Enter product's name: ";
		cin >> n;
		this->_PareveProducts[i] = _strdup(n);
	}
	cout << "(Other) Other Dairy products constructed...!" << endl;
}
D_Other::~D_Other()
{
	for (int i = 0; i < this->getNumOfProd(); i++)
		delete this->_PareveProducts[i];
	delete[] this->_PareveProducts;
}
void D_Other::setNumOfProd(int num)
{
	this->_numOfPareveProducts = num;
	cout << "(Other) Number of other diary products." << endl;

}
double D_Other::calcPrice( const int factor) const
{
	// calculate according to formula
	return
		Dairy::calcPrice(factor) + (5 * this->getNumOfProd());
}
void D_Other::print() const
{
	Dairy::print();
	for (int i = 0; i < this->getNumOfProd()-1; i++)
		cout << this->_PareveProducts[i] << ", ";

	cout << this->_PareveProducts[this->getNumOfProd() - 1] << " (" << this->getNumOfProd() << ")";
}
