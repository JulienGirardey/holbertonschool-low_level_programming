#include "lists.h"

/**
* list_len - Count the numbers of elements in a linked list_t list
*
* @h: list to count
*
* Return: Numbers of elements count
*/
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
