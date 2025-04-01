#include "lists.h"
#include <stdio.h>

/**
* print_dlistint - that prints all the elements of a dlistint_t list
*
* @h: list to print
*
* Return: the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nbNode = 0;

	while (h != NULL)
	{
		nbNode++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nbNode);
}
