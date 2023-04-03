#include <stddef.h>
#include "lists.h"

/**
* *get_nodeint_at_index - function definition
*
* Description: a function that returns the nth node of the linked list
*
* @head: pointer to head of the list
*
* @index: index of node, from 0
*
* Return: null if node doesn't exist
* or nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *position;
	unsigned int i;

	position = head;

	while (position == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		position = position->next;
	}

	return (position);
}

