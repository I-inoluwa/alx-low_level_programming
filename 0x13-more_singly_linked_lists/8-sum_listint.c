#include "lists.h"

/**
 * sum_listint - takes the sum of the value of all nodes;
 * @head: linked list;
 * Return: returns sum, or (0), if list is empty.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (tmp != NULL)
	{
		sum += tmp->n;
		head = tmp->next;
		tmp = head;
	}

	return (sum);
}
