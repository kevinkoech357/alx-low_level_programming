#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 *
 * @min: first array value
 *
 * @max: last array value
 *
 * Return: pointer to the new array
 *
 * or NULL if it fails or
 *
 * min > max
 *
 */

int *array_range(int min, int max)
{
	int *array, i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;

	array = malloc(sizeof(int) * n);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		array[i] = min++;

	return (array);
}
