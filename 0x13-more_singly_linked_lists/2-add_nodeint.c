#include <stdlib.h>
#include "lists.h"

/**
* *add_nodeint - adds new node to beginning of the list
*
* @head: pointer to pointer to head of the list
*
* @n: value to be added
*
* Return: Null if function fails
* or address of the new element
*
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

