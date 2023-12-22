#include "hash_tables.h"

/**
 * hash_table_print - prints an hash table;
 * @ht: hash table to be printed;
 * Return: returns nothing;
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, j = 0;
	hash_node_t **arr = NULL, *cur = NULL;

	if (ht == NULL)
		return;

	arr = ht->array;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (arr[i] == NULL)
			continue;

		if (j != 0)
			printf(", ");
		cur = arr[i];
		while (cur != NULL)
		{
			printf("'%s': '%s'", cur->key, cur->value);
			cur = cur->next;
			if (cur != NULL)
				printf(", ");
		}
		j++;
	}
	printf("}\n");
}
