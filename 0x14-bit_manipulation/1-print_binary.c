#include "main.h"

/**
* print_binary - function definition
*
* Description: prints binary representation of
* a number
*
* @n: number involved
*
* Return: void
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1); /* recursion */
	}

	if (n & 1)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
}

