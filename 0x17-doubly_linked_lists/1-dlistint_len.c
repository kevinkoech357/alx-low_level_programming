#include "lists.h"

/**
* dlistint_len - returns number of elements
* in the list
*
* @h: pointer to the head
*
* Return: number of elements
*
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
