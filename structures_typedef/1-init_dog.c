#include "dog.h"

/**
* init_dog - That initialize a variable of type struct dog.
*
* @d: Structure to use.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Always void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
