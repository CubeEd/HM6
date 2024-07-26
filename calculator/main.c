// src/main.c
#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

void print_menu() 
{
    printf("Select operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Factorial\n");
    printf("6. Square Root\n");
    printf("0. Exit\n");
}

int main() 
{
    int choice, a, b;
    double result;

    while (1) 
    {
        print_menu();
        printf("Enter your choice: ");
        if (scanf("%d", &choice) != 1) 
        {
            printf("Error: Invalid input\n");
            exit(EXIT_FAILURE);
        }

        switch (choice) 
        {
            case 1:
                printf("Enter two numbers: ");
                if (scanf("%d %d", &a, &b) != 2) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Enter two numbers: ");
                if (scanf("%d %d", &a, &b) != 2) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                printf("Result: %d\n", subtract(a, b));
                break;
            case 3:
                printf("Enter two numbers: ");
                if (scanf("%d %d", &a, &b) != 2) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                printf("Result: %d\n", multiply(a, b));
                break;
            case 4:
                printf("Enter two numbers: ");
                if (scanf("%d %d", &a, &b) != 2) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                result = divide(a, b);
                if (b != 0) 
                {
                    printf("Result: %f\n", result);
                }
                break;
            case 5:
                printf("Enter a number: ");
                if (scanf("%d", &a) != 1) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                printf("Result: %ld\n", factorial(a));
                break;
            case 6:
                printf("Enter a number: ");
                if (scanf("%lf", &result) != 1) 
                {
                    printf("Error: Invalid input\n");
                    exit(EXIT_FAILURE);
                }
                result = square_root(result);
                if (result != -1) 
                {
                    printf("Result: %f\n", result);
                }
                break;
            case 0:
                printf("Exiting...\n");
                exit(EXIT_SUCCESS);
            default:
                printf( "Error: Invalid choice\n");
        }
    }

    return 0;
}
