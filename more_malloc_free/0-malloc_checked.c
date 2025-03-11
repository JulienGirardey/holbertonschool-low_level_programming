#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc.
*
* @b: Number of memory to allocaates.
*
* Return: Always void.
*/
void *malloc_checked(unsigned int b)
{
	void *alloc;

	alloc = malloc(b);
	if (alloc == NULL)
		exit(98);
	return (alloc);
}
