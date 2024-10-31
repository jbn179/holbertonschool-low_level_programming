#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to convert
 * Description: convert a string to an integer
 * Return: the int converted from the string
 */

/**
 * Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
 */

int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;		//index pour parcourir la chaîne
	d = 0;		//compte le nombre de signes '-'
	n = 0;		//stocke le nombre final
	len = 0;	//longueur de la chaîne
	f = 0;		//flag pour indiquer si un nombre a été trouvé
	digit = 0; 	//stocke chaque chiffre converti

	while (s[len] != '\0')	//Parcourt la chaîne jusqu'au caractère nul pour déterminer sa longueur.
		len++;

	while (i < len && f == 0) //Parcourt la chaîne tant que i < len et f == 0.
	{
		if (s[i] == '-') //Gère les signes '-' en incrémentant d
			++d;

		if (s[i] >= '0' && s[i] <= '9') //Vérifie si le caractère est un chiffre.
		{
			digit = s[i] - '0'; //Convertit le caractère en sa valeur numérique.
			
			if (d % 2)
				digit = -digit;	//Rend le chiffre négatif si le nombre de '-' est impair
			n = n * 10 + digit;	//Ajoute le chiffre au nombre total.
			f = 1;	//Indique qu'on a commencé à traiter un nombre.
			
			if (s[i + 1] < '0' || s[i + 1] > '9')	//Sort de la boucle si le prochain caractère n'est pas un chiffre.
				break;								//
			f = 0;	//Réinitialise le flag si on continue à traiter des chiffres.
		}
		i++;	//Passe au caractère suivant.
	}

	if (f == 0)	//Si aucun nombre n'a été trouvé (f == 0), retourne 0.
		return (0);
	return (n);	//Sinon, retourne le nombre converti n.
}
