#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlinked list;
 * @head: address of linked list;
 * @n: value of new node to be added.
 * Return: returns the new node, or NULL on failure.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *cur = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	cur = *head;
	while (cur->next != NULL)
		cur = cur->next;

	new->prev = cur;
	cur->next = new;

	return (new);
}
