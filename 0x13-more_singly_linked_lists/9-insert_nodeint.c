#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position;
  * @head: linked list item;
  * @idx: index of new node;
  * @n: value of new node;
  * Return: returns the address of the new node;
  * Otherwise, (NULL) on failure.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *alt_tmp = *head;
	listint_t *current = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	if (idx == 0)
	{
		current->n = n;
		current->next = *head;
		*head = current;
		return (*head);
	}

	while (i < idx)
	{
		tmp = alt_tmp;
		if (tmp == NULL)
			return (NULL);

		i++;
		alt_tmp = tmp->next;
	}

	current->n = n;
	current->next = alt_tmp;
	i = 1;
	tmp = *head;
	while (i < idx)
	{
		alt_tmp = tmp->next;
		tmp = alt_tmp;
		i++;
	}
	tmp->next = current;

	return (current);
}
