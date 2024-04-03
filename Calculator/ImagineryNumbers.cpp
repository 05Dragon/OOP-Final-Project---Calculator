#include "ImagineryNumbers.h"

const double e = 2.71828;
ImagineryNumbers::ImagineryNumbers()
{
}

void ImagineryNumbers::calc()
{
	if (function.compare("rectangular->polar") == 0)
	{
		double z = sqrt((myArray[0] * myArray[0]) + (myArray[1] * myArray[1]));
		double angle = atan(myArray[1] / myArray[0]);
		cout << z << " " << angle;
	}
	else if (function.compare("rectangular->exponential") == 0)
	{
		double z = sqrt((myArray[0] * myArray[0]) + (myArray[1] * myArray[1]));
		double angle = atan(myArray[1] / myArray[0]);
		cout << z << " " << "e^" << angle << "i" << endl;
	}
	else if (function.compare("polar->exponential") == 0)
	{
		double z = myArray[0];
		double angle = myArray[1];
		cout << z << " " << "e^" << angle << "i" << endl;
	}
	else if (function.compare("polar->rectangular") == 0)
	{
		double x = myArray[0] * cos(myArray[1]);
		double y = myArray[0] * sin(myArray[1]);
		cout << x << " + " << y << "i" << endl;
	}
}

ImagineryNumbers::~ImagineryNumbers()
{
}