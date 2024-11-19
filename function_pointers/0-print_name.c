#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: name to print
 * @f: pointer to the print function
 * Description: function that prints a name
 */

void print_name(char *name, void (*f)(char *))		// Déclaration de la fonction print_name.
													// Elle prend deux paramètres :
													// - name : un pointeur vers une chaîne de caractères (le nom à imprimer)
													// - f : un pointeur vers une fonction qui prend un char* comme argument et ne retourne rien (void)
{
if (name != NULL && f != NULL)		// Vérification de sécurité :
									// S'assure que ni le pointeur name ni le pointeur de fonction f ne sont NULL.
									// C'est une bonne pratique pour éviter les erreurs de segmentation.
	
	f(name);		// Si les deux pointeurs sont valides, cette ligne appelle la fonction pointée par f,
					// en lui passant name comme argument.
					// Cela permet d'utiliser différentes fonctions d'impression sans modifier print_name.
}
