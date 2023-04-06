#include <stddef.h>
#include "main.h"

/**
* set_bit - function definition
*
* Description: sets value of bit to 1
* ar a given index
*
* @n: pointer to value n
*
* @index: index starting from 0
*
* Return: 1 if it works
* or -1 if it fails
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = 64;

	if (n == NULL)
		return (-1);

	if (index > bits)
		return (-1);

	/* to set value to 1, use bitwise OR operator */

	*n = (*n | (1 << index));

	return (1);
}

