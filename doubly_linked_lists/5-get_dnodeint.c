#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node
 * Description: returns the nth node of a dlistint_t linked list
 * Return: the adress of the nth nod, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = head;

	while (current)
	{
		if (count == index)
			return (current);

		current = current->next;
		count++;
	}
	return (NULL);
}
