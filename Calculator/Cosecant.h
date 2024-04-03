//Define Header file and summon libraries
#ifndef COSECANT_H
#define COSECANT_H
#include "Numbers.h"
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//Define Cosecant as a child of Numbers
class Cosecant: public Numbers
{

public:
	//Create default cosecant function
	Cosecant();
	//Create calc function for math operations
	void calc();
	//Create destuctor
	~Cosecant();
};

#endif // !COSECANT_H