#include "lists.h"

/**
* *add_dnodeint - adds a new node at the start
*
* @head: pointer to pointer to head
*
* @n: content to be added
*
* Return: address of new element
* or NULL
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->prev = NULL;
	new_node->n = n;

	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}
