#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
* new_dog - This function creates a new dog.
*
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Struct New dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL || age == -1.0 || owner == NULL)
		return (NULL);

	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
