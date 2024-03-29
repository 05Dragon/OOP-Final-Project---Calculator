#ifndef DIVISION_H
#define DIVISION_H
#include "Numbers.h"

#include <iostream>
using namespace std;

class Division : public Numbers {

public:
    Division();
    void calc(double* myArray, int size)override;
    ~Division();
};

#endif
