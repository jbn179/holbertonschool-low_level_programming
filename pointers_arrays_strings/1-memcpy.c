#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: pointer to the destination memory area where the data will be copied
 * @src: pointer to the source memory area from which the data will be copied
 * @n: number of bytes to copy
 * Description: copies memory area.
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)		// Déclaration de la fonction _memcpy qui prend trois paramètres :
															// - dest : pointeur vers la zone mémoire de destination
															// - src : pointeur vers la zone mémoire source
															// - n : nombre d'octets à copier
															// La fonction renvoie un pointeur vers la zone mémoire de destination
{
	unsigned int i;		// Déclaration d'une variable non signée i qui servira de compteur dans la boucle

	for (i = 0; i < n; i++)		// Début d'une boucle for qui s'exécutera n fois :
								// - Initialisation : i = 0
								// - Condition : continuer tant que i est inférieur à n
								// - Incrémentation : i augmente de 1 à chaque itération
	{
		dest[i] = src[i];		// Corps de la boucle :
	}							// À chaque itération, on copie l'octet à la position i de src vers la position i de dest

	return (dest);		// Une fois la boucle terminée, on retourne le pointeur dest
						// Ce pointeur pointe maintenant vers la zone mémoire de destination qui contient la copie
}
