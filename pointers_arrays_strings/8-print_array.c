#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements to print
 */

void print_array(int *a, int n)	//La fonction prend 2 arguments : 	//int *a : Un pointeur vers un tableau d'entiers; 
{																	//int n : Le nombre d'éléments à afficher
	int i;

	for (i = 0; i < n; i++) //Parcourt les n premiers éléments du tableau
	{
		if (i == 0)					//Pour le premier élément (i == 0)
			printf("%d", a[i]);		//Affiche l'élément sans virgule ni espace avant
		else						//Pour tous les autres éléments
			printf(", %d", a[i]);	//Affiche une virgule, un espace, puis l'élément
	}
		printf("\n");
}
