#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: linked list argument passed;
 * Return: length of the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t len = 0;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL || h == NULL)
	{
		free(tmp);
		return (0);
	}

	tmp->str = h->str;
	tmp->len = h->len;
	tmp->next = h->next;

	if (tmp == NULL)
		return (1);
	while (tmp != NULL)
	{
		len++;
		tmp = tmp->next;
	}
	free(tmp);
	return (len);
}
