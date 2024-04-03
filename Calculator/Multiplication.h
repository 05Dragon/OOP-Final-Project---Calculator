//Define Header file and summon libraries
#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Multiplication as child of Numbers
class Multiplication: public Numbers
{
public:

    //default constructor
	Multiplication();
	 

	void calc();
	//Multiplication functionw where it takes in numbers from the file 
	// and if user inputs the "x" in the file which represents multiplication
	// the function will calculate the numbers and return the product of the numbers to
	// the user 
	// virtual function is used

	//Virtual function, that calculates the result needed for game1
	virtual double calcGameMultiply(double*);

	~Multiplication();
	//destrcutor to free up dynamically allocated memory 
	// put into public part of class so it can be used in other classes in order for the calculator to actually 
	// function. use of inheritance is explict in order for calculator to operate. 
	// 
};

#endif // !MULTIPLICATION_H