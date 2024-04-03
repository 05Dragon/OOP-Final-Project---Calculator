//Define Cosine header file and summon libraries
#ifndef COSINE_H
#define COSINE_H
#include "Numbers.h"
#include <iostream>

using namespace std;

//Define Cosine as a child of numbers
class Cosine : public Numbers
{
public:
	//Create blank cosine constructor
	Cosine();
	//Create calc function to do cosine calculations
	void calc();
	//Create cosine destructor
	~Cosine();
};

#endif