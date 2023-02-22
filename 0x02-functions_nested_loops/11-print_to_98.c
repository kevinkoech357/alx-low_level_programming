#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints numbers to 98
 * @n: parameter declared
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d ", i);
			if (i != 98)
				printf(",");
		}
		printf("\n");
	}
	else if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d ", i);
			if (i != 98)
				printf(",");
		}
	}
	else if (n == 98)
	{
		for (i = n; i >= 98; i++)
		{
			printf("%d ", i);
			if (i != 98)
				printf(",");
		}
	}
	else if (n == 98)
	{
		printf("%di ", n);
	}
}
