#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the dog structure given
 * @d: pointer to the dog structure to print
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("%s \n", d->name);
	printf("%f \n", d->age);
	printf("%s \n", d->owner);
}
