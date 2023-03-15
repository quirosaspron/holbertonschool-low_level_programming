#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to be allocated.
 * Return: Pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)arr + i) = 0;
	}
	return (arr);
}
