#include <stddef.h>
#include "main.h"

/**
* binary_to_uint - function definition
*
* Description: converts binary to unsigned int
*
* @b: pointer to a string of 0 or 1 chars
*
* Return: Null if b is null
* or converted value
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted;
	int i;

	converted = i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
		{
			converted = converted << 1;
		}
		else if (b[i] == '1')
		{
			converted = converted << 1;
			converted = converted | 1;
		}
		else
		{
			return (0);
		}
		i++;
	}

	return (converted);
}
