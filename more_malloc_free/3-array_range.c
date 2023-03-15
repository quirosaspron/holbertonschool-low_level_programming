#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Smallest int included in the array
 * @max: Biggest int included in the array
 * Return: The pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, j, elements;

	if (min > max)
	{
		return (NULL);
	}
	elements = max - min;
	arr = malloc(sizeof(int) * elements);
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	if (min == max)
	{
		arr[j] = min;
		return (arr);
	}
	for (i = min; i < max; i++)
	{
		arr[j++] = i;
	}
	return (arr);
}
