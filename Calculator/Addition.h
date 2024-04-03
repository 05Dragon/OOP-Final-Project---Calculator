//Define Header file and summon libraries
#ifndef ADDITION_H
#define ADDITION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Addition as child of Numbers
class Addition : public Numbers
{
//Create public functions and variables
public:
	//Create default addition function
	Addition();
	//Create calc function for math operation
	void calc();

	//Virtual function, that calculates the result needed for game1
	virtual double calcGamePlus(double*);

	//Create destructor
	~Addition();
};

#endif