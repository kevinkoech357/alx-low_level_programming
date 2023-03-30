#include <stdio.h>
#include "lists.h"

/**
* list_len - lists number of elements in list_t
*
* @h: pointer to head
*
* Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);
}
