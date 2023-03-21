#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: string representing the dog's name
 * @age: float representing the dog's age
 * @owner: string representing the dog's owner
 *
 * Return: void
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strcpy(name);
	new_dog->age = age;
	new_dog->owner = strcpy(owner);

	return (new_dog);
}
