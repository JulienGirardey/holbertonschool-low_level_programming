#include "dog.h"
#include <stdio.h>

/**
* print_dog - That print informations about dog.
*
* @d: Struct containes informations about dog.
*
* Return: Always void.
*/
void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
