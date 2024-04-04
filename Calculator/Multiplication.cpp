//Import Multiplication header file and summon libraries
#include "Multiplication.h"
#include <cmath>
#include <string>
#include <iostream>
#include <fstream>

//Implement default constructor
Multiplication::Multiplication()
{
}

//Implement calc function to perform multiplication calculations
void Multiplication:: calc()
{
    //Set segment 1 of array equal to product
	double product = myArray[0];
    //for loop to iterate through number array
	for (int i = 1; i < Size; i++)
	{
        //perform multiplication operation on segment
		product *= myArray[i];
	}
    //Display final calcuated value
	cout << product;
}

//Virtual function: Called from game1
double Multiplication::calcGameMultiply(double* myArray)
{
	//Creates "Results.txt", calculates the result of the multiplication and writes it in the file
	ofstream writer;
	writer.open("Results.txt");

	double product = 1;
	for (int i = 0; i < 2; i++)
	{
		product *= myArray[i];
	}

	writer << product;
	writer.close();
	return 1;
}
//Implement destructor
Multiplication::~Multiplication()
{


}