#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_list - Prints all elements of a list_t list.
*
* @h: list to print.
*
* Return: The list printed.
*/
size_t print_list(const list_t *h)
{
	list_t *head;
	unsigned int i = 0;

	head = h->next;
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	    printf("[%d] %s\n", h->len, h->str);
	i++;
	while (h->next != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		h = h->next;
		i++;
	}

	return (i);
}
