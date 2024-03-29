#include "Cotangent.h"
#include <cmath>

Cotangent::Cotangent()
{
}

void Cotangent::calc(double* myArray, int size)
{
	double result = 1/tan(myArray[0]);
	cout << result;
}

Cotangent::~Cotangent()
{
}