#include "main.h"

/**
 * _abs - function that computes absolute value of n
 *
 * @num: number to be checked
 *
 * Return: Always num
 */

int _abs(int num)
{
	if (num < 0)
		num = -(num);
	else if (num >= 0)
		num = num;
	return (num);
}
