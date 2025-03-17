#include "function_pointers.h"
#include <stddef.h>

/**
* array_iterator - that executes a function given as a
* parameter on each element of an array.
*
* @array: Array to give.
* @size: Size of array.
* @action: Pointer to the function use.
*
* Return: Always void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
