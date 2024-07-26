#include <ctype.h>
#include <string.h>
#include "convert.h"

void to_upper(char *str) 
{
    while (*str) 
    {
        *str = toupper((unsigned char)*str);
        str++;
    }
}

void to_lower(char *str) 
{
    while (*str) 
    {
        *str = tolower((unsigned char)*str);
        str++;
    }
}
