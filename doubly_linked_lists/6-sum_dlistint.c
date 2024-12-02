#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: pointer to the head of the list
 * Description: returns the sum of all the data of a dlistint_t linked list
 * Return: the sum of all the data (n), or 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
