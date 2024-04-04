//Define Header file and summon libraries
#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Subtraction as a child of Numbers
class Subtraction : public Numbers
{
public:
	//Create default subtraction function
	Subtraction();
	//Create calc function for math operations
	void calc();
	//Virtual function, that calculates the result needed for game1
	virtual double calcGameSubtract(double*);
	//Create subtraction destructor
	~Subtraction();
};

#endif