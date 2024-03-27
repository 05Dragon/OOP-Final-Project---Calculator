#pragma once
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

class Multiplication
{

private:



public:

	Multiplication();
	// default constructor 
	virtual void productofnumbers(double *MyArray, int size);
	//Multiplication functionw where it takes in numbers from the file 
	// and if user inputs the "x" in the file which represents multiplication
	// the function will calculate the numbers and return the product of the numbers to
	// the user 
	// virtual function is used
	~Multiplication();
	//destrcutor to free up dynamically allocated memory 
	// put into public part of class so it can be used in other classes in order for the calculator to actually 
	// function. use of inheritance is explict in order for calculator to operate. 
	// 
};



