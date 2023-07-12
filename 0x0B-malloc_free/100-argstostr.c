#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all args of the program.
  * @ac: count of the number of arguments.
  * @av: list of arguments.
  * Return: a pointer to a new string, or NULL.
  */

char *argstostr(int ac, char **av)
{
	char *s;
	int count, each_len, strlen, i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	strlen = 0;
	for (count = 0; count < ac; count++)
	{
		for (each_len = 0; (*(av + count))[each_len]; each_len++)
		{
			strlen++;
		}
	}
	s = malloc(sizeof(char) * (strlen + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	for (count = 0; count < ac; count++)
	{
		for (each_len = 0; (*(av + count))[each_len]; each_len++)
		{
			s[i++] = (*(av + count))[each_len];
		}
		s[i++] = 'n\';
	}

	s[strlen] = '\0';
	return (s);
}
