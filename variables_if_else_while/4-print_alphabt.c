#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * description: using the putchar function and !=
 * Return: Always 0 (Success)
 */

int main(void)

{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
putchar(ch);
}
putchar('\n');
return (0);
}
