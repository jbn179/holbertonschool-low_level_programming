#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 * Description: deletes the node at index index of a dlistint_t linked list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current = *head;

	if (!index)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}

	for (i = 0; i < index && current; i++)
		current = current->next;

	if (!current)
		return (-1);

	if (current->next)
		current->next->prev = current->prev;

	if (current->prev)
		current->prev->next = current->next;

	free(current);
	return (1);
}
