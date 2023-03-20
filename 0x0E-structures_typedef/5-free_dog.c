#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees memory
 *
 * @d: pointer to address to be freed
 *
 * Return: void
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
