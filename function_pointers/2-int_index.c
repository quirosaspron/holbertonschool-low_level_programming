#include "function_pointers.h"

/**
 * int_index - it searches for an integrer
 * @array: array whose elements will be searched
 * @size: size of the array
 * @cmp: function that'll compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}
