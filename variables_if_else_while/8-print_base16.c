#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
int digit;

for (digit = '0'; digit <= 'f'; digit++)
{
if ((digit <= '9') || (digit >= 'a'))
putchar (digit);
}
putchar('\n');
return (0);
}
