#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * description: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}

/**
 * main - Entry point of the program
 *
 * description: call print_alphabet function
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet()
return (0);
}
