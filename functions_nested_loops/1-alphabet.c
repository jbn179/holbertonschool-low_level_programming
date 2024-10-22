#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet
 *
 * description: prints the alphabet in lowercase, followed by a new line
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
print_alphabet();
return (0);
}
