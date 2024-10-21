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
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
return (0);
}
