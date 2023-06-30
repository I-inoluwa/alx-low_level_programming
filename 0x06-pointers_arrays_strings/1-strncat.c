#include "main.h"

/**
  * _strncat - concatenates two strings, and uses at most n bytes from src.
  * @dest: string to be concatenated.
  * @src: second string to be concantenated.
  * @n: number of bytes from src to be used.
  * Return: returns a string.
  */

char *_strncat(char *dest, char *src, int n)
{
	int count, i;

	count = 0;
	while (count >= 0)
	{
		if (dest[count] == '\0')
		{
			break;
		}
		count++;
	}

	i = 0;
	while ((i >= 0) && (i < n))
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[count++] = src[i];
		i++;
	}
	dest[count] = '\0';
	return (dest);
}
