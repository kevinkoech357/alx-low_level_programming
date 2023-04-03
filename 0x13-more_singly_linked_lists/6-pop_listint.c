#include <stdlib.h>
#include "lists.h"

/**
* pop_listint - deletes the head node of the list
*
* @head: pointer to pointer to head of the list
*
* Return: 0 if list is empty
*
* or head node's data(n)
*
*/

int pop_listint(listint_t **head)
{
	listint_t *tempo;
	int value;

	if (*head == NULL)
		return (0);

	tempo = *head;
	value = tempo->n;
	*head = (*head)->next;

	free(tempo);

	return (value);
}

