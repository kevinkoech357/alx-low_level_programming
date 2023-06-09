#include "hash_tables.h"

/**
 * key_index - returns index of key
 *
 * @key: key involved
 *
 * @size: size of the array of hash table
 *
 * Return: index of key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}

