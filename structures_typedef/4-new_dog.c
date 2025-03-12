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
	int sizeName, sizeOwner, i;

	dog_t *d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (name == NULL || age < 0.0 || owner == NULL)
		return (NULL);
	sizeName = 0;
	while (name[sizeName])
		sizeName++;
	d->name = malloc((sizeName + 1) * sizeof(char));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';

	sizeOwner = 0;
	while (owner[sizeOwner])
		sizeOwner++;
	d->owner = malloc((sizeOwner + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	d->age = age;
	return (d);
}
