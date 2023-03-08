#include "main.h"

/**
 * squareRoot - fxn to find square root
 *
 * @num: number involved
 *
 * @root: root to be tested
 *
 * Return: square root
 * or -1 if num has
 * no square root
 */

int squareRoot(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	else if (root == num / 2)
	{
		return (-1);
	}

	else
	{
		return (squareRoot(num, root + 1));
	}
}

/**
 * _sqrt_recursion - fxn that returns square root
 * of a number
 *
 * @n: number involved
 *
 * Return: square root of n
 * or -1 if n has no
 * square root
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	else
	{

		return (squareRoot(n, root));
	}
}
