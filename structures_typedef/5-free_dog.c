#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs.
 * @d: pointer to the struct dog to free
 * Description: function that frees dogs.
 */

void free_dog(dog_t *d)		// Définition de la fonction free_dog qui libère la mémoire allouée pour un chien
{
	if (d)					// Vérification si le pointeur d n'est pas NULL
							// Si d n'est pas NULL, on procède à la libération de la mémoire
	{
		free(d->name);		// Libération de la mémoire allouée pour le nom du chien
		free(d->owner);		// Libération de la mémoire allouée pour le nom du propriétaire
		free(d);			// Libération de la mémoire allouée pour la structure dog_t elle-même
	}
							// Si d est NULL, la fonction ne fait rien et se termine
}
