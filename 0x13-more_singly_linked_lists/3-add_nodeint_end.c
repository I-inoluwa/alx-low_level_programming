#include "lists.h"

/**
 * add_nodeint_end -adds a node to the end of a linked list;
 * @head: linked list to be added to;
 * @n: value of node to be added;
 * Return: returns the address of the added node;
 * otherwise, (NULL) on failure.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp, *(current);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}
	tmp->n = n;
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}

	(current) = *head;
	while ((current)->next != NULL)
		(current) = (current)->next;

	(current)->next = tmp;
	return (tmp);
}
