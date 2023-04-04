#include <stddef.h>
#include "lists.h"

/**
* sum_listint - function definition
*
* Description: return the sum of all data values in the list
*
* @head: pointer to head of the list
*
* Return: sum of all data values
* or 0 if list is empty
*/

int sum_listint(listint_t *head)
{
	listint_t *position;
	int sum;

	position = head;
	sum = 0;

	if (position == NULL)
		return (0);

	while (position != NULL)
	{
		sum = sum + position->n;
		position = position->next;
	}

	return (sum);
}

