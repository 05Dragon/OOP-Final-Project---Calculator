//Import header files
#include "Subtraction.h"
#include <fstream>

//Blank Subtraction constructor
Subtraction::Subtraction()
{
}

//Implement calc function to perform subtraction calculations
void Subtraction::calc()
{
	//Set segment 1 of array equal to product
	double product = myArray[0];
	//for loop to iterate through number array
	for (int i = 1; i < Size; i++)
	{
		//perform multiplication operation on segment
		product -= myArray[i];
	}
	//Display final calcuated value
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

//Implement destructor
Subtraction::~Subtraction()
{

}