#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Description: gets the length of a prefix substring.
 * Return: the number of bytes in s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)		// Déclaration de la fonction _strspn qui prend deux paramètres :
												// - s : pointeur vers la chaîne de caractères à examiner
												// - accept : pointeur vers la chaîne contenant les caractères acceptables
												// La fonction renvoie un unsigned int
{
							// Déclaration et initialisation des variables :
	unsigned int i = 0;		// - i : compteur pour la chaîne s (unsigned int car c'est le type de retour)
	int j;					// - j : compteur pour la chaîne accept
	int found;				// - found : drapeau pour indiquer si un caractère correspondant a été trouvé

	while (s[i] != '\0')		// Début d'une boucle while qui parcourt la chaîne s jusqu'à son terme
	{
		found = 0;		// Réinitialisation de found et j pour chaque nouveau caractère de s
		j = 0;			//

		while (accept[j] != '\0')		// Boucle interne qui parcourt la chaîne accept
		{
			if (s[i] == accept[j])		//
			{							// Si le caractère actuel de s correspond à un caractère dans accept,
				found = 1;				// on met found à 1 et on sort de la boucle interne
				break;					// Sinon, on continue à chercher dans accept
			}							//
			j++;						//
		}

		if (found == 0)		//
		{					// Si aucun caractère correspondant n'a été trouvé (found == 0),
			break;			// on sort de la boucle principale
		}					// Sinon, on passe au caractère suivant de s
		i++;				//
	}

	return (i);		// On retourne i, qui représente la longueur du segment initial de s composé uniquement de caractères présents dans accept
}
