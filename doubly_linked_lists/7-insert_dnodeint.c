#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - that inserts a new node at a given position
*
* @h: list address
* @idx: index where the new node should be added
* @n: number to add
*
* Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;

	dlistint_t *new;
	dlistint_t *head_before = *h;
	dlistint_t *head_after = *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;


	for (i = 0; i < (idx - 1); i++)
	{
		if (head_before == NULL)
			return (NULL);
		head_before = head_before->next;
	}
	for (i = 0; i != idx; i++)
	{
		if (head_after == NULL)
			return (NULL);
		head_after = head_after->next;
	}

	head_before->next = new;
	new->next = head_after;

	return (new);
}
