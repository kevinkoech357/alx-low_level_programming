#include "main.h"

/**
 * _pow_recursion - fxn that returns value of
 * x raised to the power of y
 *
 * @x: base number
 *
 * @y: power value
 *
 * Return: value of x raised to
 * power of y if y > 0
 * and -1 if  < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
