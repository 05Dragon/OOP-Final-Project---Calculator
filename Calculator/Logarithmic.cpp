//Import Logarigmmic header file
#include "Logarithmic.h"

//Implements blank logarithmic constructor
Logarithmic::Logarithmic()
{

}

//Implements calc function to calculate logarithmic values
void Logarithmic::calc()
{
    //Set segment 1 of array equal to product
	double product = myArray[0];
	//if user enters invalid values
	if (product <= 0)
	{
		//Display error message
		cout << "Undefined" << endl;
	}
	else
	{
		//Calculate log of number in segment
		product = log10(product);
		//Display calculted log values
		cout << product;
	}
}

//Implement logarithimic deconstructor
Logarithmic::~Logarithmic()
{

}