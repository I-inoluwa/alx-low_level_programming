#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints every item of a linked list.
 * @h: linked list head item.
 * Return: the size of the linked list;
*/
size_t print_list(const list_t *h)
{
	size_t len;
	const list_t *tmp = h;

	if (h == NULL)
	{
		return (0);
	}

	len = 0;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[%u] %s\n", tmp->len, "(nil)");

		else
			printf("[%u] %s\n", tmp->len, tmp->str);

		len++;
		tmp = tmp->next;
	}

	return (len);
}
