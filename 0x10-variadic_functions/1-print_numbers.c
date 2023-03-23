#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - print numbers followed by a new line
*
* @separator: string to be printed in-between
*
* @n: number of integers
*
* Return: exits if separator is NULL
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, unsigned int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	va_end(list);

	printf("\n");
}

