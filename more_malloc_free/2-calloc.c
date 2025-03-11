#include "main.h"
#include <stdlib.h>
#include <stdint.h>

/**
* _calloc - That allocates memory for an array, using malloc.
*
* @nmemb: Numbers of elements.
* @size: Size of memory allocation.
*
* Return: Always void.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;

	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb > SIZE_MAX / size)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		array[i] = 0;
		i++;
	}
	return (array);
}
