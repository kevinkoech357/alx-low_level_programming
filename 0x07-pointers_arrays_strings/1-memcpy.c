#include "main.h"

/**
 * *_memcpy - fxn that copies memory area
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for ( ; i < n; i++)
	{
		*dest = *src;
	}

	return (dest);
}

