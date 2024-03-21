#include "Division.h"
#include <string>

Division::Division() {
}

void Division::calc(double* myArray, int size)
{
	double result = myArray[0];
	for (int i = 1; i < size ; i++)
	{
		result /= myArray[i];
	}
	cout << result;
}

Division::~Division() {
}
