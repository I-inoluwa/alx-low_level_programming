#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to be splitted string to be copied.
 * Return: returns an array of strings or NULL.
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, width, height, ref;

	if ((str == NULL) || (*str == '\0'))
		return (NULL);

	height = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			for (j = i; str[j] == ' '; j++)
			{
				i++;
			}
			height++;
			continue;
		}
		i++;
	}

	arr = malloc((sizeof(char *)) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	height = 0;
	ref = 0;
	while (str[i])
	{
		width = 0;
		while ((str[i] != ' ') && (str[i]))
		{
			width++;
			i++;
		}
		while (str[i] == ' ')
			i++;

		if (width == 0)
		{
			ref = i;
			continue;
		}
		*(arr + height) = malloc((sizeof(char)) * (width + 1));
		if (*(arr + height) == NULL)
		{
			for (; height >= 0; height--)
			{
				free(arr[height]);
			}
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[height][j] = str[ref + j];

		arr[height][j] = '\0';
		ref = i;
		height++;
	}
	arr[height] = NULL;
	return (arr);
}
