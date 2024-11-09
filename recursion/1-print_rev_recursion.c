#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse.
 * @s: string to print
 * Description: prints a string in reverse.
 */

void _print_rev_recursion(char *s)		// Déclaration de la fonction _print_rev_recursion qui prend un paramètre :
										// - s : pointeur vers la chaîne de caractères à afficher en ordre inverse
										// La fonction ne renvoie rien (void)
{

	if (*s)		// Vérifie si le caractère actuel n'est pas le caractère nul ('\0')
				// Cette condition sert de cas de base pour la récursion
	{
		_print_rev_recursion(s + 1);		// Appel récursif de la fonction avec le pointeur avancé d'un caractère
											// Cela permet d'atteindre d'abord la fin de la chaîne

		_putchar(*s);		// Affiche le caractère actuel
							// Cette ligne s'exécute après les appels récursifs, ce qui inverse l'ordre d'affichage
	}

}
