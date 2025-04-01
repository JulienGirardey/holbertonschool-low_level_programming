#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node_end - adds a new node at the end of a list
*
* @head: new list
* @str: string to add in the list
*
* Return: new list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (NULL);
	}

	while (last->next != NULL)
		last = last->next;

	last->next = new;
	return (last);
}
