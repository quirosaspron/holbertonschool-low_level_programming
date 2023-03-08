#include "main.h"

/**
 * print_square - prints a square of size n
 *
 * @size: The size of the square
 *
 */

void print_square(int size)
{
	int i;
	int b;

	for (i = 0; i < size; i++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
