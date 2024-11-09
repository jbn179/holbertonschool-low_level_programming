#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: string to print
 * Description: function that prints a string, followed by a new line.
 */

void _puts_recursion(char *s)		// Déclaration de la fonction _puts_recursion qui prend un paramètre :
									// - s : pointeur vers la chaîne de caractères à afficher
									// La fonction ne renvoie rien (void)
{
	if (*s == '\0')		// Vérifie si le caractère actuel est le caractère nul ('\0'), indiquant la fin de la chaîne
	{
		_putchar('\n');		// Si c'est le cas, affiche un retour à la ligne et termine la fonction
		return;				//
	}
	_putchar(*s);		// Affiche le caractère actuel pointé par s
	_puts_recursion(s + 1);		// Appelle récursivement _puts_recursion avec le pointeur avancé d'un caractère
								// Cela permet d'afficher le caractère suivant dans la chaîne
}
