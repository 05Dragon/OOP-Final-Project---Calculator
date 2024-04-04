//Import header files
#include "Tangent.h"
#include <cmath>

//Blank Subtraction constructor
Tangent::Tangent()
{
}

//Implement calc function to perform tangent calculations
void Tangent::calc()
{
	//Set inital value of result 
	double result = tan(myArray[0]);
	//Display calculated tan value
	cout << result;
}

//Implement destructor
Tangent::~Tangent()
{
}