#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * description: Prints a quote using the printf function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
{
printf("Last digit of %d is %d ", n, lastdigit);
}
if (lastdigit > 5)
{
	printf("and is greater than 5\n", n);
}
else if (lastdigit == 0)
{
	printf("and is 0\n", n);
}
else
{
	printf("and is less than 6 and not 0\n", n);
}
	return (0);
}
