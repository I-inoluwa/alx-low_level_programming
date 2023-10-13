#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the nodes of a dlist;
 * @head: head element of doubly linked list;
 * Return: returns sum of node values, or (0) if node is empty;
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
