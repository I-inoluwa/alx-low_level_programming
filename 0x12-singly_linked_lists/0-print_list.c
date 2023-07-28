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
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL || h == NULL)
	{
		free(tmp);
		return (0);
	}

	len = 0;
	tmp->str = h->str;
	tmp->len = h->len;
	tmp->next = h->next;

	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			tmp->str = "(nil)";

		printf("[%u] %s\n", tmp->len, tmp->str);
		len++;
		tmp = tmp->next;
	}
	/*free(tmp);*/

	return (len);
}
