#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a list (if any);
 * @head: head of the linked list;
 * Return: returns the node at the start of the loop, or (NULL);
*/

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head, *fast = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (fast != NULL)
	{
		slow = slow->next;
		if (fast->next == NULL)
		{
			return (NULL);
		}
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}

			return (slow);
		}
	}

	return (NULL);
}
