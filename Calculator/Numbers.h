#ifndef NUMBERS_H
#define NUMBERS_H

#include <iostream>
#include "Division.h"
#include <string>
#include <iomanip>

using namespace std;

class Numbers : public Division {
protected:
    double* myArray;
    int Size;
    char operation;

public:
    Numbers();
    // void operator<<(Numbers num);
    ~Numbers();  // Empty destructor
};

#endif

