//Define Header file and summon libraries
#ifndef IMAGINERYNUMBERS_H
#define IMAGINERYNUMBERS_H
#include "Numbers.h"

//Define ImagineryNumbers as child of Numbers
class ImagineryNumbers: public Numbers
{
public:
	//Set inital value of result 
	ImagineryNumbers();
	//Create calc function for immaginary numbers operation
	void calc();
	//Create destructor
	~ImagineryNumbers();

};

#endif // !IMAGINERYNUMBERS_H
