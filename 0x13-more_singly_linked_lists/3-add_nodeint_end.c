#include <stdlib.h>
#include "lists.h"

/**
* *add_nodeint_end - adds a new node at the end of the list
*
* @head: pointer to pointer to head
*
* @n: integer to be added
*
* Return: Null if if fails
* or address of the new
* element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *end_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	end_node = *head;

	while (end_node->next != NULL)
	{
		end_node = end_node->next;
	}

	end_node->next = new_node;

	return (new_node);
}

