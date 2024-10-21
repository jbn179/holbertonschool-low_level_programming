#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * description: using the putchar function
 * Return: Always 0 (Success)
 */

int main(void)

{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	putchar('\n');

return (0);
}
