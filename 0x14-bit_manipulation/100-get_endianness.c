#include <stddef.h>
#include "main.h"

/**
* get_endianness - checks endianess
*
* Return: 0 if big endian
* or 1 if little endian
*/

int get_endianness(void)
{
	size_t k;
	char *c;

	k = 1;
	c = (char *) &k;

	return ((int)*c);
}

