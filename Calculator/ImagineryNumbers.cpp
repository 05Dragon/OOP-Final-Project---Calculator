#include "ImagineryNumbers.h"

const double e = 2.71828;
ImagineryNumbers::ImagineryNumbers()
{
}

void ImagineryNumbers::calc(double* myArray, int size)
{
	if (function.compare("rectangular->polar") == 0)
	{
		double z = sqrt((myArray[0] * myArray[0]) + (myArray[1] * myArray[1]));
		double angle = 1 / tan(myArray[1] / myArray[0]);
		cout << z << " " << angle;
	}
	else if (function.compare("rectangular->exponential"))
	{
		double z = sqrt((myArray[0] * myArray[0]) + (myArray[1] * myArray[1]));
		double angle = 1 / tan(myArray[1] / myArray[0]);
		cout << z << " " << pow(e, angle);
	}
	else if (function.compare("polar->exponential"))
	{
		double z = sqrt((myArray[0] * myArray[0]) + (myArray[1] * myArray[1]));
		double angle = tan(myArray[1]);
		cout << z << " " << pow(e, angle);
	}
}

ImagineryNumbers::~ImagineryNumbers()
{
}