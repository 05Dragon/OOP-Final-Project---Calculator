#ifndef COTANGENT_H
#define COTANGENT_H
#include "Numbers.h"

class Cotangent: public Numbers
{
public:
	Cotangent();
	void calc(double* myArray, int size)override;
	~Cotangent();

};

#endif // !COTANGENT_H
