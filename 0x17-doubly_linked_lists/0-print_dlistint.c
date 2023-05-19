#include "lists.h"

/**
* print_dlistint - prints all elements of
* dlistint_t list
*
* @h: pointer to head of the list
*
* Return: number of nodes
*
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}

	return (node_num);
}
