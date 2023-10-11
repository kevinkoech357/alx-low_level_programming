#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index where the value is found,
 * or -1 if not found or array is NULL.
 */

int binary_search(int *array, size_t size, int value)
{
	int i;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		int mid = left + (right - left)
			/ 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i == right)
			{
				printf("%d\n", array[i]);
			}
			else
			{
				printf("%d, ", array[i]);
			}
		}
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
