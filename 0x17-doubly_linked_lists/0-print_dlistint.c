#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the linked list to be printed;
 * Return: returns number of elements.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *cur = NULL;

	if (h == NULL)
		return (0);

	cur = h;
	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		i++;
	}

	return (i);
}
