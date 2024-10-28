#include "main.h"

/**
 * _isdigit - checks for a digit (O through 9)
 * @c: The character to check
 *
 * Description: This function checks if a given character is digit
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)

{
if (c >= '1' && c <= '9')
return (1);
else
return (0);
}
