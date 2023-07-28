#include "lists.h"
#include "stdio.h"

/**
 * free_list - function to free every memory allocated.
 * @head: pointer to the start of the list to be freed.
 * Return: returns void;
*/

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head);
}
