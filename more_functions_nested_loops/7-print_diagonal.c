#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line in the terminal.
 * @n: number of times the character \ should be printed
 * Description: draws a diagonal line in the terminal.
 * Return: void
 */

void print_diagonal(int n)

{

	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
