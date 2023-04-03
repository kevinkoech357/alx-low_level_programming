#include <stddef.h>
#include "lists.h"

/**
* listint_len - a fxn that returns no. of elements
* in the list
*
* @h: pointer to head of the list
*
* Return: number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;
		h = h->next;
	}

	return (element);
}

