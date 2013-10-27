#include "generators.h"

string colors[9] = {"Red", "Green", "Blue", "White", "Black", "Gray", "Pink", "Brown", "Orange" };

// Sizes array
string sizes[5] = {"XS", "S", "M", "L", "XL" };
string getcolor() {
    // Get a random color
    int rs = rand() % 9;
    return colors[rs];
}

// This function generates a random size
string getsize() {
    // Get a random size
    int rs = rand() % 5;
    return sizes[rs];
}
