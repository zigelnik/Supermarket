#pragma once
#include "Farm.h"
class F_Fruit :
    public Farm
{
private:
    int _sugarAmount;

public:
    F_Fruit(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name, int sugar);

    unsigned int getSugarAmount() const { return this->_sugarAmount; } 
    virtual void print() const;
    virtual void setName(const char* n);
    virtual double calcPrice(const int factor) const;
    virtual void f() const {};

};

