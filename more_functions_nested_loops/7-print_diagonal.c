#include "main.h"

/**
 * print_diagonal - prints a diagonal of length n
 * @n: The length of the diagonal
 */

void print_diagonal(int n)
{
	int s = 0;
	int t = 0;

	if (n > 0)
	{
		while (s < n)
		{
			while (t < s)
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
	else
	{
		_putchar('\n');
	}
}
