#include "main.h"

/**
 * print_diagonal - prints a diagonal of length n
 * @n: The length of the diagonal
 */

void print_diagonal(int n)
{
	int s = 0; 
	int t = 0;

	while (n > 0)
	{
		while (s < n)
		{
			while (t < a)
			{
				_putchar(' ');
				t++;
			}
			s++;
			t = 0;
			_putchar('\\');
			_putchar('\n');
		}
		n++;
	}
	_putchar('\n');
}
