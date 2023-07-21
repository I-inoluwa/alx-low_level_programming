#include "3-calc.h"

/**
  * get_op_func - selects the right operation to perform
  * @s: operator passsed as argument;
  * Return: returns a pointer to selected operation.
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	if (s == NULL)
		return (NULL);

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (((ops[i].op)[0] == s[0]) && (s[1] == '\0'))
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
