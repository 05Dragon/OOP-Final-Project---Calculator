#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Numbers {
protected:
    double* myArray;
    int Size;
    char operation;
    string function;

public:
    Numbers();
    virtual void calc(double* myArray, int size);
    int getSize() { return Size; }
    char getOpe() { return operation; }
    double* getArray() { return myArray; }
    string getFunction() { return function; }
    ~Numbers();  // Empty destructor
};

#endif

