#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Description: compares two strings (less, equal, or more)
 * Return: less than 0 if s1 is less than s2,
 * 0 if they're equal, more than 0 if s1 is greater than s2
 */

int _strcmp(char *s1, char *s2)		// Déclaration de la fonction _strcmp qui prend deux paramètres :
									// - s1 : pointeur vers la première chaîne à comparer
									// - s2 : pointeur vers la deuxième chaîne à comparer
									// La fonction renvoie un entier
{
	while (*s1 == *s2)		// Début d'une boucle while qui continue tant que les caractères pointés par s1 et s2 sont égaux
	
	{						// Si le caractère pointé par s1 est le caractère nul ('\0'), cela signifie que
		if (*s1 == '\0')	// les deux chaînes sont identiques jusqu'à ce point et de même longueur
			return (0);		// Dans ce cas, la fonction retourne 0, indiquant que les chaînes sont égales

	s1++;		// Si les caractères sont égaux mais pas nuls, on incrémente les deux pointeurs
	s2++;		// pour passer aux caractères suivants dans chaque chaîne
	}

	return (*s1 - *s2);		// Si la boucle se termine (c'est-à-dire qu'on a trouvé des caractères différents),
							// on retourne la différence entre les valeurs ASCII des deux caractères
							// Cette différence sera :
							// - négative si le caractère de s1 est "inférieur" à celui de s2
							// - positive si le caractère de s1 est "supérieur" à celui de s2
							// - (le cas 0 a déjà été traité dans la boucle)
}
