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
	unsigned int i = 0;

	dlistint_t *current = head;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	return (current);
}
