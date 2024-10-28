#include "main.h"

/**
 * print_triangle - function that prints a triangle in the terminal.
 * @size: size of the triangle
 * Description: prints a triangle in the terminal
 * Return: void
 */

void print_triangle(int size)

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
				if (j <= i)
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
