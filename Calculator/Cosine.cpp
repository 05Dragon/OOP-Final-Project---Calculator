//Import Cosine header file
#include "Cosine.h"

//Implement blank cosine constructor
Cosine::Cosine()
{
}

//Implement calc function to perform cosine calculations
void Cosine::calc()
{
	//Set value of first segment equal to double product
	double product = myArray[0];
	//Display calculation
	cout << cos(product) << endl;
}

//Implement destructor
Cosine::~Cosine()
{

}