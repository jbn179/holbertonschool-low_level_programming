#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: the base
 * @y: the exponent
 * Description: returns the value of x raised to the power of y
 * Return: x^y or -1 if y is negative
 */

int _pow_recursion(int x, int y)		// Déclaration de la fonction _pow_recursion qui prend deux paramètres :
										// - x : la base
										// - y : l'exposant
										// La fonction renvoie un entier (le résultat de x élevé à la puissance y)
{

	if (y < 0)		// Vérifie si l'exposant y est négatif
	{
		return (-1);		// Si oui, retourne -1 pour indiquer une erreur (cette fonction ne gère pas les exposants négatifs)
	}

	if (y == 0)		// Vérifie si l'exposant y est égal à 0
	{
		return (1);			// Si oui, retourne 1 (tout nombre élevé à la puissance 0 est 1)
	}

	return (x * _pow_recursion(x, y - 1));		// Appel récursif de la fonction avec y-1
												// Multiplie x par le résultat de l'appel récursif

}
