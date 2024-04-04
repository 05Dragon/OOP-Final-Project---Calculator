//Import Sine header file and summon libraries
#include "Sine.h"

//Implement default constructor
Sine::Sine()
{
}

//Implement calc function to perform sine calculations
void Sine::calc()
{
	double product = myArray[0];
	cout << sin(product) << endl;
}

//Implement sine destructor
Sine::~Sine()
{

}