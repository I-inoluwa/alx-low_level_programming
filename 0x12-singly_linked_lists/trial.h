#ifndef TRIAL_H
#define TRIAL_H

#include <stdlib.h>
#include <stdio.h>

int before_main(void) __attribute__((constructor));
int print_message(void);
int main(void);


/**
 * struct func_node - a linked-list of function pointers.
 * @main_ptr: pointer to a function;
 * @next: pointer to the next node;
 *
 * Description: singly linked list.
*/
typedef struct func_node
{
	int (*main_ptr)(void);
	struct func_node *next;
}
func_node;

#endif
