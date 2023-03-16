#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc
 *
 * @b: unsigned integer used in memory allocation
 *
 * Return: void pointer or NULL
 *
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	else
		return (a);
}
