#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a particular index;
 * @head: pointer to head element of doubly linked list;
 * @index: index of node to be deleted;
 * Return: returns (1) on success, and (-1) otherwise;
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int ind = 0;
	dlistint_t *cur = NULL, *past = NULL;

	if (*head == NULL)
		return (-1);

	cur = *head;
	if (index == 0 && cur->next == NULL)
	{
		free(cur);
		*head = NULL;
		return (1);
	}
	for (ind = 0; cur != NULL; ind++)
	{
		if (ind == index)
		{
			if (past != NULL)
				past->next = cur->next;
			else
				*head = cur->next;
			if (cur->next != NULL)
				cur->next->prev = past;
			free(cur);
			return (1);
		}
		past = cur;
		cur = cur->next;
	}

	return (-1);
}
