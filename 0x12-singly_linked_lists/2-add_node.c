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
 * add_node - adds new nodes to a linked list.
 * @head: node to be added;
 * @str: str of the node to be added
 * Return: returns the address of the new element;
 * Otherwise, NULL on failure.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

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
	tmp->next = *head;
	*head = tmp;

	return (tmp);
}
