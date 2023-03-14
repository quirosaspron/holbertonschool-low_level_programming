#include <stdlib.h>

/**
  * alloc_grid - initializes a 2d array to zeroes
  * @width: the width of the array
  * @height: the height of the array
  * Return: a pointer to the 2d array of zeroes
  */

int **alloc_grid(int width, int height)
{
	int **arr;
	int r, e;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		arr[r] = malloc(sizeof(int) * width);
		if (arr[r] == NULL)
		{
			return (NULL);
		}
		for (e = 0; e < width; e++)
		{
			arr[r][e] = 0;
		}
	}
	return (arr);
}
