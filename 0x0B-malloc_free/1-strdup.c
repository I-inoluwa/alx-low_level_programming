#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a memory space, containing a str.
 * @str: a string to be copied.
 * Return: returns a pointer to a memory space;
 */

char *_strdup(char *str)
{
	char *s;
	int i;

	i = 0;
	s = malloc(sizeof(str));
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		s[i] = str[i];
		i++;
	}

	return (s);
}
