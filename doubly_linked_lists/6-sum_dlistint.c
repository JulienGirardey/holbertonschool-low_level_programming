#include "lists.h"

/**
* sum_dlistint - that returns the sum of all the data(n) of a linked list
*
* @head: the list address
*
* Return: the sum of data(n), or 0 if the list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
