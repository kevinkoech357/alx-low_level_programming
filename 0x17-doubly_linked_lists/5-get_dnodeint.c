#include "lists.h"

/**
* *get_dnodeint_at_index - returns nth node of the list
*
* @head: pointer to head
*
* @index: index targeted
*
* Return: Null if node doesn't exist
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tempo = head;
	unsigned int count = 0;

	while (count < index)
	{
		if (tempo != NULL)
			tempo = tempo->next;
		else
			exit(EXIT_FAILURE);
		count++;
	}

	return (tempo);
}
