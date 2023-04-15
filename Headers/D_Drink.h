#pragma once
#include "Dairy.h"
class D_Drink :
    public Dairy
{
public:
    D_Drink(int ser, const char* loc, double amo, int area,int type, int colors, double fat, const char* name = "") :
        Dairy(ser, loc, amo, area, DRINK, colors, fat, name)
    {
        cout << "(Drink) Type added." << endl;
        cout << "(Drink) Drink constructed..!" << endl;
    }
};

