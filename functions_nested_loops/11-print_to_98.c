#include <stdio.h>

/**
 * print_to_98 - a function that prints all number from a starting number to 98
 *
 * @n: the starting number
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			printf("%d, ", n);
		}
	printf("98\n");
	}
}
