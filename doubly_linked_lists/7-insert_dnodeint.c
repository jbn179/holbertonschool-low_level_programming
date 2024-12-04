#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: the index of the list where the new node should be added
 * @n: the integer value for the new node
 * Description: function that inserts a new node at a given position
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *head;
	unsigned int i = 1;

	if (!idx)
		new = add_dnodeint(h, n);
	else
	{
		head = *h;
		if (head)
			while (head->prev)
				head = head->prev;
		while (head)
		{
			if (i == idx)
			{
				if (!head->next)
					new = add_dnodeint_end(h, n);
				else
				{
					new = malloc(sizeof(dlistint_t));
					if (new)
					{
						new->n = n;
						new->next = head->next;
						new->prev = head;
						head->next->prev = new;
						head->next = new;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}
	return (new);
}
