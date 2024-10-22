#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The number to check
 *
 * Description: prints the sign of a number
 * Return: 1 if positive 0 if equal -1 if negative
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
