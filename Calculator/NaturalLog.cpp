#include "NaturalLog.h"
#include <cmath>
#include <iostream>
using namespace std;

NaturalLog::NaturalLog()
{
}

void NaturalLog::ln(double* myArray, int size)
{
	double result = log(myArray[0]) / log(2.718281828);
	cout << result;
	/*double* arrays = new double[size];

	for (int i = 0; i < size; i++)
	{
		arrays[i] = log(myArray[i])/log(2.718281828);
	}
	calc(arrays, size);
	*/
}

NaturalLog::~NaturalLog()
{
}
