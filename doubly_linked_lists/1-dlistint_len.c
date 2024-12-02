#include "lists.h"

/**
 * dlistint_len - prints the number of elements of the dlistint_t list
 * @h: pointer to the head of the list
 * Description: prints the number of elements of the dlistint_t list
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
