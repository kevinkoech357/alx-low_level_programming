#include <stdlib.h>
#include "lists.h"

/**
* free_list - frees list_t
*
* @head: pointer to head
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *memory;

	while (head != NULL)
	{
		memory = head->next;
		free(head->str);
		free(head);
		head = memory;
	}
}

