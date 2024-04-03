#include "Tangent.h"
#include <cmath>

Tangent::Tangent()
{
}

void Tangent::calc(double* myArray, int size)
{
	double result = tan(myArray[0]);
	cout << result;
}

Tangent::~Tangent()
{
}