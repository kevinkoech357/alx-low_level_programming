#include "lists.h"

/**
* free_dlistint - frees the list
*
* @head: pointer to the head
*
* Return: void
*
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
