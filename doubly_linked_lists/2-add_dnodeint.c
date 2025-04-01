#include "lists.h"
#include <stdlib.h>

/**
* add_dnodeint - that adds a new node at the beginning of a list
*
* @head: address of a list
* @n: number to print
*
* Return: the address of the new elements, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
