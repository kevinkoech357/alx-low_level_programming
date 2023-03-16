#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 *
 * @size: size of each array element in bytes
 *
 * Return: pointer to allocated memory
 *
 * or NULL if it fails
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
		return (NULL);

	return (calloc(nmemb, size));
}
