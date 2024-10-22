#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 *
 * description: prints the alphabet in lowercase, 10x times, and a new line
 */

void print_alphabet_x10(void)
{
char ch;
int mul;

for (mul = 0; mul < 10; mul++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}
}
