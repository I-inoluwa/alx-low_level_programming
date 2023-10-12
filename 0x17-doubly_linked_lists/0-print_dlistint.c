#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the linked list to be printed;
 * Return: returns number of elements.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
