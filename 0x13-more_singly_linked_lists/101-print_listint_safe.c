#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the length of a linked list (looped or not);
 * @head: Linked list item;
 * Return: returns the length of the list;
 */

int_list *list_len(const listint_t *head)
{
	const listint_t *slow = head, *fast = head;
	size_t count = 0, i = 0;
	int_list *cache = malloc(sizeof(int_list));

	cache->a = 0;
	if (head == NULL)
		return (0);

	while (fast != NULL)
	{
		slow = slow->next;
		if (fast->next == NULL)
		{
			cache->b = (i * 2) + 1;
			return (cache);
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
			cache->a = 1;
			cache->b = count;

			return (cache);
		}
	}
	cache->b = i * 2;

	return (cache);
}

/**
 * print_listint_safe - prints a linked list, considering loops;
 * @head: linked list to be printed;
 * Return: returns the size of the list, (0) if empty;
 */

size_t print_listint_safe(const listint_t *head)
{
	int_list *cache = list_len(head);
	size_t len = cache->b, i = 0, is_looped = cache->a;
	const listint_t *tmp = head;

	if (head == NULL)
		return (0);

	while (i < len)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		tmp = tmp->next;
		i++;
	}

	if (is_looped)
		printf("-> [%p] %d\n", (void *)tmp, tmp->n);

	free(cache);
	return (len);
}
