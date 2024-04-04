//Import Addition header file
#include "Addition.h"
#include <fstream>

//Implements default addition constructor
Addition::Addition()
{
}

//Implements calc function that will be used to perform addition operations
void Addition::calc()
{
	//Set segment 1 of array equal to product
	double product = myArray[0];
	//for loop to iterate through number array
	for (int i = 1; i < Size; i++)
	{
		//perform addition operation on segment
		product += myArray[i];
	}
	//Display final calcuated value
	cout << product;
}

//Virtual function: Called from game1
double Addition::calcGamePlus(double* myArray)
{
	//Creates "Results.txt", calculates the result of the addition and writes it in the file
	ofstream writer;
	writer.open("Results.txt");

	double product = myArray[0];
	for (int i = 1; i < 2; i++)
	{
		product += myArray[i];
	}
	writer << product;
	writer.close();
	return 1;
}

//Implement destructor
Addition::~Addition()
{

}