#pragma once
#include "Product.h"

// a subclass of Product
class Pack:
	public Product{

private:
	char** _ProductNames;
	int _numOfProducts;
	int _numOfColorInPack;

public:
	Pack(int ser, const char* loc, double amo, int area, int type, int num_colors, int num_prod);
	~Pack();

	int getNumOfPackColors() const { return this->_numOfColorInPack; } 
	int getNumOfProducts() const { return this->_numOfProducts; }
	void setNumColorsInPack(int num);
	void setNumOfProducts(int num);
	virtual double calcPrice(const int factor) const;
	virtual void f() const {}; // pure virtual implemented
	virtual void print() const;

};

