#pragma once
#include "Product.h"
#include "enums.h"

// a subclass of Product which is also abstract, derived to other classes.
class Farm: 
	public Product{

protected:
	int _subType;

private:
	int _numOfProviders;
	int _seasonRipe;

public:
	Farm(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name);
	
	int getProvider() const { return this->_numOfProviders; }
	int getSeason() const { return this->_seasonRipe; } 
	int getType() const { return this->_subType; }

	void setSeason(int s); 
	virtual char* getName() const;
	virtual	void setName(const char* n);
	virtual void setType(int t);
	virtual void setProvider(int p);
	virtual void print() const;
	virtual double calcPrice(const int factor) const; 
	virtual void f() const = 0; // pure virtual function
};

