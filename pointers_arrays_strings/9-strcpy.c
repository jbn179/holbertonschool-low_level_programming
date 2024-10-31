#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: the string to copy
 * @dest: the destination for the string
 * Description: including (\0), to the buffer pointed to by dest.
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)	//La fonction prend deux arguments :	//char *dest : Un pointeur vers la chaîne de destination
{																				//char *src : Un pointeur vers la chaîne source
	int i = 0;							//Elle retourne un pointeur vers la chaîne de destination

	while (src[i] != '\0')	//Continue tant qu'on n'a pas atteint la fin de la chaîne source
	{
		dest[i] = src[i];	//Copie chaque caractère de la source vers la destination; copie la valeur de droite vers la gauche
		i++;				//Incrémente le compteur pour passer au caractère suivant
	}

	dest[i] = '\0';	//Ajoute le caractère nul à la fin de la chaîne de destination

	return (dest); //Retourne un pointeur vers la chaîne de destination
}
