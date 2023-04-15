#include "Headers/D_Cheese.h"
D_Cheese::D_Cheese(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name, int top) :
    Dairy(ser, loc, amo, area, CHEESE, colors, fat, name)
{
    cout << "(Cheese) Type added." << endl;
    this->setTopping(top);
    cout << "(Cheese) Cheese constructed..!" << endl;
}
double D_Cheese::calcPrice(const int factor) const
{
    return
        Dairy::calcPrice(factor) + this->getTopping();
}
void D_Cheese::print() const 
{
    Dairy::print();
    cout << "(" << this->getTopping() << ") ";
 }
void D_Cheese::setTopping(unsigned int top)
{ 
    this->_numToppings = top; 
    cout << "(Cheese) Topping added." << endl;
}