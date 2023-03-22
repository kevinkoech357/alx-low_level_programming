#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - Selects the correct function to perform the
* operation asked by the user.
*
* @s: The operator passed as argument to the program
*
* Return: A pointer to the function that corresponds to the
* operator given as a parameter.
*
*/

int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}};

	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);
}
