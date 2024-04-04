//SecretNumberguess .h
#ifndef SECRETNUMBERGUESS_H
#define SECRETNUMBERGUESS_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
class SecretNumberguess
{

public:
	//Create default SecretNumberGuess function
	SecretNumberguess();
	virtual void guessgame();
	~SecretNumberguess();


};

#endif // !SECRETNUMBERGUESS_H