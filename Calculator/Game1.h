#ifndef GAME1_H
#define GAME1_H
#include "Numbers.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>
#include <ctime>
#include <chrono>
#include <thread>
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
using namespace std;
//Calls libraries needed for the timer
using namespace std::this_thread;
using namespace std::chrono_literals;
using chrono::system_clock;

//Creates the class game1, (The parents for the class are addition, subtraction and multiplication)
class game1 : Addition, Subtraction, Multiplication
{
private:
	const int gameSize = 3;
	const int SIZE = 6;
	double num;
	double result;
	char ope = ' ';
	double* numbers;
	double* tempNums;
	Addition add;
	Subtraction subtract;
	Multiplication multiply;
public:
	game1();
	void start();
	void menu();
	void game();
	double* generateValues(double*, int, int);
	int select(char option);
	virtual double calcGamePlus(double*);
	virtual double calcGameSubtract(double*);
	virtual double calcGameMultiply(double*);
	void calculateNums(double* numbers);
	~game1();
};
#endif