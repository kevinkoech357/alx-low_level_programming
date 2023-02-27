#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: Always void
 */

void swap_int(int *a, int *b)
{
	int tempo = *a;

	*a = *b;

	*b = tempo;
}
