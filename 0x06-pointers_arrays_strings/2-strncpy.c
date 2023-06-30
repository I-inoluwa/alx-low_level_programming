#include "main.h"

/**
  * _strncpy - copies a string.
  * @dest: output string.
  * @src: string to be copied.
  * @n: byte of src to be copied.
  * Return: returns dest.
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while ((i >= 0) && (i < n))
	{
		if (src[i] == '\0')
		{
			dest[i] = '\0';
			break;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}

	return (dest);
}
