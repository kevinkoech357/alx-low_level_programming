#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* *add_node - adds a new node to the beginning of list_t
*
* @head: pointer to pointer to head
*
* @str: string involved
*
* Return: address of new element
* or NULL if it fails
*
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);
	
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	
	new_node->len = strlen(str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
