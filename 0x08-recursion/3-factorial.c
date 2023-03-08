#include "main.h"

/**
 * factorial - fxn that returns
 * factorial of a number
 *
 * @n: number involved
 *
 * Return: -1 if n < 0,
 * 1 if n == 0
 * and factorial of n if
 * n > 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
