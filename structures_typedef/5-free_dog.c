#include "dog.h"
#include <stdlib.h>

/**
* free_dog - That frees the allocation for dogs struct.
*
* @d: struct of dogs.
*
* Return: Always void.
*/
void free_dog(dog_t *d)
{
	free(d->name), d->name = NULL;
	free(d->owner), d->owner = NULL;
	free(d), d = NULL;
	exit(EXIT_SUCCESS);
}
