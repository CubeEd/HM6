#include <stdio.h>
#include "calc.h"

long factorial(int n) 
{
    if (n < 0) 
    {
        printf("Error: Factorial of a negative number\n");
        return -1;
    }
    if (n == 0) 
    {
        return 1;
    }
    long result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}