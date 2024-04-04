//Define Header file and summon libraries
#ifndef NATURALLOG_H
#define NATURALLOG_H
#include "Numbers.h"

//Define Natural Log as child of Numbers
class NaturalLog:public Numbers
{
public:

	//Create default natural log function
	NaturalLog();
	//Create calc function for math operations
	void calc();
	//Create natural log destructor
	~NaturalLog();

private:

};

#endif // !NATURALLOG_H
