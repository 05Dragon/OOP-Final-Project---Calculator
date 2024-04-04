//Define Header file and summon libraries
#ifndef SINE_H
#define SINE_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Sine as a child of Numbers
class Sine : public Numbers
{
public:
	//Create default sine function
	Sine();
	//Create calc function for math operations
	void calc();
	//Create sine destructor
	~Sine();
};

#endif