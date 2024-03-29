#include "QuadraticEquation.h"

QuadraticEquation::QuadraticEquation()
{
}

void QuadraticEquation::calc(double* myArray, int size)
{
	double result[2];
	result[0] =  (- myArray[1] + sqrt((myArray[1] * myArray[1]) - (4 * (myArray[0]) * (myArray[2])))) / (2 * myArray[0]);
	result[1] = (-myArray[1] - sqrt((myArray[1] * myArray[1]) - (4 * (myArray[0]) * (myArray[2])))) / (2 * myArray[0]);
	cout << "X1 = " << result[0] << endl;
	cout << "X2 = " << result[1];
}

QuadraticEquation::~QuadraticEquation()
{
}