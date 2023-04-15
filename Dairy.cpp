#include "Headers/Dairy.h"
 Dairy::Dairy(int ser, const char* loc, double amo, int area, int type, int colors, double fat, const char* name)
	 : Product(ser, loc, amo, area, DAIRY)
 {
	 this->setType(type);
	 this->setName(name);
	 this->setFatP(fat);
	 this->setNumColors(colors);
	 cout << "(Dairy) Dairy constructed..!" << endl;
 }
double Dairy::calcPrice(const int factor) const
{
	// according to formula
	return
		(Product::calcPrice(factor) + this->getNumColors() - this->getFatPer()) * (this->getType());
}
char* Dairy::getName() const
	{
		return this->_productName;
	}
void Dairy::setType(int t)
{
	this->_subType = (DAIRY_Types)t;
	cout << "(Dairy) Type added." << endl;
}
void Dairy::print() const
{
	Product::print();
	cout << " " << this->getName() << " (" << this->getType() << ", " << this->getNumColors() << ", " << this->getFatPer() << ") ";
}
void Dairy::setName(const char* n)
	{
		this->_productName = _strdup(n);
		cout << "(Dairy) Name added." << endl;
	}
void Dairy::setFatP(double fat)
{
	if (fat < 0 || fat > 100)
	{
		cout << "(Dairy) Error! Fat percent can only be between 0 and 100."
			<< endl << "Exiing..";
		exit(1);
	}
	this->_fatPercent = fat;
	cout << "(Dairy) Fat percent added." << endl;

}
void Dairy::setNumColors(unsigned int colors)
{
	this->_numColorInPack = colors; 
	cout << "(Dairy) Number of colors in pack added." << endl;
}