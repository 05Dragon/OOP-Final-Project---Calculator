#include "Secant.h"
#include <cmath>
#include <string>
#include <iostream>

Secant::Secant()
{
}

void Secant::calc(double* MyArray, int size)
{
	double secantresult = 0.0;
	for (int i = 0; i < size; i++)
	{
		secantresult = 1 / cos(MyArray[i]);
		cout << secantresult;
	}
	if (secantresult == 0)
	{
		cout << "math ERROR" << endl;
		// as this occurs in a real calculator, we must inplement a if statement 
		// that if the result of the cosecant calculation is zero, we must return a 
		// statement that informs the user that it is a math error
		// a math error will occur when user inputs 90 or 270 for sec() or numbers with increments 
		// of 180 that add to the orignial two numbers, for example (450,630,810,990,1170,1350 etc)
		// error will also when number inputted 
	}
}

Secant::~Secant()
{

}