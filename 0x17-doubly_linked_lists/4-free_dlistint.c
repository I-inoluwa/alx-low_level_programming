#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list;
 * @head: pointer to head of list to be freed;
 * Return: returns nothing;
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur = NULL;

	if (head == NULL)
		return;

	cur = head;
	while (cur != NULL)
	{
		cur = head->next;
		free(head);
		head = cur;
	}
}
