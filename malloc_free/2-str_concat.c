#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Description: function that concatenates two strings.
 * Return: pointer to the new string created (Success), or NULL (Error)
*/

char *str_concat(char *s1, char *s2)		// Déclaration de la fonction str_concat
    										// Prend deux paramètres : s1 et s2 (les chaînes à concaténer)
    										// Retourne un pointeur vers char (la nouvelle chaîne concaténée)
{
													// Déclaration des variables locales :
	char *concat;									// concat : pointeur qui contiendra l'adresse de la chaîne concaténée
	unsigned int len1 = 0, len2 = 0, i, j;			// len1, len2 : pour stocker les longueurs des chaînes d'entrée
													// i, j : variables de boucle pour la copie des caractères

	if (s1 == NULL)			// Si l'une des chaînes d'entrée est NULL, on la remplace par une chaîne vide
	{						//
		s1 = "";			//
	}						//
							//
	if (s2 == NULL)			//
	{						//
		s2 = "";			//
	}						//

	while(s1[len1] !='\0')		// Calcul des longueurs des chaînes s1 et s2
	{							//
		len1++;					//
	}							//
								//
	while(s2[len2] !='\0')		//
	{							//
		len2++;					//
	}							//
															
	concat = malloc(sizeof(char) * (len1 + len2 + 1));		// Allocation dynamique de mémoire pour la nouvelle chaîne
															// Alloue (len1 + len2 + 1) fois la taille d'un char (pour inclure le '\0')

	if (concat == NULL)		// Vérification si l'allocation a réussi
	{
		return (NULL);		// Si malloc a échoué (retourne NULL), on retourne NULL
	}

	for (i = 0; i < len1; i++)		// Copie des caractères de s1 dans concat
	{								//
		concat[i] = s1[i];			//
	}								//
	
	for (j = 0; j < len2; j++, i++)		// Copie des caractères de s2 dans concat (à la suite de s1)
	{									//
		concat[i] = s2[j];				//
	}									//

	concat[i] = '\0';		// Ajout du caractère nul à la fin de la chaîne concaténée

	return (concat);		// Retourne le pointeur vers la nouvelle chaîne concaténée
}
