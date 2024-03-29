#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H
#include "Numbers.h"

class QuadraticEquation: public Numbers
{
public:
	QuadraticEquation();
	void calc(double* myArray, int size);
	~QuadraticEquation();
};

#endif // !QUADRATICEQUATION_H
