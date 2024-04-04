//Define Header file and summon libraries
#ifndef TANGENT_H
#define TANGENT_H
#include "Numbers.h"

//Define Tangent as a child of Numbers
class Tangent : public Numbers
{
public:
	//Create default tangent function
	Tangent();
	//Create calc function for math operations
	void calc();
	//Create tangent destructor
	~Tangent();

};

#endif // !TANGENT_H
