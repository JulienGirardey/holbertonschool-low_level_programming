#include "lists.h"

/**
* dlistint_len - that returns the number of elements in a linked list
*
* @h: the list to use
*
* Return: the number of elements in a linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int nbElements = 0;

	while (h != NULL)
	{
		nbElements++;
		h = h->next;
	}
	return (nbElements);
}
