#pragma once
#include "Dairy.h"
class D_Yogurt :
    public Dairy
{

public:
    D_Yogurt(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name = "") :
        Dairy(ser, loc, amo, area, YOGURT, colors, fat, name)
    { 
    cout << "(Yogurt) Type added." << endl;
    cout << "(Yogurt) Drink constructed..!" << endl;
    }
};

