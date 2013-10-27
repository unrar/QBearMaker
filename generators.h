#include <stdlib.h>
#include <iostream>
#include <mainwindow.h>
#ifndef GENERATORS_H_INCLUDED
#define GENERATORS_H_INCLUDED

using namespace std;

/* Variable Declarations */

extern string colors[9]; // Array with all the colors.
extern string sizes[5]; // Array with all the sizes.

/* Function Declarations */

string getcolor(); // Get a random color
string getsize(); // Get a random size


#endif // GENERATORS_H_INCLUDED
