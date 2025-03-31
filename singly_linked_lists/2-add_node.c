#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list
*
* @head: list with new value
* @str: string to add
*
* Return: new list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;
	return (new);
}
