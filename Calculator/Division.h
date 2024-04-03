//Define Division header and summon libraries
#ifndef DIVISION_H
#define DIVISION_H

#include "Numbers.h"
#include <iostream>
using namespace std;

//Define division as a child of numbers
class Division : public Numbers {

public:
    //Create blank division constructor 
    Division();
    //Create calc function to perform divison calculation
    void calc();
    //Create division destructor
    ~Division();
};

#endif
