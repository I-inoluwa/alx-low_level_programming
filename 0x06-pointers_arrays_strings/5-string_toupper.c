#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase.
  * @str: string with charcaters to be changed.
  * Return: returns the manipulated sting.
  */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		if ((str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
