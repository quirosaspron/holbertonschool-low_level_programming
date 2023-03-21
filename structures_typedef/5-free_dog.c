#include "dog.h"
#include <stdio.h>
/**
 * free_dog - frees the dog structure given
 * @d: pointer to the dog structure to free
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
}
