#include "main.h"
#include <stdlib.h>

/**
* array_range - That creates an array of integers.
*
* @min: Valeur minimum.
* @max: Valeur maximum.
*
* Return: Array of integers.
*/
int *array_range(int min, int max)
{
	int i = 0;

	int *array;

	array = malloc((max + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = min;
	while (i <= max)
	{
		array[i] = i;
		i++;
	}
	return (array);
}
