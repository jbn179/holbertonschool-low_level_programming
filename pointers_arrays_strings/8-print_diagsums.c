#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - the sum of two diagonals of a square matrix of integers.
 * @a: pointer to the start of the matrix
 * @size: size of the matrix
 * Description: the sum of two diagonals of a square matrix of integers.
 */

void print_diagsums(int *a, int size)		// Déclaration de la fonction print_diagsums qui prend deux paramètres :
											// - a : un pointeur vers un tableau d'entiers (représentant une matrice carrée)
											// - size : la taille de la matrice (nombre de lignes ou de colonnes)
											// La fonction ne renvoie rien (void)

{						// Déclaration des variables :
	int i;				// i : pour l'itération
	int sum1 = 0;		// sum1 : pour la somme de la diagonale principale
	int sum2 = 0;		// sum2 : pour la somme de la diagonale secondaire

	for (i = 0; i < size; i++)		// Boucle qui parcourt les éléments des diagonales
	{
		sum1 += a[i * size + i];		// Ajoute l'élément de la diagonale principale à sum1
										// L'indice i * size + i correspond à (0,0), (1,1), (2,2), etc.

		sum2 += a[i * size + (size - 1 - i)];		// Ajoute l'élément de la diagonale secondaire à sum2
													// L'indice i * size + (size - 1 - i) correspond à (0,size-1), (1,size-2), etc.
	}

	printf("%d, %d\n", sum1, sum2);		// Affiche les sommes des deux diagonales
}
