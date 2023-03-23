#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_strings - prints strings
*
* @separator: string to be printed in-between
*
* @n: number of strings
*
* Return: void
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (separator == NULL)
	{
		printf("nil");
	}

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(list, char *);

		if (string != NULL)
		{
			printf("%s", string);
		}

		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(list);

	printf("\n");
}

