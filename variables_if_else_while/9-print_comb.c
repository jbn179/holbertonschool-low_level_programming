#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
int single_digit;

for (single_digit = 0; single_digit < 10; single_digit++)
{
putchar (single_digit + '0');
if (single_digit < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
