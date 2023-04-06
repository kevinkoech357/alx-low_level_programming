#include "main.h"

/**
* get_bit - function definition
*
* Description: returns value of bit at an index
*
* @n: number involved
*
* @index: index starting from 0
*
* Return: value of bit at index
* or -1 incase of an error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 64;

	/* 64bits is the size of my computer */
	if (index > bit)
		return (-1);

	return ((n >> index) & 1);
}

