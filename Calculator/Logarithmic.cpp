#include "Logarithmic.h"

Logarithmic::Logarithmic()
{

}

void Logarithmic::calc(double* myArray, int size)
{
	double product = myArray[0];
	if (product <= 0)
	{
		cout << "Undefined" << endl;
	}
	else
	{
		product = log10(product);
		cout << product;
	}
}


Logarithmic::~Logarithmic()
{

}