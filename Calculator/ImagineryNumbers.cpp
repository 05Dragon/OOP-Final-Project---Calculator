//Import ImagineryNumbers header file
#include "ImagineryNumbers.h"

//Implements default imaginery constructor
ImagineryNumbers::ImagineryNumbers()
{
}

//Implements calc function that will be used to perform imaginery numbers operations
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
	else if (function.compare("exponential->polar") == 0)
	{
		double z = myArray[0];
		double angle = myArray[1];
		cout << z << " " << angle;
	}
	else if (function.compare("exponential->rectangular") == 0)
	{
		double x = myArray[0] * cos(myArray[1]);
		double y = myArray[0] * sin(myArray[1]);
		cout << x << " + " << y << "i" << endl;
	}
}
//Implement destructor
ImagineryNumbers::~ImagineryNumbers()
{
}