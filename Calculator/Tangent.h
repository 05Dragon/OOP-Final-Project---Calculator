#ifndef TANGENT_H
#define TANGENT_H
#include "Numbers.h"

class Tangent : public Numbers
{
public:
	Tangent();
	void calc(double* myArray, int size);
	~Tangent();

};

#endif // !TANGENT_H
