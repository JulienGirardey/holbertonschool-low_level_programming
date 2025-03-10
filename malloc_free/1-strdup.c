#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* _strdup - Return a pointer to a newly allocated
* space in memory, which contains a copy of the string given as a parameter.
*
* @str: String to copy.
*
* Return: Pointer with new string.
*/
char *_strdup(char *str)
{
	char *sentence;

	int i = 0;

	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size])
		size++;
	sentence = malloc((size + 1) * sizeof(char));
	if (sentence == NULL)
		return (NULL);
	while (i < size)
	{
		sentence[i] = str[i];
		i++;
	}
	sentence[size] = '\0';
	return (sentence);
}
