#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to concatenate
 * Description: function that concatenates two strings.
 * Return: a pointer to the allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)	// Définition de la fonction string_nconcat qui prend deux chaînes de caractères et un entier non signé comme paramètres.
{
	char *concat;		// Déclare un pointeur pour stocker la nouvelle chaîne concaténée.
	unsigned int len1 = 0, len2 = 0, i, j;		// Déclare des variables pour les longueurs des chaînes et des compteurs.

	if (s1 == NULL)		// Si s1 est NULL, on le remplace par une chaîne vide.
		s1 = "";

	if (s2 == NULL)		// Si s2 est NULL, on le remplace par une chaîne vide.
		s2 = "";

	while (s1[len1])	// Calcule la longueur de s1.
		len1++;

	while (s2[len2])	// Calcule la longueur de s2.
		len2++;

	if (n >= len2)		// Si n est plus grand ou égal à la longueur de s2, on utilise toute la chaîne s2.
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));		// Alloue de la mémoire pour la nouvelle chaîne (longueur de s1 + n caractères de s2 + le caractère nul).
	if (concat == NULL)
		return (NULL);		// Si l'allocation échoue, retourne NULL.

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];		// Copie s1 dans la nouvelle chaîne.

	for (j = 0; j < n; j++)		// Copie les n premiers caractères de s2 dans la nouvelle chaîne.
		concat[i + j] = s2[j];	//
	concat[i + j] = '\0';		// Ajoute le caractère nul à la fin de la nouvelle chaîne.

	return (concat);		// Retourne le pointeur vers la nouvelle chaîne concaténée.
}
