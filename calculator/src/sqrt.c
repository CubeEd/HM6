#include "calc.h"
#include <math.h>
#include <stdio.h>

double square_root(double n) 
{
    if (n < 0) 
    {
        printf( "Error: Square root of a negative number\n");
        return -1.0;
    }
    return sqrt(n);
}