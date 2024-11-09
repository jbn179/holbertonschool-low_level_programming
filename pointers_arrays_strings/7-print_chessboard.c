#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: two dimension array to print
 * Description: prints the chessboard
 */

void print_chessboard(char (*a)[8])		// Déclaration de la fonction print_chessboard qui prend un paramètre :
										// - a : un pointeur vers un tableau de 8 caractères (représentant un échiquier 8x8)
										// La fonction ne renvoie rien (void)
{
	int i, j;		// Déclaration des variables i et j pour les indices des boucles

	for (i = 0; i < 8; i++)		// Boucle externe qui parcourt les 8 lignes de l'échiquier
	{
		for (j = 0; j < 8; j++)		// Boucle interne qui parcourt les 8 colonnes de chaque ligne
		{
			_putchar(a[i][j]);		// Affiche chaque caractère de l'échiquier en utilisant la fonction _putchar
		}
		_putchar('\n');		// Après chaque ligne, ajoute un retour à la ligne
	}
}
