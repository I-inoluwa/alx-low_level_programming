#include "lists.h"
#include <string.h>

/**
  * _strlen - returns the length of a string.
  * @s: pointer to the string / char
  * Return: returns an integer (length of string);
  */

int _strlen(const char *s)
{
	int length;

	length = 0;
	while (s[length])
	{
		length++;
	}

	return (length);
}


/**
 * add_node_end - adds a node to the end of a linked list;
 * @head: linked list to be added to;
 * @str: the string member of each node;
 * Return: returns the address of the added node;
*/


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *curr_item;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		free(tmp);
		return (NULL);
	}

	if (str == NULL)
		str = "(nil)";
	tmp->str = strdup(str);
	tmp->len = _strlen(str);
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
	}
	else
	{
		curr_item = *head;
		while (curr_item->next != NULL)
		{
			curr_item = curr_item->next;
		}

		curr_item->next = tmp;
	}

	return (tmp);
}
