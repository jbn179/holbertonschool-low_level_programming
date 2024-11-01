#include "main.h"
#include <stdio.h>

/**
 * cap_string -  capitalizes all words of a string.
 * @str: string to modify
 * Description:  capitalizes all words of a string.
 * Return: string
 */

char *cap_string(char *str)
{

int i = 0;

char spe[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
'"', '(', ')', '{', '}'};

while (str[i] != '\0')
{
    int j = 0;

    if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
    {
        str[i] -= 32;
    }

    while (j < 13)
    {
        if (str[i] == spe[j])
        {
            if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
            {
                str[i + 1] -= 32;
            }
            break;
        }
        j++;
    }
    i++;
}

return (str);
}
