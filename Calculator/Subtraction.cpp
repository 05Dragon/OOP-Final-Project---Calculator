//Import header files
#include "Subtraction.h"
#include <fstream>

//Blank Subtraction constructor
Subtraction::Subtraction()
{
}


void Subtraction::calc()
{
	double product = myArray[0];
	for (int i = 1; i < Size; i++)
	{
		product -= myArray[i];
	}
	cout << product;
}

//Virtual function: Called from game1
double Subtraction::calcGameSubtract(double* myArray)
{
	//Creates "Results.txt", calculates the result of the subtraction and writes it in the file
	ofstream writer;
	writer.open("Results.txt");

	double product = 1;

	product = myArray[0] - myArray[1];

	writer << product;
	writer.close();
	return 1;
}


Subtraction::~Subtraction()
{

}