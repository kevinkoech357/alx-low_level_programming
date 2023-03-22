#include <stddef.h>
#include "function_pointers.h"

/**
* int_index - searches for an integer
*
* @array: array to be searched
*
* @size: number of elements in the array
*
* @cmp: function pointer
*
* Return: index of the first element for which
* the cmp function does not return 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ans;

	if (size <= 0)
		return (-1);

	if (array != NULL && size > 0 && cmp)
	{
		for (i = 0; i < size; i++)
		{
			ans = cmp(array[i]);

				if (ans != 0)
					return (i);
		}
	}

	return (-1);
}
