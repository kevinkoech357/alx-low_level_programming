#include <stdlib.h>
#include "lists.h"

/**
* free_listint - frees listint_t
*
* @head: pointer to head of the list
*
* Return: void
*
*/

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}

