#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 *
 * @d: pointer to struct involved
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}

	if (d->age < 0)
	{
		printf("Age: (nil)\n");
	}

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}

	if (d)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
