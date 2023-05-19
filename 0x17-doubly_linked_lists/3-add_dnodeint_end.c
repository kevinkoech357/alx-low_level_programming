#include "lists.h"

/**
* *add_dnodeint_end - adds a new node at the end
*
* @head: pointer to pointer to head
*
* @n: content to be added
*
* Return: address of new element
* or NULL
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *tempo = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (tempo == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}

	tempo->next = new_node;
	new_node->prev = tempo;

	return (new_node);
}
