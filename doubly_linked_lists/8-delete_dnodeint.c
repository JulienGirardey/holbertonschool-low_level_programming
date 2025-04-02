#include "lists.h"

/**
* delete_dnodeint_at_index - that deletes the node at index of a linked list
*
* @head: list address
* @index: index use to know what delete
*
* Return: 1 if succeeded, or -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;

	dlistint_t *head_before = *head;
	dlistint_t *head_after = *head;

	if ((*head) == NULL)
		return (-1);

	if (index == 0)
	{
		(*head) = head_after->next;
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (head_before == NULL)
			return (-1);
		head_before = head_before->next;
	}
	for (i = 0; i != (index + 1); i++)
	{
		if (head_after == NULL)
			return (-1);
		head_after = head_after->next;
	}

	head_before->next = head_after;

	return (1);
}
