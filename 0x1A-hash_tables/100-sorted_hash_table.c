#include "hash_tables.h"
#include <string.h>

/**
 * shash_table_create - creats a new sorted hash table;
 * @size: size of hash table;
 * Return: returns the address of the table created;
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new = NULL;
	shash_node_t **arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(shash_table_t));
	arr = malloc(sizeof(shash_node_t) * (size));
	if (new == NULL || arr == NULL)
	{
		free(new);
		free(arr);
		return (NULL);
	}
	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	for (i = 0; i < size; i++)
		arr[i] = new->shead;

	new->array = arr;

	return (new);
}

/**
 * sks - helper function to set the key in sorted list;
 * @ht: hash table;
 * @new: the new node to be added;
 * @hash: (unused) - hash of the node to be added;
 * Return: returns nothing;
 */

void sks(shash_table_t *ht, shash_node_t *new, unsigned long int hash)
{
	shash_node_t *head = ht->shead, *cur = NULL;

	(void)hash;

	while (head != NULL)
	{
		if (strcmp(new->key, head->key) < 0)
		{
			new->snext = head;
			new->sprev = cur;
			if (cur != NULL)
				cur->snext = new;
			else
				ht->shead = new;
			head->sprev = new;
			break;
		}
		cur = head;
		head = head->snext;
		if (head == NULL)
		{
			new->sprev = cur;
			cur->snext = new;
			ht->stail = new;
		}
	}
}

/**
 * skh - helper function to set the key in hash_map;
 * @ht: hash table;
 * @new: the new node to be added;
 * @hash: hash of the node to be added;
 * Return: returns nothing;
 */

unsigned int skh(shash_table_t *ht, shash_node_t *new, unsigned long int hash)
{
	shash_node_t *head = (ht->array)[hash], *cur = NULL;

	while (head != NULL)
	{
		if (strcmp(new->key, head->key) == 0)
		{
			free(head->value);
			head->value = strdup(new->value);
			free(new->value);
			free(new->key);
			free(new);
			return (1);
		}
		if (strcmp(new->key, head->key) < 0)
		{
			new->next = head;
			if (cur != NULL)
				cur->next = new;
			else
				(ht->array)[hash] = new;
			break;
		}
		cur = head;
		head = head->next;
		if (head == NULL)
			cur->next = new;
	}

	return (0);
}

/**
 * shash_table_set - sets the value of a key in the sorted table;
 * @ht: hash table to be worked on;
 * @key: key of new node to be added to the table;
 * @value: value of node to be added to the sorted hash table;
 * Return: returns (1) on success, and (0) on failure;
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new = NULL;
	unsigned long int hash = 0, flag = 0;

	if (key == NULL || key[0] == '\0' || value == NULL || ht == NULL)
		return (0);

	new = malloc(sizeof(shash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->snext = NULL;
	new->sprev = NULL;
	new->next = NULL;

	hash = key_index((unsigned const char *)key, ht->size);
	if (ht->shead == NULL)
	{
		ht->shead = new;
		ht->stail = new;
		(ht->array)[hash] = new;
		return (1);
	}
	flag = skh(ht, new, hash);
	if (flag == 1)
		return (1);

	sks(ht, new, hash);

	return (1);
}

/**
 * shash_table_get - gets the value of a key in a sorted hash table;
 * @ht: sorted hash table;
 * @key: key of node to be searched.
 * Return: returns the value of node if found, else (NULL);
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t **arr = NULL, *head = NULL;
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

/**
 * shash_table_print - prints a sorted hash table;
 * @ht: sorted hash table to be printed;
 * Return: returns nothing.
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *head = NULL;

	if (ht == NULL)
		return;

	head = ht->shead;
	printf("{");
	while (head != NULL)
	{
		printf("'%s': '%s'", head->key, head->value);
		head = head->snext;
		if (head != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse;
 * @ht: sorted hash table to be printed;
 * Return: returns nothing.
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tail = NULL;

	if (ht == NULL)
		return;

	tail = ht->stail;
	printf("{");
	while (tail != NULL)
	{
		printf("'%s': '%s'", tail->key, tail->value);
		tail = tail->sprev;
		if (tail != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes an shash table;
 * @ht: hash table to be deleted;
 * Return: eturns nothing;
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t **arr = NULL, *old = NULL, *new = NULL;

	if (ht == NULL)
		return;

	arr = ht->array;
	old = ht->shead;
	while (old != NULL)
	{
		new = old->snext;
		free(old->value);
		free(old->key);
		free(old);
		old = new;
	}
	free(arr);
	free(ht);
}
