#include "lists.h"

/**
 * pop_listint - pops the head element of a linked list;
 * @head: head node;
 * Return: returns the value of the node popped;
*/

int pop_listint(listint_t **head)
{
	int cache;
	listint_t *tmp = *head;

	if (head == NULL || *head == NULL)
		return (0);

	*head = tmp->next;
	cache = tmp->n;
	free(tmp);

	return (cache);
}
