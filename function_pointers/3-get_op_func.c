#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 * @s: operator passed as argument to the program
 * Description: function that selects the correct function
 * to perform the operation asked by the user
 * Return: the sum of a and b
 */

int (*get_op_func(char *s))(int, int)		// Déclaration de la fonction get_op_func qui :
											// - Prend un pointeur vers une chaîne de caractères (l'opérateur) comme argument
											// - Retourne un pointeur vers une fonction qui prend deux int et retourne un int
{
	op_t ops[] = {			//
		{"+", op_add},		//
		{"-", op_sub},		// Définition d'un tableau ops de structures op_t.
		{"*", op_mul},		// Chaque élément associe un opérateur (sous forme de chaîne) à sa fonction correspondante.
		{"/", op_div},		// Le dernier élément {NULL, NULL} sert de sentinelle pour marquer la fin du tableau.
		{"%", op_mod},		//
		{NULL, NULL}		//
	};

	int i;		// Déclaration et initialisation de la variable de boucle i.
				//
	i = 0;		//

	while (ops[i].op != NULL)		// Début de la boucle while qui parcourt le tableau ops jusqu'à rencontrer l'élément sentinelle.
	{
		if (*(ops[i].op) == *s && s[1] == '\0')			// Vérifie si le premier caractère de l'opérateur courant correspond à celui passé en argument,
														// et si l'argument est un opérateur d'un seul caractère.
			return (ops[i].f);							// Si c'est le cas, retourne le pointeur vers la fonction correspondante.
		i++;					// Incrémente i pour passer à l'élément suivant du tableau.
	}
	return (NULL);		// Si aucun opérateur correspondant n'est trouvé, retourne NULL.
}

