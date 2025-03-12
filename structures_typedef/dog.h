#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about dog
 *
 * @name: Name of dog.
 * @age: Age of dog.
 * @owner: Owner of dog.
 *
 * Description: This struct define 3 variables who containes 1 informations
 * about dog : this name, age and owner.
 */
struct dog
{
	char *name;

	float age;

	char *owner;

};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif
