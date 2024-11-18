#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a string of characters
 * Description: returns the length of a string
 * Return: lenght
 */

int _strlen(char *s)						// Fonction qui calcule la longueur d'une chaîne de caractères
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * *_strcpy - copies the string pointed to by src
 * @src: the string to copy
 * @dest: the destination for the string
 * Description: including (\0), to the buffer pointed to by dest.
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)		// Fonction qui copie une chaîne de caractères dans une autre
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: function that creates a new dog.
 * Return: pointer to the nex dog, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)		// Définition de la fonction new_dog qui prend en paramètres le nom, l'âge et le propriétaire du chien
{
	dog_t *dog;						// Déclaration d'un pointeur vers une structure dog_t
	int len_name, len_owner;		// Déclaration de variables pour stocker la longueur du nom et du propriétaire

	if (name == NULL || owner == NULL)		// Vérification si le nom ou le propriétaire est NULL
		return (NULL);						// Si l'un des deux est NULL, on retourne NULL

	dog = malloc(sizeof(dog_t));		// Allocation de mémoire pour la structure dog_t
	if (dog == NULL)					// Vérification si l'allocation a réussi
		return (NULL);					// Si l'allocation a échoué, on retourne NULL

	len_name = _strlen(name);			// Calcul de la longueur du nom et du propriétaire
	len_owner = _strlen(owner);			//

	dog->name = malloc(sizeof(char) * (len_name + 1));		// Allocation de mémoire pour le nom du chien
	if (dog->name == NULL)									// Vérification si l'allocation a réussi
	{
		free(dog);			// Libération de la mémoire allouée pour dog
		return (NULL);		// Si l'allocation a échoué, on retourne NULL
	}

	dog->owner = malloc(sizeof(char) * (len_owner + 1));	// Allocation de mémoire pour le nom du propriétaire
	if (dog->owner == NULL)									// Vérification si l'allocation a réussi
	{
		free(dog->name);	// Libération de la mémoire allouée pour le nom
		free(dog);			// Libération de la mémoire allouée pour dog
		return (NULL);		// Si l'allocation a échoué, on retourne NULL
	}

	_strcpy(dog->name, name);		// Copie du nom dans la structure
	_strcpy(dog->owner, owner);		// Copie du nom du propriétaire dans la structure
	dog->age = age;					// Assignation de l'âge dans la structure

	return (dog);		// Retour du pointeur vers la nouvelle structure dog_t créée
}
