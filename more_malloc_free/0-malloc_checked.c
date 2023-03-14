#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The size of the memory to be allocated.
 * Return: Pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *allocated_memory;

	allocated_memory = malloc(b);
	if (allocated_memory == NULL)
	{
		exit(98);
	}
	return (allocated_memory);
}
