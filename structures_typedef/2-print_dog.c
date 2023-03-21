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
	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil) \n");
	}
	else
	{
		 printf("%s \n", d->name);
	}
		printf("%f \n", d->age);
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s \n", d->owner);
	}
}
