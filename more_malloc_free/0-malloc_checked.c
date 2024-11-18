#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the number of bytes to allocate
 * Description: function that allocates memory using malloc.
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)		// Définition de la fonction malloc_checked qui prend un paramètre unsigned int b et retourne un pointeur void.
{

	void *ptr;		// Déclare un pointeur void nommé ptr qui sera utilisé pour stocker l'adresse de la mémoire allouée.

	ptr = malloc(b);		// Alloue b octets de mémoire en utilisant malloc() et stocke l'adresse retournée dans ptr.

	if (ptr == NULL)		// Vérifie si l'allocation de mémoire a échoué (malloc retourne NULL en cas d'échec).
	{
		exit(98);		// Si l'allocation a échoué, le programme se termine avec le code de sortie 98.
	}
	return (ptr);		// Si l'allocation a réussi, retourne le pointeur vers la mémoire allouée.

}
