#include "hash_tables.h"

/**
 * hash_table_create - creates an hash table of size 'size';
 * @size: size of the hash table to be created;
 * Return: returns the address to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = NULL;
	hash_node_t **arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	arr = malloc(sizeof(hash_node_t) * (size));
	if (new == NULL || arr == NULL)
	{
		free(new);
		free(arr);
		return (NULL);
	}
	new->size = size;
	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new->array = arr;

	return (new);
}
