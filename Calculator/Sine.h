#ifndef SINE_H
#define SINE_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Sine : public Numbers
{
public:
	Sine();
	void calc(double* myArray, int size);
	~Sine();
};

#endif