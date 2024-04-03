#ifndef SECANT_H
#define SECANT_H
#include <cmath>
#include <iostream>
#include <string>
#include "Numbers.h"

using namespace std;

class Secant : public Numbers
{
public:
	Secant();
	void calc();
	~Secant();

};
#endif