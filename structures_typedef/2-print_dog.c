#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_dog - That print informations about dog.
*
* @d: Struct containes informations about dog.
*
* Return: Always void.
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	else if (d->name == NULL)
	    printf("Name: nil\nAge: %f\nOwner: %s\n", d->age, d->owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
