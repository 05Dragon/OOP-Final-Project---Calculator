//Import NaturalLog header file and summon libraries
#include "NaturalLog.h"
#include <cmath>
#include <iostream>
using namespace std;

//Implement default constructor
NaturalLog::NaturalLog()
{
}

//Implement calc function to perform natural log calculations
void NaturalLog::calc()
{
    //Set result equal to segment 1 / natural log
	double result = log(myArray[0]) / log(2.718281828);
	//Display calculated value
	cout << result;

}

//Implement destructor
NaturalLog::~NaturalLog()
{
}
