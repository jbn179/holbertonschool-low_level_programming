#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 * @str: string to modify
 * Description: encodes a string into 1337.
 * Return: string
 */

char *leet(char *str)		// Déclaration de la fonction leet qui prend un paramètre :
							// - str : pointeur vers la chaîne de caractères à convertir en leet speak
							// La fonction renvoie un pointeur vers une chaîne de caractères
{

int i = 0;		// Déclaration et initialisation d'une variable entière i à 0
				// Cette variable servira d'indice pour parcourir la chaîne str

								// Déclaration de deux chaînes de caractères :
char *let = "aAeEoOtTlL";		// - let : contient les lettres à remplacer (en minuscules et majuscules)
char *num = "4433007711";		// - num : contient les chiffres correspondants pour le remplacement
								// Ces chaînes sont utilisées comme tables de correspondance pour la conversion

	while (str[i] != '\0')		// Début d'une boucle while qui continue jusqu'à la fin de la chaîne str
	{
		int j = 0;		// Déclaration et initialisation d'une variable j à 0 pour chaque caractère de str
						// Cette variable servira à parcourir les chaînes let et num

		while (j < 10)		// Début d'une boucle while qui parcourt les 10 caractères de let et num
		{
			if (str[i] == let[j])		// Vérifie si le caractère actuel de str correspond à un caractère dans let
			{
				str[i] = num[j];		// Si une correspondance est trouvée, on remplace le caractère de str
				break;					// par le chiffre correspondant dans num, puis on sort de la boucle interne
			}
			j++;		// Si aucune correspondance n'est trouvée, on passe au caractère suivant de let et num
		}
		i++;		// On passe au caractère suivant de str
	}
return (str);		// Une fois tous les caractères traités, on retourne le pointeur
					// vers la chaîne modifiée (maintenant en leet speak)
}
