#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a particular index, to a dlist;
 * @h: pointer to doubly linked list;
 * @idx: index of new node;
 * @n: value of new node;
 * Return: returns the new node, or (NULL) on failure;
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ind = 0;
	dlistint_t *new = NULL, *cur = NULL, *past = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		if (*h != NULL)
		{
			(*h)->prev = new;
			new->next = *h;
		}
		*h = new;
		return (new);
	}

	cur = *h;
	for (ind = 0; cur != NULL || ind <= idx; ind++)
	{
		if (ind == idx)
		{
			new->next = cur;
			past->next = new;
			new->prev = past;
			if (cur != NULL)
				cur->prev = new;
			return (new);
		}
		past = cur;
		cur = cur->next;
	}

	free(new);
	return (NULL);
}
