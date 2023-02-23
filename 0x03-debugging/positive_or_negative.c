#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - checks if number is +ve or -ve
 *
 *@i: number to be checked
 *
 * Return: void
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
}
