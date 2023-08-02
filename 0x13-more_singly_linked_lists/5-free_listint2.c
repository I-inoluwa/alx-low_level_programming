#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL.
 * @head: pointer to the linked list to be freed;
 * Return: returns void;
*/

void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
	{
		free(*head);
		return;
	}

	while ((*head) != NULL)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	*head = NULL;
}
