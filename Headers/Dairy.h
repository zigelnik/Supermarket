#pragma once
#include "Product.h"
#include "enums.h"

// a subclass of Product
class Dairy:   
	public Product{
	
protected:
	int _subType;

private:
	int _numColorInPack;
	double _fatPercent;

public:
	Dairy(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name);

	int getNumColors() const { return this->_numColorInPack; } 
	int getType() const { return this->_subType; } 
	double getFatPer() const { return this->_fatPercent; }

	void setFatP(double fat);
	void setNumColors(unsigned int colors);
	virtual double calcPrice(const int factor) const;
	virtual void print() const;
	virtual void setType(int t);
	virtual	void setName(const char* n);
	virtual char* getName() const;
	virtual void f() const {} // pure virtual implemented from superclass

};

