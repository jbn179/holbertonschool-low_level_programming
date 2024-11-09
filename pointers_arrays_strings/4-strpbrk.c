#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string containing the characters to match
 * Description: searches a string for any of a set of bytes
 * Return: pointer to the byte in s that matches one bytes in accept, or NULL
*/

char *_strpbrk(char *s, char *accept)		// Déclaration de la fonction _strpbrk qui prend deux paramètres :
											// - s : pointeur vers la chaîne à examiner
											// - accept : pointeur vers la chaîne des caractères à rechercher
											// La fonction renvoie un pointeur vers char
{

	int i, j;		// Déclaration des variables i et j pour les indices

	i = 0;		// Initialisation de i à 0 pour commencer au début de s

	while (s[i] != '\0')		// Boucle principale qui parcourt la chaîne s jusqu'à son terme
	{
		j = 0;		// Réinitialisation de j à 0 pour chaque nouveau caractère de s

		while (accept[j] != '\0')		// Boucle interne qui parcourt la chaîne accept
		{
			if (s[i] == accept[j])		//
			{							// Si un caractère de s correspond à un caractère dans accept,
				return (&s[i]);			// retourne immédiatement un pointeur vers ce caractère dans s
			}							// Sinon, continue à chercher dans accept
			j++;						//
		}
		i++;		// Passe au caractère suivant de s si aucune correspondance n'est trouvée
	}
	return (NULL);		// Si aucune correspondance n'est trouvée dans toute la chaîne s, retourne NULL
}
