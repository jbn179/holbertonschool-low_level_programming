#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: program that prints the number of arguments passed into it.
 * Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))		// Déclaration de la fonction main avec les paramètres standards :
															// - argc : le nombre d'arguments passés au programme (y compris le nom du programme)
															// - argv : tableau de chaînes contenant les arguments passés au programme
															// Le tableau argv est marqué comme inutilisé avec __attribute__((unused)), ce qui indique au compilateur que ce paramètre peut ne pas être utilisé.
{
	printf("%d\n", argc - 1);		// Affiche le nombre d'arguments passés au programme, moins 1 (pour exclure le nom du programme lui-même).
									// argc - 1 donne le nombre d'arguments effectifs fournis par l'utilisateur.

	return (0);		// Termine le programme avec un code de succès (0)
}
