#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome;
 * @s: string to be checked
 * Return: returns (1) if True, else (0);
*/

int is_palindrome(char *s)
{
	int len = _strlen(s);
	int i = 0;

	if (s == NULL)
		return (1);

	return (check_str(s, i, len));
}


/**
 * check_str - checks if the rev of a string is same as the string;
 * @str: string to be checked;
 * @i: index integer;
 * @len: length of the string;
 * Return: returns (1) if True, else (0);
*/
int check_str(char *str, int i, int len)
{
	if (i == len)
		return (1);

	if (str[i] == str[len - i - 1])
	{
		i++;
		return (check_str(str, i, len));
	}

	return (0);
}

/**
 * _strlen - returns the length of a string;
 * @s: strings length to be returned;
 * Return: returns an int.
*/

int _strlen(char *s)
{
	int i;

	if (s == NULL)
		return (0);

	if (*s == '\0')
		return (0);

	i = 1 + _strlen(&(*(s + 1)));

	return (i);
}
