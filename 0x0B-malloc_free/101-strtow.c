#include "main.h"
#include <stdlib.h>

/**
 * get_arr_len - gets the height of a 2D array of strs.
 * @str: string passed.
 * Return: returns an integer.
 */
int get_arr_len(char *str)
{
	int i, j, height;

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

	return (height);
}


/**
 * get_str_len - gets the length of a string.
 * @str: string passed as argument.
 * @i: position of a char in str.
 * Return: returns an integer.
 */
int *get_str_len(char *str, int i)
{
	int width;
	int *arr;

	arr = malloc(sizeof(int) * 2);

	width = 0;
	while ((str[i] != ' ') && (str[i]))
	{
		width++;
		i++;
	}
	while (str[i] == ' ')
		i++;

	arr[0] = width;
	arr[1] = i;

	return (arr);
}

/**
 * strtow - splits a string into words
 * @str: strng to be splitted string to be copied.
 * Return: returns an array of strings. or NULL.
 */
char **strtow(char *str)
{
	char **arr;
	int *int_arr;
	int i, j, width, height, ref;

	if (str == NULL || *str == '\0')
		return (NULL);
	height = get_arr_len(str);
	arr = malloc((sizeof(char *)) * (height + 1));
	if (arr == NULL)
		return (NULL);

	i = 0, height = 0, ref = 0;
	while (str[i])
	{
		int_arr = get_str_len(str, i);
		width = int_arr[0];
		i = int_arr[1];
		if (width == 0)
		{
			ref = i;
			if (str[i] == '\0')
				return (NULL);
			continue;
		}
		*(arr + height) = malloc((sizeof(char)) * (width + 1));
		if (*(arr + height) == NULL)
			return (NULL);

		for (j = 0; j < width; j++)
			arr[height][j] = str[ref + j];

		arr[height][j] = '\0';
		ref = i;
		height++;
	}
	arr[height] = NULL;
	return (arr);
}
