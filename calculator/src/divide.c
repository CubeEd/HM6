#include "calc.h"
#include <stdio.h>

double divide(int a, int b) 
{
    if (b == 0) 
    {
        printf("Error: Division by zero\n");
        return 0.0; // return zero or handle error appropriately
    }
    return (double)a / b;
}