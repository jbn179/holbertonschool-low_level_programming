#include "main.h"
#include <stdio.h>

/**
 * is_prime_helper - helper function to check if a number is a prime number
 * @n: the number to check
 * @i: the current divisor to check
 * Description: helper function to check if a number is a prime number
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_helper(int n, int i)		// Déclaration de la fonction is_prime_helper qui prend deux paramètres :
										// - n : l'entier à tester pour déterminer s'il est un nombre premier
										// - i : le diviseur actuel à tester
										// La fonction renvoie un entier (1 si n est premier, 0 sinon)
{
	if (n <= 1)		// Vérifie si n est inférieur ou égal à 1
	{
		return (0);		// Les nombres 0 et 1 ne sont pas considérés comme premiers, donc retourne 0
	}

	if (i * i > n)		// Vérifie si le carré de i est supérieur à n
	{					// Si c'est le cas, cela signifie que n n'a pas de diviseur autre que 1 et lui-même,
		return (1);		// donc retourne 1 pour indiquer que n est un nombre premier
	}

	if (n % i == 0)		// Vérifie si n est divisible par i
	{
		return (0);		// Si oui, retourne 0 car cela signifie que n n'est pas un nombre premier
	}

	return (is_prime_helper(n, i + 1));		// Appel récursif de is_prime_helper avec i incrémenté de 1 pour tester le prochain diviseur
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Description: checks if a number is prime
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)		// Déclaration de la fonction is_prime_number qui prend un paramètre :
								// - n : l'entier à tester pour déterminer s'il est un nombre premier
{
	return (is_prime_helper(n, 2));		// Appelle la fonction auxiliaire is_prime_helper avec n et 2 comme arguments,
										// ce qui commence les tests de divisibilité à partir du plus petit nombre premier.
}
