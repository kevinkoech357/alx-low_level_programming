#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: pointer to the string
 *
 * Return: Always 0
 *
 */

int _atoi(char *s)
{
	int num_sign = 1;
	unsigned int digit = 0;

	do {
		if (*s == '-')
		{
			num_sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit = (digit * 10) + (*s - '0');
		}
		else if (digit > 0)
		{
			break;
		}
	} while (*s++);
	return (digit * num_sign);
}
