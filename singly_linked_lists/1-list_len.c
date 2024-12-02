#include "lists.h"

/**
 * list_len - prints the number of elements of the list_t list
 * @h: pointer to the head of the list
 * Description: prints the number of elements of the list_t list
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
