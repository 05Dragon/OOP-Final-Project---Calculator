#ifndef DIVISION_H
#define DIVISION_H

#include <iostream>
using namespace std;

class Division {
private:

public:
    Division();
    virtual void calc(double* myArray, int size);
    ~Division();
};

#endif
