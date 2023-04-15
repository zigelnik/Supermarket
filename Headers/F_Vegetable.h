#pragma once
#include "Farm.h"

// 
class F_Vegetable :
    public Farm
{
private:
    int _vit;

public:
    F_Vegetable(int ser, const char* loc, double amo, int area, int type, int prov, int season, const char* name, int vit);

    int getVits() const { return this->_vit; }
    virtual double calcPrice(const int factor) const;
    virtual void print() const;
    virtual void setName(const char* n);
    virtual void f() const {};


};

