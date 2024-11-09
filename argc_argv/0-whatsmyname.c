#include "main.h"
#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that prints its name, followed by a new line
 * Return: 0
*/

int main(int argc __attribute__((unused)), char *argv[])		// Déclaration de la fonction main avec les paramètres standards :
																// - argc : le nombre d'arguments passés au programme (ici, il est marqué comme inutilisé avec attribute((unused)))
																// - argv : tableau de chaînes contenant les arguments passés au programme
																// La fonction renvoie un entier
{
	printf("%s\n", *argv);		// Affiche le premier argument passé au programme (le nom du programme lui-même)
								// *argv déreferencie le pointeur pour obtenir la chaîne de caractères

	return (0);		// Termine le programme avec un code de succès (0)
}
