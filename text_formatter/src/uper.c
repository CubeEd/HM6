#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "convert.h"

int main() 
{
    char input[256];

    printf("Enter text to convert to uppercase: ");
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        perror("Error reading input");
        return EXIT_FAILURE;
    }

    // Remove newline character if present
    input[strcspn(input, "\n")] = '\0';

    to_upper(input);
    printf("Uppercase: %s\n", input);

    return EXIT_SUCCESS;
}
