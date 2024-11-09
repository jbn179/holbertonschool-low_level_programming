#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that adds positive numbers.
 * Return: 0 if success, 1 if error
*/

int main(int argc, char *argv[])		// Déclaration de la fonction main avec les paramètres standards :
										// - argc : le nombre d'arguments passés au programme (y compris le nom du programme)
										// - argv : tableau de chaînes contenant les arguments passés au programme

{						// Déclaration et initialisation des variables :
	int sum = 0;		// - sum : pour stocker la somme des nombres fournis en arguments
	int i, j;			// - i et j : pour les boucles d'itération

	if (argc == 1)		// Vérifie si aucun argument n'a été passé (juste le nom du programme)
	{
		printf("0\n");		// Si c'est le cas, affiche "0" et termine le programme avec succès
		return (0);			//
	}

	for (i = 1; i < argc; i++)		// Boucle qui parcourt tous les arguments à partir de l'indice 1 (ignorer le nom du programme)
	{
		for (j = 0; argv[i][j] != '\0'; j++)		// Boucle interne qui parcourt chaque caractère de l'argument actuel argv[i]
		{
			if (!isdigit(argv[i][j]))		// Vérifie si chaque caractère de l'argument est un chiffre en utilisant isdigit()
			{
				printf("Error\n");		// Si un caractère n'est pas un chiffre, affiche "Error" et termine le programme avec un code d'erreur (1)
				return (1);
			}

		}

		sum += atoi(argv[i]);		// Convertit l'argument actuel en entier avec atoi() et l'ajoute à sum
	}

	printf("%d\n", sum);		// Affiche la somme totale des nombres fournis en arguments
	return (0);		// Termine le programme avec un code de succès (0)
}
