#include "function_pointers.h"

/**
 * array_iterator - executes a function on the array
 * @array: array whose elements will be executed on
 * @size: size of the array
 * @action: pointer to the function that'll be used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size, i++)
		{
			action(array[i]);
		}
	}
}
