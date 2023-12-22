#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - gets the value of a key in a hash table;
 * @ht: hash table being checked;
 * @key: key to be found in the hash table;
 * Return: the value if found, else NULL;
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t **arr = NULL, *head = NULL;
	unsigned long int hash = 0;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	hash = key_index((unsigned const char *)key, ht->size);
	arr = ht->array;

	head = arr[hash];
	while (head != NULL)
	{
		if (strcmp(key, head->key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
