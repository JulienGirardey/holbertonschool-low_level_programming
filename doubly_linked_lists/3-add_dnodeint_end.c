#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint_end - that adds a new node at the end of a list
*
* @head: the address of list
* @n: number to add
*
* Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;
	return (new);
}
