#include <stdio.h>
#include "lists.h"

/**
* print_list - prints data of each node
*
* @h: pointer to head
*
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}

	return (count);

}
