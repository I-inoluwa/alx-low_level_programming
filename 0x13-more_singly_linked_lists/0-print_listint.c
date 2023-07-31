#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a singly linked list.
 * @h: linked list with elements to be printed;
 * Return: returns the number of nodes;
*/

size_t print_listint(const listint_t *h)
{
	listint_t *ptr;
	size_t count = 0;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (-1);
	}
	if (h == NULL)
		return (0);

	ptr->n = h->n;
	ptr->next = h->next;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}

	return (count);
}
