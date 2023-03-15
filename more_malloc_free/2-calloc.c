#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array.
 * @nmemb: Number of elements of the array
 * @size: Size of the elements of the array
 * Return: A pointer to the allocated memory
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
