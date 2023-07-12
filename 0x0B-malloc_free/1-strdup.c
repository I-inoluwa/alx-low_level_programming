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

	s = malloc(sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	while (*(str + i) != '\0')
	{
		s[i] = str[i];
		i++;
	}
	/*
	 *free(s);
	 */

	return (s);
}
