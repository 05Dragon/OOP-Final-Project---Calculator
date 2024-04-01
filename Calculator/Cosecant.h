#ifndef COSECANT_H
#define COSECANT_H
#include "Numbers.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Cosecant: public Numbers
{

public:

	Cosecant();
	void calc(double* MyArray, int size);
	~Cosecant();
};

#endif // !COSECANT_H