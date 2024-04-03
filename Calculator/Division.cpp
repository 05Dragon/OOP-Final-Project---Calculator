//Import Division header and call library
#include "Division.h"
#include <string>

//Implement default division constructor
Division::Division() {
}

//Implement calc funtion to perform division calculations
void Division::calc()
{
	//Set inital value of of result equal to segment 1 of number array
	double result = myArray[0];
	//for loop to iterate through number array
	for (int i = 1; i < Size ; i++)
	{
		//Perform division calculation on segment
		result /= myArray[i];
	}
	//Display final number calculation
	cout << result;
}

//Implement destructor
Division::~Division() {
}

