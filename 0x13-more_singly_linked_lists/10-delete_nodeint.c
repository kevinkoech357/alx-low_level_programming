#include <stdlib.h>
#include "lists.h"

/**
* delete_nodeint_at_index - function definition
*
* Description: deletes node at index
*
* @head: pointer to pointer to head
*
* @index: index of the list
*
* Return: 1 if successful
* and -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before, *after;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	i = 0;

	if (index == 0)
	{
		before = *head;
		*head = (*head)->next;
		free(before);
		return (1);
	}

	after = *head;
	before = (*head)->next;

	for (i = 1; before != NULL && i <= index; i++)
	{
		if (i == index)
		{
			after->next = before->next;
			free(before);

			return (1);
		}
		after = before;
		before = before->next;
	}

	return (-1);
}
