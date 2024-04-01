#ifndef ADDITION_H
#define ADDITION_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Addition : public Numbers
{
public:
	Addition();
	void calc(double* myArray, int size);
	~Addition();
};

#endif