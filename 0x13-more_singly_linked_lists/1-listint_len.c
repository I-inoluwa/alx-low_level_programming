#include "lists.h"

/**
 * listint_len - returns the number of elements in a list;
 * @h: linked list to be checked.
 * Return: returns a size_t datatype, indicating length.
*/

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
