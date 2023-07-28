#include "lists.h"

/**
 * free_list - function to free every memory allocated.
 * @head: pointer to the start of the list to be freed.
 * Return: returns void;
*/

void free_list(list_t *head)
{
	if (head == NULL)
	{
		free(head);
		return;
	}

	free_list(head->next);
	free(head->str);
	free(head);

}
