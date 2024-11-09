#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that multiplies two numbers.
 * Return: 0 if success, 1 if error
*/

int main(int argc, char *argv[])		// Déclaration de la fonction main avec les paramètres standards :
										// - argc : nombre d'arguments passés au programme
										// - argv : tableau de chaînes contenant les arguments
{
	int result, num1, num2;		// Déclaration des variables entières pour stocker le résultat et les deux nombres à multiplier

	if (argc != 3)		// Vérifie si le nombre d'arguments est exactement 3 (nom du programme + 2 nombres)
	{
		printf("Error\n");		// Si ce n'est pas le cas, affiche "Error" et quitte le programme avec un code d'erreur (1)
		return (1);				//
	}

	num1 = atoi(argv[1]);		// Convertit les arguments 1 et 2 (qui sont des chaînes) en entiers
	num2 = atoi(argv[2]);		// atoi() est utilisé pour cette conversion
	result = num1 * num2;		// Multiplie les deux nombres et stocke le résultat

	printf("%d\n", result);		// Affiche le résultat de la multiplication

	return (0);		// Termine le programme avec un code de succès (0)
}
