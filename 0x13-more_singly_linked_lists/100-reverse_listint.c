#include "lists.h"

/**
  * reverse_listint - reverses a linked list;
  * @head: pointer to linked list to be reversed;
  * Return: returns the address of the first node of reversed list;
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL || *head == NULL)
		return (*head);

	tmp = (*head)->next;
	(*head)->next = NULL;

	while (tmp != NULL)
	{
		current = tmp->next;
		tmp->next = *head;
		*head = tmp;
		tmp = current;
	}

	return (*head);
}
