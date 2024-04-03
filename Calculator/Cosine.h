#ifndef COSINE_H
#define COSINE_H
#include "Numbers.h"
#include <iostream>

using namespace std;

class Cosine : public Numbers
{
public:
	Cosine();
	void calc(double* myArray, int size);
	~Cosine();
};

#endif