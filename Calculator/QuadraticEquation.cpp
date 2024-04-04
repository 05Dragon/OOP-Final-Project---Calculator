//Import Quadratic equation header file and summon libraries
#include "QuadraticEquation.h"

//Implement default constructor
QuadraticEquation::QuadraticEquation()
{
}

//Implement calc function to perform quadratic equation calculations
void QuadraticEquation::calc()
{
	//calcualate quadratic equation
	double result[2];
	result[0] =  (- myArray[1] + sqrt((myArray[1] * myArray[1]) - (4 * (myArray[0]) * (myArray[2])))) / (2 * myArray[0]);
	result[1] = (-myArray[1] - sqrt((myArray[1] * myArray[1]) - (4 * (myArray[0]) * (myArray[2])))) / (2 * myArray[0]);
	cout << "X1 = " << result[0] << endl;
	cout << "X2 = " << result[1];
}

//Implement destructor
QuadraticEquation::~QuadraticEquation()
{
}