//Import Cosecant header file
#include "Cosecant.h"
//Summon libraries
#include <cmath>
#include <string>

//Implement blank constructor
Cosecant::Cosecant()
{
}

//Implements calc function that will be used to perform cosecant operations
void Cosecant::calc()
{
	double Cosecantresult = 0.0;
	// set value to 0 as a base to hold the result of the cosecant calculation
	for (int i = 0; i < Size; i++)
	{

		Cosecantresult = 1 / sin(myArray[i]);
		// as cosecant is just sin^-1, this can just translate to 1 over sin
		cout << Cosecantresult;
		// prints out the result 

	}
	if (Cosecantresult == 0)
	{
		cout << " Math ERROR" << endl;
		// as this occurs in a real calculator, we must inplement a if statement 
		// that if the result of the cosecant calculation is zero, we must return a 
		// statement that informs the user that it is a math error
		// a math error will occur when user inputs 0 or 180 for cosec() or numbers with increments 
		// of 180, for example (540,720,800,1080,1260, etc)
	}
}

Cosecant::~Cosecant() {

	// destructor 
}