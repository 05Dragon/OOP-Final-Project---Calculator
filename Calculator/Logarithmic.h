//Define Header file and summon libraries
#ifndef LOGARITHMIC_H
#define LOGARITHMIC_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Logarithmic as a child of Numbers
class Logarithmic : public Numbers
{
public:
	//Create default logarithmic constructor
	Logarithmic();
    //Create calc function for math operation
	void calc();
	//Create logarithmic destructor
	~Logarithmic();
};

#endif