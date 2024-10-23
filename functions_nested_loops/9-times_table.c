#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Description: This function prints the 9 times table from 0x0 to 9x9,
 */

void times_table(void)
{
	int li, co, rs;

	for (li = 0; li < 10; li++)
	{
		for (co = 0; co < 10; co++)
		{
			rs = li * co;

			if (co == 0)
			{
				_putchar(rs + '0');
			}

			else if (rs < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(rs + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((rs / 10) + '0');
				_putchar((rs % 10) + '0');
			}
		}
		 _putchar('\n');
	}
}
