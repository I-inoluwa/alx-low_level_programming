#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a specified index;
 * @head: head node of the doubly linked list
 * @index: specified index;
 * Return: returns a node, or NULL on failure;
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
