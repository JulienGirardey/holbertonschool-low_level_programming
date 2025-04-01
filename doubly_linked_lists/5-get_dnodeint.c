#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* get_dnodeint_at_index - that returns the nth node of a linked list
*
* @head: the list to use
* @index: index of the node, starting from 0
*
* Return: the node or NULL if the node does not exist
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	dlistint_t *new;

	if (index == 0)
		return (head);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new = head->next;

	for (i = 1; i != index; i++)
	{
		if (new == NULL)
		{
			printf("Error\n");
			return (NULL);
		}
		new = new->next;
	}

	return (new);
}
