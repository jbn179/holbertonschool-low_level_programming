#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - performs simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: performs simple operations
 * Return: 0 on success, 98 on wrong number of arguments,
 *         99 on invalid operator, 100 on division/modulo by zero
 */

int main(int argc, char *argv[])		// Déclaration de la fonction main avec les arguments standard argc et argv.
{
	int num1, num2, result;				// Déclaration des variables pour les opérandes (num1, num2), le résultat,
	int (*operation)(int, int);			// et un pointeur de fonction pour l'opération à effectuer.

	if (argc != 4)		// Vérifie si le nombre d'arguments est correct (4 : nom du programme + 2 opérandes + 1 opérateur).
	{
		printf("Error\n");		// Si ce n'est pas le cas, affiche "Error" et quitte avec le code 98.
		exit(98);
	}

	num1 = atoi(argv[1]);		// Convertit les arguments 1 et 3 (les opérandes) en entiers.
	num2 = atoi(argv[3]);		//

	operation = get_op_func(argv[2]);		// Utilise la fonction get_op_func pour obtenir le pointeur de fonction correspondant à l'opérateur (argv).

	if (operation == NULL)		// Si get_op_func retourne NULL (opérateur invalide), affiche "Error" et quitte avec le code 99.
	{							//
		printf("Error\n");		//
		exit(99);				//
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)		// Vérifie si l'opération est une division ou un modulo par zéro.
	{
		printf("Error\n");		// Si c'est le cas, affiche "Error" et quitte avec le code 100.
		exit(100);
	}

	result = operation(num1, num2);		// Effectue l'opération en utilisant le pointeur de fonction et affiche le résultat.
	printf("%d\n", result);				//

	return (0);		// Retourne 0 pour indiquer une exécution réussie.

}
