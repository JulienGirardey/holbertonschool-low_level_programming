#include "lists.h"
#include <stdlib.h>

/**
* free_dlistint - that frees a list_t list
*
* @head: list to free
*
* Return: always void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head);
		head = check;
	}
}