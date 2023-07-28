#include "trial.h"
#include <stdio.h>

/**
 * print_message - prints a message.
 * Return: returns an int;
*/

int print_message(void)
{
	printf(
		"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
		);
	return (1);
}


/**
 * before_main - prints a message before main;
 * Return: returns (0);
*/

int before_main(void)
{
	func_node *node1, *node2, *tmp;

	node1 = malloc(sizeof(func_node));
	node2 = malloc(sizeof(func_node));

	if (node1 == NULL || node2 == NULL)
		return (-1);

	node1->main_ptr = print_message;
	node1->next = node2;
	node2->main_ptr = main;
	node2->next = NULL;

	tmp = node1;
	while (tmp != NULL)
	{
		tmp->main_ptr();
		tmp = tmp->next;
	}
	free(node2);
	free(node1);
	exit(99);

	return (0);
}
