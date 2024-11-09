#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: constant byte to fill the memory with
 * @n: number of bytes to fill
 * Description: fills memory with a constant byte
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n) 	// Déclaration de la fonction _memset qui prend trois paramètres :
												// - s : un pointeur vers la zone mémoire à remplir
												// - b : le caractère à utiliser pour le remplissage
												// - n : le nombre d'octets à remplir
												// La fonction renvoie un pointeur de type char*
{
	unsigned int i;		// Déclaration d'une variable non signée i qui servira de compteur dans la boucle

	for (i = 0; i < n; i++)		// Début d'une boucle for qui s'exécutera n fois :
								// - Initialisation : i = 0
								// - Condition : continuer tant que i est inférieur à n
								// - Incrémentation : i augmente de 1 à chaque itération
	{
		s[i] = b;		// Corps de la boucle :
						// À chaque itération, on assigne le caractère b à l'élément i du tableau s
						// Cela remplit la mémoire pointée par s avec le caractère b, n fois
	}

	return (s);		// Une fois la boucle terminée, on retourne le pointeur s
					// Ce pointeur pointe maintenant vers la zone mémoire modifiée
}
