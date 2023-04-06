#include "main.h"

/**
* flip_bits - function definition
*
* Description: returns no. of bits needed to flip
* to get one no. from another
*
* @n: first number
*
* @m: second number
*
* Return: no. of bits
*
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* this problem is referred to as "hamming distance" */

	unsigned long int k;
	int bitNumber;

	/* use XOR operator to get bits that are different btwn n & m */

	k = n ^ m;

	/* initialize bitNumber, if you don't you'll get funny results */

	bitNumber = 0;

	/* count no. of set bits in k */

	while (k)
	{
		bitNumber = bitNumber + (k & 1);
		k = k >> 1;
	}

	return (bitNumber);
}

