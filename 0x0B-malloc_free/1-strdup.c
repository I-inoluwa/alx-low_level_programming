#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a memory space, containing a str;
 * @str: a string to be copied.
 * Return: returns a pointer to a memory space;
 */

char *_strdup(char *str)
{
	char *s;
	int i, strlen;

	strlen = 0;
	for (i = 0; str[i]; i++)
	{
		strlen++;
	}
	s = malloc((strlen + 1) * sizeof(char));
	if (str == NULL || s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
