#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - Prints every minute of the day
 *
 * Description: This function prints every minute of a 24-hour day,
 * from 00:00 to 23:59, using the format HH:MM.
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

		for (hour = 0; hour < 24; hour++)
		{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');

		}
	}
}
