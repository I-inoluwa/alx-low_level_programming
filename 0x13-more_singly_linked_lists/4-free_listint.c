#include "lists.h"

/**
 * free_listint - a function that frees a linked list;
 * @head: linked list to be frees;
 * Return: returns void;
*/

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}

	free(head);
}
