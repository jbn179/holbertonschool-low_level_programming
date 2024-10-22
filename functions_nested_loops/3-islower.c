#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 *
 * Description: This function checks if a given character is lowercase
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)

{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
