#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first part of the strings to be concatenated
 * @s2: Second string to be concatenated.
 * Return: returns a pointer to a memory space;
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	str = malloc((sizeof(s1) + sizeof(s2)) - sizeof(char));
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (*(s1 + i))
	{
		*(str + i) = s1[i];
		i++;
	}
	j = 0;
	while (*(s2 + j))
	{
		*(str + i) = s2[j];
		j++;
		i++;
	}

	*(str + i) = '\0';
	/*
	 *free(str);
	 */
	return (str);
}

