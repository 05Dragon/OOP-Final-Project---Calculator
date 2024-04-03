#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Subtraction : public Numbers
{
public:
	Subtraction();
	void calc(double* myArray, int size);
	~Subtraction();
};

#endif