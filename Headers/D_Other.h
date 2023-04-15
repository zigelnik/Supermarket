#pragma once
#include "Dairy.h"

class D_Other :
    public Dairy
{
private:
    int _numOfPareveProducts;
    char** _PareveProducts;

public:
    D_Other(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name, int num_prod);
    ~D_Other();
    
    void setNumOfProd(int num);
    int getNumOfProd() const  { return this->_numOfPareveProducts; }
    virtual void print() const;
    virtual double calcPrice(const int factor) const;
};

