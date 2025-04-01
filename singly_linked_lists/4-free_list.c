#include "lists.h"
#include <stdlib.h>

/**
* free_list - that frees a list_t list
*
* @head: list to free
*
* Return: always void
*/
void free_list(list_t *head)
{
	list_t *check;

	while (head != NULL)
	{
		check = head->next;
		free(head->str);
		free(head);
		head = check;
	}
}
