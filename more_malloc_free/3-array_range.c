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
	int i, j, range;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = min; i < max; i++)
	{
		arr[j++] = i;
	}
	return (arr);
}
