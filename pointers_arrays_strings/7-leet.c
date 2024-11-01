#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @str: string to modify
 * Description: encodes a string into 1337.
 * Return: string
 */

char *leet(char *str)
{

int i = 0;

char *let = "aAeEoOtTlL";
char *num = "4433007711";

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 10)
		{
			if (str[i] == let[j])
			{
				str[i] = num[j];
				break;
			}
			j++;
		}
		i++;
	}
return (str);
}
