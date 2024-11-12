#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, initialized with a specific char.
 * @size: the size of the array to create
 * @c: the char to initialize the array with
 * Description: creates an array of chars, initialized with a specific char.
 * Return: a pointer to the array, or NULL if it fails or if size is 0
*/

char *create_array(unsigned int size, char c)		    // Déclaration de la fonction create_array
    													// Prend deux paramètres : size (taille du tableau) et c (caractère d'initialisation)
    													// Retourne un pointeur vers char (le tableau créé)
{
						// Déclaration des variables locales :
	char *array;		// array : pointeur qui contiendra l'adresse du tableau alloué
	unsigned int i;		// i : variable de boucle pour l'initialisation du tableau

	if (size == 0)		// Vérification si la taille demandée est 0
	{
		return (NULL);		// Si oui, retourne NULL (pas de tableau créé)
	}

	array = malloc(sizeof(char) * size);		// Allocation dynamique de mémoire pour le tableau
												// Utilise malloc pour allouer 'size' fois la taille d'un char

	if (array == NULL)		// Vérification si l'allocation a réussi
	{
		return (NULL);		// Si malloc a échoué (retourne NULL), on retourne NULL
	}

	for (i = 0; i < size; i++)		// Boucle pour initialiser chaque élément du tableau
	{
		array[i] = c;		// Chaque case du tableau reçoit la valeur du caractère 'c'
	}

	return (array);		// Retourne le pointeur vers le tableau créé et initialisé
}
