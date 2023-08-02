#include "lists.h"

/**
  * delete_nodeint_at_index - deletes a node at an index;
  * @head: list to be deleted from;
  * @index: index of node to be deleted;
  * Return: returns (1) on success, (-1) on fail;
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *before, *after = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		before = after->next;
		free(after);
		*head = before;
		return (1);
	}

	while (i < index)
	{
		before = after;
		if (before == NULL)
			return (-1);
		after = before->next;
		i++;
	}
	before->next = after->next;
	free(after);

	return (1);
}
