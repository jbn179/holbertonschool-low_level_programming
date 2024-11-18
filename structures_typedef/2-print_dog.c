#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: poiter to the struct dog to print
 * Description: function that prints a struct dog
 */

void print_dog(struct dog *d)		// Définition de la fonction print_dog qui prend un pointeur vers struct dog comme paramètre.
{
	if (d == NULL)		// Vérifie si le pointeur d est NULL. Si c'est le cas, la fonction se termine immédiatement
		return;			//

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");		// Imprime le nom du chien. Si le nom est NULL, imprime "(nil)" à la place.
	printf("Age: %f\n", d->age);										// Imprime l'âge du chien. Notez que l'âge n'est pas vérifié pour NULL car c'est un type float.
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");		// Imprime le nom du propriétaire. Si le nom du propriétaire est NULL, imprime "(nil)" à la place.

}
