//Import Cotangent header file and summon libraries
#include "Cotangent.h"
#include <cmath>

//Implement default constructor
Cotangent::Cotangent()
{
}

//Implement calc function to perform cotangent calculations
void Cotangent::calc()
{
	//Set the value of result equal to 1 / (tan * first segment of array)
	double result = 1/tan(myArray[0]);
	//Display final calculated value
	cout << result;
}

//Implement destructor
Cotangent::~Cotangent()
{
}