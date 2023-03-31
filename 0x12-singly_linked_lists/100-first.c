#include <stdio.h>

/**
* __attribute__ - keyword that allows specification
* of additional attributes of a fxn
*
* Description - prints line before main fxn is executed
*
* Return: void
*/

void __attribute__((constructor)) before main()
{
	printf("You're beat! and yet, you must allow,\n
	I bore my house upon my back!\n");
}
