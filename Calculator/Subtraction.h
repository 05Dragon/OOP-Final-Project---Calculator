#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Subtraction : public Numbers
{
public:
	Subtraction();
	void calc();

	//Virtual function, that calculates the result needed for game1
	virtual double calcGameSubtract(double*);

	~Subtraction();
};

#endif