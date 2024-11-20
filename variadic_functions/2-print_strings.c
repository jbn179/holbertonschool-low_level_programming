#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints a string
 * @separator: the string to be printed between numbers
 * @n: number of strings passed to the function
 * @...: variable number of strings to be printed
 * Description: function that prints a string
 * if separator is NULL, not printed
 * if one of the string is NULL, print (nil)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");

		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);

}
