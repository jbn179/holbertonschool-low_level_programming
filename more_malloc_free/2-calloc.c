#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of character in the array
 * @size: size of each element
 * Description: function that allocates memory for an array, using malloc.
 * Return: poiter to the allocated memory
 * NULL if nmemb or size is 0, or if malloc fails
*/

void *_calloc(unsigned int nmemb, unsigned int size)		// Définition de la fonction _calloc qui prend deux paramètres unsigned int et retourne un pointeur void.
{
	void *ptr;						// Déclare un pointeur void pour stocker l'adresse de la mémoire allouée.
	unsigned int total_size;		// Variable pour stocker la taille totale de la mémoire à allouer.
	unsigned int i;					// Variable de compteur pour la boucle.
	char *char_ptr;					// Pointeur char pour parcourir la mémoire allouée octet par octet.

	if (nmemb == 0 || size == 0)	// Si nmemb ou size est 0, retourne NULL.
		return (NULL);				//

	total_size = nmemb * size;		// Calcule la taille totale de la mémoire à allouer.

	ptr = malloc(total_size);		// Alloue la mémoire avec malloc.
	if (ptr == NULL)				//
		return (NULL);				// Si l'allocation échoue, retourne NULL.

	char_ptr = ptr;		// Convertit le pointeur void en pointeur char pour pouvoir accéder aux octets individuels.

	for (i = 0; i < total_size; i++)		// Initialise tous les octets de la mémoire allouée à zéro.
		char_ptr[i] = 0;					//

	return (ptr);		// Retourne le pointeur vers la mémoire allouée et initialisée.
}
