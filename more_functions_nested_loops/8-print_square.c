#include "main.h"

/**
 * print_square - function that prints a square in the terminal.
 * @size: size of the square
 * Description: prints a square in the terminal
 * Return: void
 */

void print_square(int size)

{

	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
