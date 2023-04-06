#include <stddef.h>
#include "main.h"

/**
* clear_bit - function definition
*
* Description: sets the value of a bit to 0
* at a given index
*
* @n: pointer to number
*
* @index: index from 0
*
* Return: 1 if successful
* or -1 if it fails
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bits = 64;

	if (n == NULL)
		return (-1);

	if (index > bits)
		return (-1);

	/* to set value of a bit to 0 at an index, use bitwise AND operator */
	/* the complement changes all 1s to 0s */

	*n = (*n & ~(1 << index));

	return (1);
}

