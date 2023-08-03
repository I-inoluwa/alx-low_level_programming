#include "lists.h"

/**
 * list_len_cpy - gets the length of a linked list;
 * @head: Head of the linked list being checked;
 * Return: returns the size or len of the list;
*/

size_t list_len_cpy(listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0, i = 0;

	if (head == NULL)
		return (0);

	while (fast != NULL)
	{
		slow = slow->next;
		if (fast->next == NULL)
		{
			return ((i * 2) + 1);
		}
		i++;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
				count++;
			}
			count += i;

			return (count);
		}
	}

	return (i * 2);
}


/**
 * free_listint_safe - frees a linked list (considering loops too);
 * @h: pointer to the head of the linked list;
 * Return: returns the size of the linked list;
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len, i = 0;
	listint_t *tmp = *h;

	if (h == NULL || *h == NULL)
		return (0);

	len = list_len_cpy(*h);

	while (i < len)
	{
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
		i++;
	}
	*h = NULL;

	return (len);
}
