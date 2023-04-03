#include <stdlib.h>
#include "lists.h"

/**
* free_listint2 - frees the list then sets head to null
*
* @head: pointer to pointer to head of the list
*
* Return: void
*
*/

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
	}

	head = NULL;
}

