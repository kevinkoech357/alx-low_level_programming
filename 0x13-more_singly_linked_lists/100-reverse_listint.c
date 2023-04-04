#include <stddef.h>
#include "lists.h"

/**
* *reverse_listint - reverses the list
*
* @head: pointer to pointer to head
*
* Return: pointer to first node
*
* of the reversed list
*
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before, *now, *after;

	before = after = NULL;
	now = *head;

	while (now != NULL)
	{
		after = now->next;
		now->next = before;
		before = now;
		now = after;
	}

	*head = before;

	return (*head);
}

