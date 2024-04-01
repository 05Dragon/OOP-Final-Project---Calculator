#include "Addition.h"

Addition::Addition()
{
}

void Addition::calc(double* myArray, int size)
{
	double product = myArray[0];
	for (int i = 0; i < size; i++)
	{
		product += myArray[i];
	}
	cout << product;
}


Addition::~Addition()
{

}