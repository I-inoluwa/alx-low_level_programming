#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - sets a key in an hash table;
 * @ht: hash table data structure;
 * @key: key to be added;
 * @value: value of key to be added;
 * Return: returns (1) on success, (0) on failure;
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = NULL, *head = NULL;
	unsigned long int hash = 0;

	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	hash = key_index((unsigned const char *)key, ht->size);
	if ((ht->array)[hash] == NULL)
	{
		(ht->array)[hash] = new;
	}
	else
	{
		head = (ht->array)[hash];
		new->next = head;
		(ht->array)[hash] = new;
	}

	return (1);
}
