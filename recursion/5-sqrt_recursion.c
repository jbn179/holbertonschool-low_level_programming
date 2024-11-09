#include "main.h"
#include <stdio.h>

/**
 * _sqrt_helper -  returns the natural square root of a number.
 * @n: the number to find the square root of
 * @i: the current guess
 * Description:  returns the natural square root of a number.
 * Return: the natural square root of n, or -1 if it doesn't exist
 */

int _sqrt_helper(int n, int i)		// Déclaration de la fonction _sqrt_helper qui prend deux paramètres :
									// - n : le nombre dont on veut calculer la racine carrée
									// - i : l'estimation actuelle de la racine carrée
									// La fonction renvoie un entier (la racine carrée ou -1)
{
	if (i * i > n)		// Vérifie si le carré de l'estimation actuelle (i) est supérieur à n
	{
		return (-1);		// Si oui, cela signifie que la racine carrée n'existe pas dans les entiers naturels, donc retourne -1
	}

	if (i * i == n)		// Vérifie si le carré de l'estimation actuelle est égal à n
	{
		return (i);		// Si oui, retourne i, qui est la racine carrée naturelle de n
	}
	return (_sqrt_helper(n, i + 1));		// Appel récursif de _sqrt_helper avec i incrémenté de 1 pour tester la prochaine estimation
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number to calculate the square root of
 * Description:  returns the natural square root of a number.
 * Return: the natural square root of n, or -1 if it doesn't exist
 */

int _sqrt_recursion(int n)		// Déclaration de la fonction _sqrt_recursion qui prend un paramètre :
								// - n : le nombre dont on veut calculer la racine carrée
								// La fonction renvoie un entier (la racine carrée ou -1)
{

	if (n < 0)		// Vérifie si n est négatif
	{
		return (-1);		// Si oui, retourne -1 car les racines carrées naturelles ne sont pas définies pour les nombres négatifs
	}
	return (_sqrt_helper(n, 0));		// Appelle _sqrt_helper en commençant avec une estimation initiale de 0
}
