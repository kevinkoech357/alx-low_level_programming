#include "main.h"

/**
 * print_last_digit - checks code and prints last digit
 *
 *@num: number to be checked
 *
 *Return: Always lastDig
 */

int print_last_digit(int num)
{
	int lastDig;

	lastDig = num % 10;
	if (num < 0)
		lastDig = -(lastDig);
	else if (num >= 0)
		lastDig = lastDig;
	_putchar(lastDig + '0');
	return (lastDig);
}
