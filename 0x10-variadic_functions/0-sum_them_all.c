#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - adds all its parameters
*
* @n: number of parameters
*
* Return: sum of all parameters
*
*/

int sum_them_all(const unsigned int n, ...)
{
	/* Define temporary variables */

	va_list list;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	/* initialize sum */

	sum = 0;

	/* set where variable length part of the argument list ends */

	va_start(list, n);

	/* loop through adding values */

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, unsigned int);
	}

	/* clean up */

	va_end(list);

	return (sum);
}
