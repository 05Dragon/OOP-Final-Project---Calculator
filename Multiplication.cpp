#include "Multiplication.h"
#include <cmath>
#include <string>
#include <iostream>
Multiplication::Multiplication()
{


}

void Multiplication::productofnumbers(double* MyArray, int size)
{
	double product = MyArray[0];
	for (int i = 0; i < size; i++)
	{
		product *= MyArray[i];


	}

	cout << product;
}

Multiplication::~Multiplication()
{


}
