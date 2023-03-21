#include "dog.h"

/**
 * init_dog - initializes a dog structure with the given values
 * @d: pointer to the dog structure to initialize
 * @name: string representing the dog's name
 * @age: float representing the dog's age
 * @owner: string representing the dog's owner
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
