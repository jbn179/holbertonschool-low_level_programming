#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that prints the number of arguments passed into it.
 * Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
