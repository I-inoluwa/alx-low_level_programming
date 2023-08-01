#include "lists.h"

/**
 * 
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	int i = 0;

	if (head == NULL)
		return (0);

	while (i < index)
	{
		head = tmp->next;
		tmp = head;

		if (tmp == NULL)
			return (0);

		++i;
	}

	return (tmp);
	

}