#include "Subtraction.h"

Subtraction::Subtraction()
{
}

void Subtraction::calc(double* myArray, int size)
{
	double product = myArray[0];
	for (int i = 0; i < size; i++)
	{
		product -= myArray[i];
	}
	cout << product;
}


Subtraction::~Subtraction()
{

}