#include "hash_tables.h"

/**
 * hash_table_delete - deletes an hash table;
 * @ht: hash table to be deleted;
 * Return: eturns nothing;
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **arr = NULL, *old = NULL, *new = NULL;
	unsigned int i = 0;

	if (ht == NULL)
		return;

	arr = ht->array;
	for (i = 0; i < ht->size; i++)
	{
		if (arr[i] == NULL)
		{
			free(arr[i]);
			continue;
		}

		old = arr[i];
		while (old != NULL)
		{
			new = old->next;
			free(old->value);
			free(old->key);
			free(old);
			old = new;
		}
	}
	free(arr);
	free(ht);
}
