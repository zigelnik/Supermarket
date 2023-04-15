#include "Headers/Market.h"
void Market:: addProduct(Product *p)
{

	this->_numOfProducts++;
	this->_products.push_back(p);
}
Market::~Market()
{
	for (int i = 0; i < this->_products.size(); i++)
	{
		delete this->_products[i];
		this->_products.pop_back();
	}
	delete[] &this->_products;
}

bool Market::serialExist(int ser) const
{
	for (int i = 0; i < this->_products.size(); i++)
	{
		if (this->_products[i]->getSerialNumber() == ser) // found
		{
			return true;
		}
	}
	return false;
}
void Market::print() const
{
	if (this->_products.size() == 0)
	{
		cout <<endl << "....No products in the store found!....."  << endl;
		return;
	}
	else
	{
		cout << endl;
		for (int i = 0; i < this->_products.size(); i++)
		{
			this->_products[i]->print();
			cout << endl;
		}
	}
}