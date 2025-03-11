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
	int i;

	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; min < max; min++, i++)
		array[i] = i;
	return (array);
}
