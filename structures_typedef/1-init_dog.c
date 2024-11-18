#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: poiter to the struct dog to initialize
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: owner of the dog
 * Description: initialize a variable of type struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)		// Définition de la fonction init_dog qui prend un pointeur vers struct dog et les informations du chien comme paramètres.
{
	if (d != NULL)		// Vérifie si le pointeur d n'est pas NULL pour éviter les erreurs de segmentation.
	{
		d->name = name;			// Initialise le champ name de la structure pointée par d avec la valeur du paramètre name.
		d->age = age;			// Initialise le champ age de la structure pointée par d avec la valeur du paramètre age.
		d->owner = owner;		// Initialise le champ owner de la structure pointée par d avec la valeur du paramètre owner.
	}
}
