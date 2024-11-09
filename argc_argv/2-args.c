#include "main.h"
#include <stdio.h>

/**
 * main - program that prints all arguments it receives.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that prints all arguments it receives.
 * Return: 0
*/

int main(int argc, char *argv[])		// Déclaration de la fonction main avec les paramètres standards :
										// - argc : le nombre d'arguments passés au programme (y compris le nom du programme)
										// - argv : tableau de chaînes contenant les arguments passés au programme
{
	int i;		// Déclaration d'une variable entière i pour l'itération dans la boucle

	for (i = 0; i < argc; i++)		// Boucle for qui itère de 0 à argc - 1
									// Cela permet de parcourir tous les arguments passés au programme
	{
		printf("%s\n", argv[i]);		// Affiche chaque argument sur une nouvelle ligne
										// argv[i] accède à l'argument à l'indice i
	}
	return (0);		// Termine le programme avec un code de succès (0)
}
