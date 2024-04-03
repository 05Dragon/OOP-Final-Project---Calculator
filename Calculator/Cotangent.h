//Define Cotangent header file and summon libraries
#ifndef COTANGENT_H
#define COTANGENT_H
#include "Numbers.h"

//Define Cotangent as a child of Numbers
class Cotangent: public Numbers
{
public:
	//Create blank Cotangent constructor
	Cotangent();
	//Create function to do cotangent calculation
	void calc();
	//Create cotangent destructor
	~Cotangent();

};

#endif // !COTANGENT_H
