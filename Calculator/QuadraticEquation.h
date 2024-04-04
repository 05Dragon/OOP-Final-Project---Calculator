//Define header file and summon libaries
#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H
#include "Numbers.h"

//Define QuadraticEquation as a child of Numbers
class QuadraticEquation: public Numbers
{
public:
	//Create default quadratic equation function
	QuadraticEquation();
	//Create calc function for math operations
	void calc();
	//Create destuctor
	~QuadraticEquation();
};

#endif // !QUADRATICEQUATION_H
