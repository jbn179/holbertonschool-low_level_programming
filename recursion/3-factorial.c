#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n: number to calculate factorial for
 * Description: returns the factorial of a given number.
 * Return: factorial of n, or -1 if n is negative
 */

int factorial(int n)		// Déclaration de la fonction factorial qui prend un paramètre :
							// - n : l'entier dont on veut calculer la factorielle
							// La fonction renvoie un entier (le résultat de la factorielle)
{
	if (n < 0)		// Vérifie si n est négatif
	{
		return (-1);		// Si oui, retourne -1 pour indiquer une erreur (la factorielle n'est pas définie pour les nombres négatifs)
	}

	if (n == 0)		// Vérifie si n est égal à 0
	{
		return (1);		// Si oui, retourne 1 (la factorielle de 0 est 1 par définition)
	}

	return (n * factorial(n - 1));		// Appel récursif de la fonction avec n-1
										// Multiplie n par le résultat de l'appel récursif
}
