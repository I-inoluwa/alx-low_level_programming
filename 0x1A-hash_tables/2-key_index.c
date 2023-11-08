#include "hash_tables.h"

/**
 * key_index - returns the index of a key in the hash table
 * @key: key to be inserted into the hash table;
 * @size: size of the hash table;
 * Return: returns the index of the key in the hash table;
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = 0;

	if (key == NULL)
		return (0);

	hash = hash_djb2(key);

	return (hash % size);
}
