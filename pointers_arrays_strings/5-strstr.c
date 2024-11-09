#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: string containing the occurence to match
 * @needle: first occurrence of the substring
 * Description: locates a substring
 * Return: pointer to the beginning of the located substring, or NULL
*/

char *_strstr(char *haystack, char *needle)		// Déclaration de la fonction _strstr qui prend deux paramètres :
												// - haystack : pointeur vers la chaîne dans laquelle chercher
												// - needle : pointeur vers la sous-chaîne à rechercher
												// La fonction renvoie un pointeur vers char
{

	int i, j;		// Déclaration des variables i et j pour les indices

	for (i = 0; haystack[i] != '\0'; i++)		// Boucle principale qui parcourt la chaîne haystack
	{
		for (j = 0; needle[j] != '\0'; j++)		// Boucle interne qui parcourt la chaîne needle
		{
			if (haystack[i + j] != needle[j])		// Compare chaque caractère de needle avec les caractères correspondants de haystack
			{
				break;		// Si une différence est trouvée, sort de la boucle interne
			}
		}

		if (needle[j] == '\0')		// Si tous les caractères de needle ont été trouvés (needle[j] == '\0'),
		{
			return (&haystack[i]);		// retourne un pointeur vers le début de la sous-chaîne dans haystack
		}
	}

	return (NULL);		// Si aucune correspondance n'est trouvée, retourne NULL
}
