#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * Description: changes all lowercase letters of a string to uppercase.
 * Return (0)
 */

char *string_toupper(char *)
{

    char *str;

    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
        }
        
        i++;
    }
    return str;
}