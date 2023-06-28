#include "main.h"

/**
  * rev_string - reverses a string..
  * @s: string to be reversed;
  * Return: Void.
  */

void rev_string(char *s)
{
	int length;
	int i;
	char ref;

	length = 0;
	while (length >= 0)
	{
		if (s[length] == '\0')
		{
			for (i = length - 1; i >= length - i; i--)
			{
				ref = s[i];
				s[i] = s[length - 1 - i];
				s[length - 1 - i] = ref;
			}
			break;
		}
		length++;
	}
}
