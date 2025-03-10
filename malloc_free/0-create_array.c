#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of cahrs,
* and initializes it with a specific char.
*
* @size: Size of array.
* @c: Char to add.
*
* Return: Array with new char.
*/
char *create_array(unsigned int size, char c)
{
	char *array;

	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
