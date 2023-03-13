#include <stdlib.h>

/**
  * create_array - creates an array of size n, and initialized with c
  * @size: size of the array
  * @c: character to fill in the array
  * Return: An array of size n, with all values initialized to c
  */

char *create_array(unsigned int size, char c)
{
	char *ar;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	ar = malloc(sizeof(char) * size);
	for (i = 0; i <  size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
