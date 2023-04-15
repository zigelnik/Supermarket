#pragma once
#include "Dairy.h"
class D_Cheese :
    public Dairy
{
private:
    int _numToppings;

public:
    D_Cheese(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name, int top);

    void setTopping(unsigned int top);
    int getTopping() const { return this->_numToppings; }
    int getType() const { return this->_subType; }
    virtual double calcPrice(const int factor) const;
    virtual void print() const;

};

