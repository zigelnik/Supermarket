#pragma once
#include <iostream>
#include "enums.h"
#define AREA 3

/*
* This is an abstract class that represents a product which will be derived to other sub_type products
*/
class Product
{
protected:
	int _type;
	int _serialNumber;
	int _expArea;
    char* _productName;

private:
	double _amount;
	 char _location[AREA]; // first char is A-Z, second char is 1-5

public:
	Product(int ser, const char* loc, double amo, int area, int type, const char* name = "")
	{
		cout << endl;
		this->setType(type);
		this->setSerialNumber(ser);
		this->setLocation(loc);
		this->setAmount(amo);
		this->setArea(area);
		cout << "(Product) Product constructed..!" << endl;
	}

	char* getLocation() const;
	double getAmount() const { return this->_amount; }
	 int getArea() const { return this->_expArea; }
	 int getSerialNumber() const { return this->_serialNumber; }
	 int getType() const { return this->_type; }

	void setAmount(double amo);
	void setLocation(const char* l);
	void setArea(int area);
	void setSerialNumber(int num);
	virtual void setType(int t);
	virtual double calcPrice(const int factor) const;

	virtual char* getName() const;
	virtual	void setName(const char* n);
	virtual void print() const;
	virtual void f() const = 0; // pure virtual function

};

