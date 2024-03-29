#include "Multiplication.h"
#include <cmath>
#include <string>
#include <iostream>

Multiplication::Multiplication()
{
}

void Multiplication:: calc(double* myArray, int size)
{
	double product = myArray[0];
	for (int i = 0; i < size; i++)
	{
		product *= myArray[i];
	}

	cout << product;
}

Multiplication::~Multiplication()
{


}