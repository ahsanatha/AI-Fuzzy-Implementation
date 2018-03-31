#ifndef FUZZIFICATION_H_INCLUDED
#define FUZZIFICATION_H_INCLUDED

#include <iostream>
#include <string.h>

using namespace std;

struct elm {
    string tipe;
    float fuzz;
};

struct TesTulis {
    elm rendah;
    elm sedang;
    elm tinggi;
};

struct Wawancara {
    elm rendah;
    elm sedang;
    elm tinggi;
};

#endif // FUZZIFICATION_H_INCLUDED

