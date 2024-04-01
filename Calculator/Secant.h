#ifndef SECANT_H
#define SECANT_H
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

class Secant
{
public:
	Secant();
	virtual void calc(double* MyArray, int size);
	~Secant();

};
#endif