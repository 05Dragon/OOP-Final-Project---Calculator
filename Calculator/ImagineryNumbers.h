#ifndef IMAGINERYNUMBERS_H
#define IMAGINERYNUMBERS_H
#include "Numbers.h"

class ImagineryNumbers: public Numbers
{
public:
	ImagineryNumbers();
	void calc(double* myArray, int size);
	~ImagineryNumbers();

};

#endif // !IMAGINERYNUMBERS_H
