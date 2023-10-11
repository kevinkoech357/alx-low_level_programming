#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using
 * linear search algorithm.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found,
 * or -1 if not found or array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%lu] = [ %d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
