#include <stdio.h>

void __attribute__((constructor)) before(void);

/**
* before - prints line before main fxn is executed
*
* Return: void
*/

void __attribute__((constructor)) before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
