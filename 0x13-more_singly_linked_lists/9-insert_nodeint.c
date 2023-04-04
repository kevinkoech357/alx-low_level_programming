#include <stdlib.h>
#include "lists.h"

/**
* *insert_nodeint_at_index - function definition
*
* Description: inserts a new node at a given position
*
* @head: pointer to pointer to head
*
* @idx: index of the list where node will be added
*
* @n: data to be added
*
* Return: address of new node
* or null if it fails
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *position;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	position = *head;

	for (i = 0; i < (idx - 1) && position != NULL; i++)
	{
		position = position->next;
	}

	new_node->next = position->next;
	position->next = new_node;

	return (new_node);
}

