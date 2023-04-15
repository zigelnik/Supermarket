#pragma once
#include "Product.h"
#include <vector>
using namespace std;

class Market
{
private:
	vector<Product*> _products;
	int _numOfProducts;
	int _factor;
	char* _name;

public:
	Market(const char* name = "", int factor = 3) :_numOfProducts(0)
	{
		this->setMarketName(name);
		this->setFactor(factor);
	}
	~Market();
	bool serialExist(int ser) const;
	void setMarketName(const char* name) { this->_name = _strdup(name); }
	void setFactor(int f) { this->_factor = f; }
	void addProduct(Product* p);
	void print() const;


};

