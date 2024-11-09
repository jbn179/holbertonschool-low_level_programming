#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to the first element in the array
 * @n: the number of elements in the array
 * Description: reverses the content of an array of integers
 */

void reverse_array(int *a, int n)		// Déclaration de la fonction reverse_array qui prend deux paramètres :
										// - a : pointeur vers le tableau d'entiers à inverser
										// - n : nombre d'éléments dans le tableau
										// La fonction ne renvoie rien (void)
{

	int start, end, temp;		// Déclaration de trois variables entières :
								// - start : indice de début pour l'inversion
								// - end : indice de fin pour l'inversion
								// - temp : variable temporaire pour l'échange des éléments

	for (start = 0, end = n - 1; start < end; start++, end--)	// Boucle for avec initialisation multiple :
																// - start est initialisé à 0 (début du tableau)
																// - end est initialisé à n - 1 (fin du tableau)
																// La boucle continue tant que start est inférieur à end
																// À chaque itération, start est incrémenté et end est décrémenté

	{							// Corps de la boucle :
		temp = a[start];		// 1. Stocke la valeur de l'élément au début (a[start]) dans temp
		a[start] = a[end];		// 2. Remplace l'élément au début par l'élément à la fin (a[end])
		a[end] = temp;			// 3. Place la valeur temporaire (ancien élément du début) à la fin
	}							// Ce processus échange les éléments aux positions start et end
}
