#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op					// Définition d'une structure nommée op et création d'un alias op_t pour cette structure.
{									// La structure contient :
	char *op;						// - op : un pointeur vers une chaîne de caractères (probablement pour stocker l'opérateur)
	int (*f)(int a, int b);			// - f : un pointeur vers une fonction qui prend deux int en paramètres et retourne un int
} op_t;								//

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
