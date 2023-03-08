#include "main.h"

/**
 * divisible - fxn that checks if number is divisible
 *
 * @num: number involved
 *
 * @divisor: number used in division
 *
 * Return: 0 if number is divisible
 * and 1 if number
 * isn't divisible
 */

int divisible(int num, int divisor)
{
	if (num % divisor == 0)
	{
		return (0);
	}

	if (divisor == num / 2)
	{
		return (1);
	}

	return (divisible(num, divisor + 1));
}


/**
 * is_prime_number - fxn that checks if number
 * is a prime number
 *
 * @n: number involved
 *
 * Return: 0 if number is not prime no.
 * and 1 if it's prime
 * number
 */

int is_prime_number(int n)
{
	int divisor = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (divisible(n, divisor));
}
