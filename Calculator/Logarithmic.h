#ifndef LOGARITHMIC_H
#define LOGARITHMIC_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Logarithmic : public Numbers
{
public:
	Logarithmic();
	void calc(double* myArray, int size);
	~Logarithmic();
};

#endif