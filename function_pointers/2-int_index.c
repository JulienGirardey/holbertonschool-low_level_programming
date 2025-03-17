#include "function_pointers.h"

/**
* int_index - returns the index of the first element for which the
* cmp function does not return 0.
*
* @array: Array of Integer.
* @size: Size is the number of elements in the array array.
* @cmp: Pointer to the function to be used to compare values.
*
* Return: -1 if no elements matches or if size <= 0, something else otherwise.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, index;

	if (array == NULL)
		return (-1);
	if (size == 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	i = 0;
	while (i < size)
	{
		index = cmp(array[i]);
		if (index == 0)
			i++;
		else
			return (i);
	}
	return (-1);
}
