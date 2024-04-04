//Define Header file and summon libraries
#ifndef SECANT_H
#define SECANT_H
#include <cmath>
#include <iostream>
#include <string>
#include "Numbers.h"

using namespace std;

//Define Secant as a child of Numbers
class Secant : public Numbers
{
public:
	//Create default Secant function
	Secant();
	//Create calc function for math operations
	void calc();
	//Create destructor
	~Secant();

};
#endif