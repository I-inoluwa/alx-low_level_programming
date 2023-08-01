#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a linked list;
 * @head: linked list to be accessed;
 * @n: value of node to be added;
 * Return: returns the linked list;
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
