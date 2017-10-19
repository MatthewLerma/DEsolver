#ifndef DIFFEQ_H
#define DIFFEQ_H
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include "fraction.h"


using namespace std;

class diffeq
{
    public:
        //Constructors
        diffeq();


    private:
        fraction Original, First, Second;
};

#endif // DIFFEQ_H
