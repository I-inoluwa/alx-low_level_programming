#include "lists.h"

/**
 * dlistint_len - gets the length of a doubly linked list
 * @h: head of the linked list;
 * Return: returns number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
