#include "main.h"

/**
  * _strcat - concatenates two strings.
  * @dest: first string
  * @src: source. appended to dest.
  * Return: returns the new string (concatenated string).
  */
char *_strcat(char *dest, char *src)
{
	char *result;
	int count, next;

	count = 0;
	next = 0;
	result = "";
	while (count >= 0)
	{
		if (dest[next] == '\0')
		{
			count = 0;
			result += src[count];
			if (src[count] == '\0')
			{
				result += '\0';
				break;
			}
		}
		else
		{
			result += dest[count];
			next = count;
		}
		count++;
	}
	return (result);
}
