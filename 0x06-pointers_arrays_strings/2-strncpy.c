#include "main.h"

/**
  * _strncpy - copies a string.
  * @dest: output string.
  * @src: string to be copied.
  * @n: byte of src to be copied.
  * Return: returns dest.
  */

char *_strncpy(char *dest, const char *src, int n)
{
	int count, i;

	count = 0;
	i = 0;
	while (count >= 0)
	{
		if (src[count++] == '\0')
		{
			break;
		}
		i++;
	}
	while ((i >= 0) && (i < n))
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break;
		}
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
