#include "hash_tables.h"

/**
 * *hash_table_create - creates a new hash table
 *
 * @size: size of the hash table
 *
 * Return: NULL if size is NULL
 *
 * or pointer to the new hash table
 *
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->array = calloc((size_t)size, sizeof(hash_table_t *));

	if (new_table->array == NULL)
	{
		return (NULL);
	}

	return (new_table);
}

