#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 *
 * @a: array to be reversed
 *
 * @n: number of elements in the array
 *
 * Return: reversed array
 *
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
