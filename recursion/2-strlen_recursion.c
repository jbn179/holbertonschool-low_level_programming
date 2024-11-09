#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to measure
 * Description: returns the length of a string.
 * Return: length of the string
 */

int _strlen_recursion(char *s)		// Déclaration de la fonction _strlen_recursion qui prend un paramètre :
									// - s : pointeur vers la chaîne de caractères dont on veut calculer la longueur
									// La fonction renvoie un entier (la longueur de la chaîne)
{
	if (*s == '\0')		// Vérifie si le caractère actuel est le caractère nul ('\0')
						// C'est le cas de base de la récursion
	{
		return (0);		// Si on a atteint la fin de la chaîne, on retourne 0
	}
	return (1 + _strlen_recursion(s + 1));		// Appel récursif de la fonction avec le pointeur avancé d'un caractère
												// On ajoute 1 pour compter le caractère actuel

}
